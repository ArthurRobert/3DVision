/********************************************************************************
** Form generated from reading UI file 'mainVision_GUI.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINVISION_GUI_H
#define UI_MAINVISION_GUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainVision
{
public:
    QPushButton *startStream;
    QWidget *screen;
    QLabel *display;
    QPushButton *stopStream;

    void setupUi(QDialog *mainVision)
    {
        if (mainVision->objectName().isEmpty())
            mainVision->setObjectName(QString::fromUtf8("mainVision"));
        mainVision->resize(900, 651);
        mainVision->setLayoutDirection(Qt::LeftToRight);
        mainVision->setAutoFillBackground(false);
        startStream = new QPushButton(mainVision);
        startStream->setObjectName(QString::fromUtf8("startStream"));
        startStream->setGeometry(QRect(20, 590, 101, 24));
        screen = new QWidget(mainVision);
        screen->setObjectName(QString::fromUtf8("screen"));
        screen->setGeometry(QRect(10, 10, 571, 541));
        display = new QLabel(screen);
        display->setObjectName(QString::fromUtf8("display"));
        display->setGeometry(QRect(230, 250, 57, 14));
        stopStream = new QPushButton(mainVision);
        stopStream->setObjectName(QString::fromUtf8("stopStream"));
        stopStream->setGeometry(QRect(140, 590, 83, 24));

        retranslateUi(mainVision);

        QMetaObject::connectSlotsByName(mainVision);
    } // setupUi

    void retranslateUi(QDialog *mainVision)
    {
        mainVision->setWindowTitle(QApplication::translate("mainVision", "Dialog", 0, QApplication::UnicodeUTF8));
        startStream->setText(QApplication::translate("mainVision", "Start Stream", 0, QApplication::UnicodeUTF8));
        display->setText(QString());
        stopStream->setText(QApplication::translate("mainVision", "Stop Stream", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mainVision: public Ui_mainVision {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINVISION_GUI_H
