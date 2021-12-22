/********************************************************************************
** Form generated from reading UI file 'show_tree.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_TREE_H
#define UI_SHOW_TREE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_show_tree
{
public:

    void setupUi(QDialog *show_tree)
    {
        if (show_tree->objectName().isEmpty())
            show_tree->setObjectName(QString::fromUtf8("show_tree"));
        show_tree->resize(2000, 2000);
        show_tree->setMinimumSize(QSize(2000, 2000));

        retranslateUi(show_tree);

        QMetaObject::connectSlotsByName(show_tree);
    } // setupUi

    void retranslateUi(QDialog *show_tree)
    {
        show_tree->setWindowTitle(QCoreApplication::translate("show_tree", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class show_tree: public Ui_show_tree {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_TREE_H
