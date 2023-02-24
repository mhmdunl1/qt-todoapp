/********************************************************************************
** Form generated from reading UI file 'todoedit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TODOEDIT_H
#define UI_TODOEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TodoEdit
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *text;
    QPushButton *ok_btn;

    void setupUi(QWidget *TodoEdit)
    {
        if (TodoEdit->objectName().isEmpty())
            TodoEdit->setObjectName(QString::fromUtf8("TodoEdit"));
        TodoEdit->resize(387, 114);
        gridLayout = new QGridLayout(TodoEdit);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(TodoEdit);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        text = new QLineEdit(TodoEdit);
        text->setObjectName(QString::fromUtf8("text"));

        gridLayout->addWidget(text, 1, 0, 1, 1);

        ok_btn = new QPushButton(TodoEdit);
        ok_btn->setObjectName(QString::fromUtf8("ok_btn"));

        gridLayout->addWidget(ok_btn, 2, 0, 1, 1);


        retranslateUi(TodoEdit);

        QMetaObject::connectSlotsByName(TodoEdit);
    } // setupUi

    void retranslateUi(QWidget *TodoEdit)
    {
        TodoEdit->setWindowTitle(QCoreApplication::translate("TodoEdit", "Form", nullptr));
        label->setText(QCoreApplication::translate("TodoEdit", "Edit Form", nullptr));
        ok_btn->setText(QCoreApplication::translate("TodoEdit", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TodoEdit: public Ui_TodoEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TODOEDIT_H
