/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabGerenciamento;
    QWidget *tabProcessos;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLineEdit *lineEditPID;
    QPushButton *pushButtonKill;
    QPushButton *pushButtonAtualizar;
    QComboBox *comboBoxTipoProcesso;
    QSpacerItem *verticalSpacer;
    QWebView *webViewProcessos;
    QWidget *tabRecursos;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QCustomPlot *customPlot;
    QLabel *label_3;
    QCustomPlot *customPlot2;
    QWidget *tabEnergia;
    QHBoxLayout *horizontalLayout_2;
    QCustomPlot *customPlot3;
    QCustomPlot *customPlot4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(750, 368);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabGerenciamento = new QTabWidget(centralWidget);
        tabGerenciamento->setObjectName(QStringLiteral("tabGerenciamento"));
        tabProcessos = new QWidget();
        tabProcessos->setObjectName(QStringLiteral("tabProcessos"));
        horizontalLayout = new QHBoxLayout(tabProcessos);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        groupBox = new QGroupBox(tabProcessos);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMaximumSize(QSize(162, 119));
        groupBox->setStyleSheet(QStringLiteral(""));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label);

        lineEditPID = new QLineEdit(groupBox);
        lineEditPID->setObjectName(QStringLiteral("lineEditPID"));

        verticalLayout_3->addWidget(lineEditPID);

        pushButtonKill = new QPushButton(groupBox);
        pushButtonKill->setObjectName(QStringLiteral("pushButtonKill"));

        verticalLayout_3->addWidget(pushButtonKill);


        verticalLayout_2->addWidget(groupBox);

        pushButtonAtualizar = new QPushButton(tabProcessos);
        pushButtonAtualizar->setObjectName(QStringLiteral("pushButtonAtualizar"));
        pushButtonAtualizar->setMaximumSize(QSize(162, 27));

        verticalLayout_2->addWidget(pushButtonAtualizar);

        comboBoxTipoProcesso = new QComboBox(tabProcessos);
        comboBoxTipoProcesso->setObjectName(QStringLiteral("comboBoxTipoProcesso"));
        comboBoxTipoProcesso->setMaximumSize(QSize(162, 27));

        verticalLayout_2->addWidget(comboBoxTipoProcesso);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);

        webViewProcessos = new QWebView(tabProcessos);
        webViewProcessos->setObjectName(QStringLiteral("webViewProcessos"));
        webViewProcessos->setUrl(QUrl(QStringLiteral("about:blank")));

        horizontalLayout->addWidget(webViewProcessos);

        tabGerenciamento->addTab(tabProcessos, QString());
        tabRecursos = new QWidget();
        tabRecursos->setObjectName(QStringLiteral("tabRecursos"));
        verticalLayout_4 = new QVBoxLayout(tabRecursos);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_2 = new QLabel(tabRecursos);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(114, 17));

        verticalLayout_4->addWidget(label_2);

        customPlot = new QCustomPlot(tabRecursos);
        customPlot->setObjectName(QStringLiteral("customPlot"));

        verticalLayout_4->addWidget(customPlot);

        label_3 = new QLabel(tabRecursos);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(150, 17));

        verticalLayout_4->addWidget(label_3);

        customPlot2 = new QCustomPlot(tabRecursos);
        customPlot2->setObjectName(QStringLiteral("customPlot2"));

        verticalLayout_4->addWidget(customPlot2);

        tabGerenciamento->addTab(tabRecursos, QString());
        tabEnergia = new QWidget();
        tabEnergia->setObjectName(QStringLiteral("tabEnergia"));
        horizontalLayout_2 = new QHBoxLayout(tabEnergia);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        customPlot3 = new QCustomPlot(tabEnergia);
        customPlot3->setObjectName(QStringLiteral("customPlot3"));

        horizontalLayout_2->addWidget(customPlot3);

        customPlot4 = new QCustomPlot(tabEnergia);
        customPlot4->setObjectName(QStringLiteral("customPlot4"));

        horizontalLayout_2->addWidget(customPlot4);

        tabGerenciamento->addTab(tabEnergia, QString());

        verticalLayout->addWidget(tabGerenciamento);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 750, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabGerenciamento->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Gerenciamento de Processos", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Finalizar Processo", 0));
        label->setText(QApplication::translate("MainWindow", "PID", 0));
        pushButtonKill->setText(QApplication::translate("MainWindow", "Kill", 0));
        pushButtonAtualizar->setText(QApplication::translate("MainWindow", "Atualizar", 0));
        comboBoxTipoProcesso->clear();
        comboBoxTipoProcesso->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Filtro por CPU", 0)
         << QApplication::translate("MainWindow", "Filtro por Thread", 0)
         << QApplication::translate("MainWindow", "Filtro por Mem\303\263ria", 0)
         << QApplication::translate("MainWindow", "Filtro Gourmet", 0)
        );
        tabGerenciamento->setTabText(tabGerenciamento->indexOf(tabProcessos), QApplication::translate("MainWindow", "Processos", 0));
        label_2->setText(QApplication::translate("MainWindow", "Hist\303\263rico de CPU", 0));
        label_3->setText(QApplication::translate("MainWindow", "Hist\303\263rico de Mem\303\263ria", 0));
        tabGerenciamento->setTabText(tabGerenciamento->indexOf(tabRecursos), QApplication::translate("MainWindow", "Recursos", 0));
        tabGerenciamento->setTabText(tabGerenciamento->indexOf(tabEnergia), QApplication::translate("MainWindow", "Energia", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
