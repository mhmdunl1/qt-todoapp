/********************************************************************************
** Form generated from reading UI file 'todomain.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TODOMAIN_H
#define UI_TODOMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TodoMain
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QListWidget *todoList;
    QLabel *label;
    QPushButton *del_btn;
    QPushButton *add_btn;
    QPushButton *edit_btn;

    void setupUi(QMainWindow *TodoMain)
    {
        if (TodoMain->objectName().isEmpty())
            TodoMain->setObjectName(QString::fromUtf8("TodoMain"));
        TodoMain->resize(410, 295);
        centralwidget = new QWidget(TodoMain);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        todoList = new QListWidget(centralwidget);
        todoList->setObjectName(QString::fromUtf8("todoList"));
        QFont font;
        font.setBold(false);
        font.setStrikeOut(false);
        todoList->setFont(font);
        todoList->setAcceptDrops(false);
        todoList->setLayoutDirection(Qt::LeftToRight);
        todoList->setStyleSheet(QString::fromUtf8(""));
        todoList->setAlternatingRowColors(false);
        todoList->setMovement(QListView::Static);
        todoList->setProperty("isWrapping", QVariant(false));
        todoList->setSortingEnabled(false);

        gridLayout->addWidget(todoList, 3, 0, 1, 3);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(24);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8(""));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 2, 0, 1, 3);

        del_btn = new QPushButton(centralwidget);
        del_btn->setObjectName(QString::fromUtf8("del_btn"));

        gridLayout->addWidget(del_btn, 5, 1, 1, 1);

        add_btn = new QPushButton(centralwidget);
        add_btn->setObjectName(QString::fromUtf8("add_btn"));

        gridLayout->addWidget(add_btn, 5, 0, 1, 1);

        edit_btn = new QPushButton(centralwidget);
        edit_btn->setObjectName(QString::fromUtf8("edit_btn"));

        gridLayout->addWidget(edit_btn, 5, 2, 1, 1);

        TodoMain->setCentralWidget(centralwidget);

        retranslateUi(TodoMain);

        QMetaObject::connectSlotsByName(TodoMain);
    } // setupUi

    void retranslateUi(QMainWindow *TodoMain)
    {
        TodoMain->setWindowTitle(QCoreApplication::translate("TodoMain", "TodoMain", nullptr));
        label->setText(QCoreApplication::translate("TodoMain", "Todo App", nullptr));
        del_btn->setText(QCoreApplication::translate("TodoMain", "DEL", nullptr));
        add_btn->setText(QCoreApplication::translate("TodoMain", "ADD", nullptr));
        edit_btn->setText(QCoreApplication::translate("TodoMain", "EDIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TodoMain: public Ui_TodoMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TODOMAIN_H
