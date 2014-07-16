
#ifndef _MAINVISION_H_
#define _MAINVISION_H_

#include <QApplication>
#include <QObject>
#include <QWidget>
#include <QDebug>
#include <QDialog>
#include <QGraphicsView>
#include <QImage>
#include "./ui_mainVision_GUI.h"
#include "./WebCam.hpp"

class MainVision: public QObject{

    Q_OBJECT

public:
    MainVision();
    ~MainVision();

    void show();

public slots:
    void resize();
    void refreshDisplay(QImage* im);
    void stopStream();

private:
    QDialog* windows;
    Ui::mainVision ui;
    WebCam* webCam;

};
#endif // _MAINVISION_H_
