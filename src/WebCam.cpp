

#include"./WebCam.hpp"


WebCam::WebCam() {

    thread = new QThread(this);
    moveToThread(thread);
    thread->start();

    mut.lock();
    stopCapture = false;
    mut.unlock();

//    cap = cv::VideoCapture(0);
}

WebCam::~WebCam() {


}


void WebCam::startStream() {
    cv::Mat gray;

    mut.lock();
    stopCapture = false;
    bool stop = stopCapture;
    mut.unlock();

    cv::VideoCapture cap2(0);
    if (!cap2.isOpened()) {
        qDebug() << "ononoinoin";
    }


    while (!stop) {

        qDebug() << stopCapture;

        cap2.read(gray);

        flux = new QImage(reinterpret_cast<uchar*>(gray.data), gray.cols
                        , gray.rows, gray.step, QImage::Format_RGB888);

        emit showFrame(flux);

        mut.lock();
        stop = stopCapture;
        mut.unlock();

    }

}

void WebCam::stopStream() {

    qDebug() << "jojerfojfeofijeorjio";
    mut.lock();
    stopCapture = true;
    mut.unlock();

}
