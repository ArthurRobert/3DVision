

#include"./mainVision.hpp"

int main(int argc, char *argv[]) {


    qDebug() << "test";

    QApplication app(argc, argv);

    QImage* im = new QImage();

    qDebug() << im->load("./bin/test.png");

    MainVision* windows = new MainVision();

    windows->show();

//    windows->refreshDisplay(im);

    //  qDebug() << "test2";
    return app.exec();
}
