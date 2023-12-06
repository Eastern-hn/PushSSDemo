/********************************************************************************
** Form generated from reading UI file 'PushSSDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUSHSSDEMO_H
#define UI_PUSHSSDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PushSSDemoClass
{
public:
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_11;
    QTextBrowser *m_info;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_10;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QPushButton *m_ImgRecStartBtn;
    QPushButton *m_ImgRecCloseBtn;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QPushButton *m_pushSoundStartBtn;
    QPushButton *m_pushSoundCloseBtn;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *m_em1SerLabel;
    QComboBox *m_em1Ser;
    QPushButton *m_em1SerOpenBtn;
    QPushButton *m_em1SerCloseBtn;
    QHBoxLayout *horizontalLayout_3;
    QLabel *m_em2SerLabel;
    QComboBox *m_em2Ser;
    QPushButton *m_em2SerOpenBtn;
    QPushButton *m_em2SerCloseBtn;
    QHBoxLayout *horizontalLayout_4;
    QLabel *m_emserBaudLbl;
    QSpacerItem *horizontalSpacer;
    QComboBox *m_emserBaud;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *m_emSerWrdLgthLbl;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *m_emSerWrdLgth;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *m_emSerStpBtLbl;
    QSpacerItem *horizontalSpacer_5;
    QComboBox *m_emSerStpBit;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *m_emSerChkBitLbl;
    QSpacerItem *horizontalSpacer_7;
    QComboBox *m_emSerChkBit;
    QSpacerItem *horizontalSpacer_8;

    void setupUi(QDialog *PushSSDemoClass)
    {
        if (PushSSDemoClass->objectName().isEmpty())
            PushSSDemoClass->setObjectName(QString::fromUtf8("PushSSDemoClass"));
        PushSSDemoClass->setEnabled(true);
        PushSSDemoClass->resize(612, 460);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PushSSDemoClass->sizePolicy().hasHeightForWidth());
        PushSSDemoClass->setSizePolicy(sizePolicy);
        PushSSDemoClass->setMinimumSize(QSize(612, 460));
        PushSSDemoClass->setMaximumSize(QSize(612, 460));
        groupBox_3 = new QGroupBox(PushSSDemoClass);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 313, 591, 141));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy1);
        horizontalLayout_11 = new QHBoxLayout(groupBox_3);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(2, 1, 2, 3);
        m_info = new QTextBrowser(groupBox_3);
        m_info->setObjectName(QString::fromUtf8("m_info"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_info->sizePolicy().hasHeightForWidth());
        m_info->setSizePolicy(sizePolicy2);
        m_info->setAutoFillBackground(false);

        horizontalLayout_11->addWidget(m_info);

        layoutWidget = new QWidget(PushSSDemoClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(11, 11, 591, 301));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, -1, 3, -1);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(label_7);

        m_ImgRecStartBtn = new QPushButton(groupBox_2);
        m_ImgRecStartBtn->setObjectName(QString::fromUtf8("m_ImgRecStartBtn"));

        horizontalLayout_8->addWidget(m_ImgRecStartBtn);

        m_ImgRecCloseBtn = new QPushButton(groupBox_2);
        m_ImgRecCloseBtn->setObjectName(QString::fromUtf8("m_ImgRecCloseBtn"));

        horizontalLayout_8->addWidget(m_ImgRecCloseBtn);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        horizontalLayout_9->addWidget(label_8);

        m_pushSoundStartBtn = new QPushButton(groupBox_2);
        m_pushSoundStartBtn->setObjectName(QString::fromUtf8("m_pushSoundStartBtn"));

        horizontalLayout_9->addWidget(m_pushSoundStartBtn);

        m_pushSoundCloseBtn = new QPushButton(groupBox_2);
        m_pushSoundCloseBtn->setObjectName(QString::fromUtf8("m_pushSoundCloseBtn"));

        horizontalLayout_9->addWidget(m_pushSoundCloseBtn);


        verticalLayout_4->addLayout(horizontalLayout_9);

        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout_10->addWidget(groupBox_2);

        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, -1, 5, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        m_em1SerLabel = new QLabel(groupBox);
        m_em1SerLabel->setObjectName(QString::fromUtf8("m_em1SerLabel"));
        sizePolicy.setHeightForWidth(m_em1SerLabel->sizePolicy().hasHeightForWidth());
        m_em1SerLabel->setSizePolicy(sizePolicy);
        m_em1SerLabel->setFrameShadow(QFrame::Plain);

        horizontalLayout_2->addWidget(m_em1SerLabel);

        m_em1Ser = new QComboBox(groupBox);
        m_em1Ser->setObjectName(QString::fromUtf8("m_em1Ser"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(m_em1Ser->sizePolicy().hasHeightForWidth());
        m_em1Ser->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(m_em1Ser);

        m_em1SerOpenBtn = new QPushButton(groupBox);
        m_em1SerOpenBtn->setObjectName(QString::fromUtf8("m_em1SerOpenBtn"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(m_em1SerOpenBtn->sizePolicy().hasHeightForWidth());
        m_em1SerOpenBtn->setSizePolicy(sizePolicy4);

        horizontalLayout_2->addWidget(m_em1SerOpenBtn);

        m_em1SerCloseBtn = new QPushButton(groupBox);
        m_em1SerCloseBtn->setObjectName(QString::fromUtf8("m_em1SerCloseBtn"));

        horizontalLayout_2->addWidget(m_em1SerCloseBtn);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        m_em2SerLabel = new QLabel(groupBox);
        m_em2SerLabel->setObjectName(QString::fromUtf8("m_em2SerLabel"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Ignored);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(m_em2SerLabel->sizePolicy().hasHeightForWidth());
        m_em2SerLabel->setSizePolicy(sizePolicy5);
        m_em2SerLabel->setFrameShadow(QFrame::Plain);

        horizontalLayout_3->addWidget(m_em2SerLabel);

        m_em2Ser = new QComboBox(groupBox);
        m_em2Ser->setObjectName(QString::fromUtf8("m_em2Ser"));

        horizontalLayout_3->addWidget(m_em2Ser);

        m_em2SerOpenBtn = new QPushButton(groupBox);
        m_em2SerOpenBtn->setObjectName(QString::fromUtf8("m_em2SerOpenBtn"));

        horizontalLayout_3->addWidget(m_em2SerOpenBtn);

        m_em2SerCloseBtn = new QPushButton(groupBox);
        m_em2SerCloseBtn->setObjectName(QString::fromUtf8("m_em2SerCloseBtn"));

        horizontalLayout_3->addWidget(m_em2SerCloseBtn);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        m_emserBaudLbl = new QLabel(groupBox);
        m_emserBaudLbl->setObjectName(QString::fromUtf8("m_emserBaudLbl"));
        m_emserBaudLbl->setEnabled(true);
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(3);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(m_emserBaudLbl->sizePolicy().hasHeightForWidth());
        m_emserBaudLbl->setSizePolicy(sizePolicy6);

        horizontalLayout_4->addWidget(m_emserBaudLbl);

        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        m_emserBaud = new QComboBox(groupBox);
        m_emserBaud->addItem(QString());
        m_emserBaud->addItem(QString());
        m_emserBaud->addItem(QString());
        m_emserBaud->addItem(QString());
        m_emserBaud->addItem(QString());
        m_emserBaud->addItem(QString());
        m_emserBaud->addItem(QString());
        m_emserBaud->setObjectName(QString::fromUtf8("m_emserBaud"));
        sizePolicy1.setHeightForWidth(m_emserBaud->sizePolicy().hasHeightForWidth());
        m_emserBaud->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(m_emserBaud);

        horizontalSpacer_2 = new QSpacerItem(80, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        m_emSerWrdLgthLbl = new QLabel(groupBox);
        m_emSerWrdLgthLbl->setObjectName(QString::fromUtf8("m_emSerWrdLgthLbl"));
        QSizePolicy sizePolicy7(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(m_emSerWrdLgthLbl->sizePolicy().hasHeightForWidth());
        m_emSerWrdLgthLbl->setSizePolicy(sizePolicy7);

        horizontalLayout_5->addWidget(m_emSerWrdLgthLbl);

        horizontalSpacer_3 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        m_emSerWrdLgth = new QComboBox(groupBox);
        m_emSerWrdLgth->addItem(QString());
        m_emSerWrdLgth->addItem(QString());
        m_emSerWrdLgth->addItem(QString());
        m_emSerWrdLgth->addItem(QString());
        m_emSerWrdLgth->setObjectName(QString::fromUtf8("m_emSerWrdLgth"));

        horizontalLayout_5->addWidget(m_emSerWrdLgth);

        horizontalSpacer_4 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        m_emSerStpBtLbl = new QLabel(groupBox);
        m_emSerStpBtLbl->setObjectName(QString::fromUtf8("m_emSerStpBtLbl"));
        sizePolicy7.setHeightForWidth(m_emSerStpBtLbl->sizePolicy().hasHeightForWidth());
        m_emSerStpBtLbl->setSizePolicy(sizePolicy7);

        horizontalLayout_6->addWidget(m_emSerStpBtLbl);

        horizontalSpacer_5 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        m_emSerStpBit = new QComboBox(groupBox);
        m_emSerStpBit->addItem(QString());
        m_emSerStpBit->addItem(QString());
        m_emSerStpBit->addItem(QString());
        m_emSerStpBit->addItem(QString());
        m_emSerStpBit->setObjectName(QString::fromUtf8("m_emSerStpBit"));

        horizontalLayout_6->addWidget(m_emSerStpBit);

        horizontalSpacer_6 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        m_emSerChkBitLbl = new QLabel(groupBox);
        m_emSerChkBitLbl->setObjectName(QString::fromUtf8("m_emSerChkBitLbl"));
        sizePolicy7.setHeightForWidth(m_emSerChkBitLbl->sizePolicy().hasHeightForWidth());
        m_emSerChkBitLbl->setSizePolicy(sizePolicy7);

        horizontalLayout_7->addWidget(m_emSerChkBitLbl);

        horizontalSpacer_7 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        m_emSerChkBit = new QComboBox(groupBox);
        m_emSerChkBit->addItem(QString());
        m_emSerChkBit->addItem(QString());
        m_emSerChkBit->addItem(QString());
        m_emSerChkBit->addItem(QString());
        m_emSerChkBit->addItem(QString());
        m_emSerChkBit->setObjectName(QString::fromUtf8("m_emSerChkBit"));

        horizontalLayout_7->addWidget(m_emSerChkBit);

        horizontalSpacer_8 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_7);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_10->addWidget(groupBox);


        retranslateUi(PushSSDemoClass);

        QMetaObject::connectSlotsByName(PushSSDemoClass);
    } // setupUi

    void retranslateUi(QDialog *PushSSDemoClass)
    {
        PushSSDemoClass->setWindowTitle(QCoreApplication::translate("PushSSDemoClass", "PushSoundWindow", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("PushSSDemoClass", "\347\212\266\346\200\201", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("PushSSDemoClass", "\345\233\276\345\275\242\350\257\206\345\210\253\344\270\216\351\237\263\351\242\221\346\216\250\351\200\201", nullptr));
        label_7->setText(QCoreApplication::translate("PushSSDemoClass", "\345\233\276\345\203\217\350\257\206\345\210\253\357\274\232", nullptr));
        m_ImgRecStartBtn->setText(QCoreApplication::translate("PushSSDemoClass", "\345\220\257\345\212\250", nullptr));
        m_ImgRecCloseBtn->setText(QCoreApplication::translate("PushSSDemoClass", "\345\205\263\351\227\255", nullptr));
        label_8->setText(QCoreApplication::translate("PushSSDemoClass", "\351\237\263\351\242\221\346\216\250\351\200\201\357\274\232", nullptr));
        m_pushSoundStartBtn->setText(QCoreApplication::translate("PushSSDemoClass", "\345\220\257\345\212\250", nullptr));
        m_pushSoundCloseBtn->setText(QCoreApplication::translate("PushSSDemoClass", "\345\205\263\351\227\255", nullptr));
        groupBox->setTitle(QCoreApplication::translate("PushSSDemoClass", "\351\237\263\351\242\221\345\217\221\345\260\204\345\231\250\344\270\262\345\217\243\350\256\276\347\275\256", nullptr));
        m_em1SerLabel->setText(QCoreApplication::translate("PushSSDemoClass", "\345\217\221\345\260\204\345\231\2501\344\270\262\345\217\243\357\274\232", nullptr));
        m_em1SerOpenBtn->setText(QCoreApplication::translate("PushSSDemoClass", "\346\211\223\345\274\200", nullptr));
        m_em1SerCloseBtn->setText(QCoreApplication::translate("PushSSDemoClass", "\345\205\263\351\227\255", nullptr));
        m_em2SerLabel->setText(QCoreApplication::translate("PushSSDemoClass", "\345\217\221\345\260\204\345\231\2502\344\270\262\345\217\243\357\274\232", nullptr));
        m_em2SerOpenBtn->setText(QCoreApplication::translate("PushSSDemoClass", "\346\211\223\345\274\200", nullptr));
        m_em2SerCloseBtn->setText(QCoreApplication::translate("PushSSDemoClass", "\345\205\263\351\227\255", nullptr));
        m_emserBaudLbl->setText(QCoreApplication::translate("PushSSDemoClass", "\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        m_emserBaud->setItemText(0, QCoreApplication::translate("PushSSDemoClass", "115200", nullptr));
        m_emserBaud->setItemText(1, QCoreApplication::translate("PushSSDemoClass", "57600", nullptr));
        m_emserBaud->setItemText(2, QCoreApplication::translate("PushSSDemoClass", "38400", nullptr));
        m_emserBaud->setItemText(3, QCoreApplication::translate("PushSSDemoClass", "19200", nullptr));
        m_emserBaud->setItemText(4, QCoreApplication::translate("PushSSDemoClass", "9600", nullptr));
        m_emserBaud->setItemText(5, QCoreApplication::translate("PushSSDemoClass", "4800", nullptr));
        m_emserBaud->setItemText(6, QCoreApplication::translate("PushSSDemoClass", "2400", nullptr));

        m_emSerWrdLgthLbl->setText(QCoreApplication::translate("PushSSDemoClass", "\346\225\260\346\215\256\344\275\215\357\274\232", nullptr));
        m_emSerWrdLgth->setItemText(0, QCoreApplication::translate("PushSSDemoClass", "8", nullptr));
        m_emSerWrdLgth->setItemText(1, QCoreApplication::translate("PushSSDemoClass", "7", nullptr));
        m_emSerWrdLgth->setItemText(2, QCoreApplication::translate("PushSSDemoClass", "6", nullptr));
        m_emSerWrdLgth->setItemText(3, QCoreApplication::translate("PushSSDemoClass", "5", nullptr));

        m_emSerStpBtLbl->setText(QCoreApplication::translate("PushSSDemoClass", "\345\201\234\346\255\242\344\275\215\357\274\232", nullptr));
        m_emSerStpBit->setItemText(0, QCoreApplication::translate("PushSSDemoClass", "1", nullptr));
        m_emSerStpBit->setItemText(1, QCoreApplication::translate("PushSSDemoClass", "2", nullptr));
        m_emSerStpBit->setItemText(2, QCoreApplication::translate("PushSSDemoClass", "4", nullptr));
        m_emSerStpBit->setItemText(3, QCoreApplication::translate("PushSSDemoClass", "8", nullptr));

        m_emSerChkBitLbl->setText(QCoreApplication::translate("PushSSDemoClass", "\346\240\241\351\252\214\344\275\215\357\274\232", nullptr));
        m_emSerChkBit->setItemText(0, QCoreApplication::translate("PushSSDemoClass", "None", nullptr));
        m_emSerChkBit->setItemText(1, QCoreApplication::translate("PushSSDemoClass", "Odd", nullptr));
        m_emSerChkBit->setItemText(2, QCoreApplication::translate("PushSSDemoClass", "Even", nullptr));
        m_emSerChkBit->setItemText(3, QCoreApplication::translate("PushSSDemoClass", "Mark", nullptr));
        m_emSerChkBit->setItemText(4, QCoreApplication::translate("PushSSDemoClass", "Space", nullptr));

    } // retranslateUi

};

namespace Ui {
    class PushSSDemoClass: public Ui_PushSSDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUSHSSDEMO_H
