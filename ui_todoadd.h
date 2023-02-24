/********************************************************************************
** Form generated from reading UI file 'todoadd.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TODOADD_H
#define UI_TODOADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TodoAdd
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *add_text;
    QPushButton *add_button;
    QPushButton *cancel_btn;

    void setupUi(QDialog *TodoAdd)
    {
        if (TodoAdd->objectName().isEmpty())
            TodoAdd->setObjectName(QString::fromUtf8("TodoAdd"));
        TodoAdd->resize(388, 192);
        gridLayout = new QGridLayout(TodoAdd);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(TodoAdd);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Variable Text Semibold"));
        font.setPointSize(15);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(TodoAdd);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);

        horizontalLayout->addWidget(label_2);

        add_text = new QLineEdit(TodoAdd);
        add_text->setObjectName(QString::fromUtf8("add_text"));

        horizontalLayout->addWidget(add_text);


        verticalLayout_2->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 2);

        add_button = new QPushButton(TodoAdd);
        add_button->setObjectName(QString::fromUtf8("add_button"));

        gridLayout->addWidget(add_button, 1, 0, 1, 1);

        cancel_btn = new QPushButton(TodoAdd);
        cancel_btn->setObjectName(QString::fromUtf8("cancel_btn"));

        gridLayout->addWidget(cancel_btn, 1, 1, 1, 1);


        retranslateUi(TodoAdd);
        QObject::connect(cancel_btn, SIGNAL(clicked()), TodoAdd, SLOT(close()));

        QMetaObject::connectSlotsByName(TodoAdd);
    } // setupUi

    void retranslateUi(QDialog *TodoAdd)
    {
        TodoAdd->setWindowTitle(QCoreApplication::translate("TodoAdd", "Todo Add", nullptr));
        label->setText(QCoreApplication::translate("TodoAdd", "Add Form", nullptr));
        label_2->setText(QCoreApplication::translate("TodoAdd", "Todo: ", nullptr));
        add_button->setText(QCoreApplication::translate("TodoAdd", "ADD", nullptr));
        cancel_btn->setText(QCoreApplication::translate("TodoAdd", "CANCEL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TodoAdd: public Ui_TodoAdd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TODOADD_H
