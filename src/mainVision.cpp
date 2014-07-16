
#include "./mainVision.hpp"

#include <opencv2/opencv.hpp>



MainVision::MainVision() {

  this->windows = new QDialog();
  this->ui.setupUi(this->windows);

  webCam = new WebCam();

  QObject::connect(ui.startStream, SIGNAL(clicked()),
                         webCam, SLOT(startStream()));


  QObject::connect(ui.stopStream, SIGNAL(clicked()),
                         this, SLOT(stopStream()));


  QObject::connect(webCam, SIGNAL(showFrame(QImage*)),
                         this, SLOT(refreshDisplay(QImage*) ) );
}


MainVision::~MainVision() {
    delete windows;
}

void MainVision::show() {
    if (windows)
        windows->show();
}

void MainVision::stopStream() {

webCam->stopStream();

}

void MainVision::refreshDisplay(QImage* im) {

    uint x = (ui.screen->width() - im->width())/2;
    uint y = (ui.screen->height() - im->height())/2;

    ui.display->setGeometry(x, y, im->width(), im->height());
    ui.display->setPixmap(QPixmap::fromImage(*im));

    delete im;
}



void MainVision::resize() {

    // uint xScreen = (ui.mainVision->width() - 100 - ui.screen->width())/2;
    // uint yScreen = (ui.mainVision->height() - 100  - ui.screen->height())/2;

    // ui.display->setGeometry(x, y, im->width(), im->height());

}
