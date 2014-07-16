#ifndef _WEBCAM_H_
#define _WEBCAM_H_

#include <QObject>
#include <QImage>
#include <QThread>
#include <QMutex>
#include <QDebug>
#include <opencv2/opencv.hpp>


class WebCam: public QObject{
    Q_OBJECT

public:
    WebCam();
    ~WebCam();

public slots:
    void startStream();
    void stopStream();

signals:
    void showFrame(QImage* im);

private:
    cv::VideoCapture cap;
    bool stopCapture;
    QImage *flux;

    QMutex mut;
    QThread *thread;
};


#endif // _WEBCAM_H_
