/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSummary;
    QAction *actionCell;
    QAction *actionGene_list;
    QAction *actionGene;
    QAction *actionSnapshot;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *summaryLabel;
    QTextBrowser *summaryBrowser;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_2;
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QGroupBox *simParameters;
    QGridLayout *gridLayout;
    QPushButton *geneListButton;
    QLabel *noGen;
    QPushButton *summButton;
    QLabel *simName;
    QLabel *simSize;
    QLabel *snapInterval;
    QLineEdit *nameEdit;
    QLineEdit *sizeEdit;
    QLineEdit *genEdit;
    QLineEdit *snapEdit;
    QLineEdit *summPath;
    QLineEdit *genelistPath;
    QGroupBox *fitnessFunction;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QGroupBox *DFE;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_3;
    QComboBox *distributionType;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *shapeEdit;
    QLineEdit *scaleEdit;
    QGroupBox *fitLandscape;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_4;
    QLineEdit *landscapeAEdit;
    QPushButton *landscapeB;
    QPushButton *landscapeA;
    QLineEdit *landscapeBEdit;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *theoryOrExp;
    QRadioButton *theoretical;
    QRadioButton *experimental;
    QComboBox *functionType;
    QProgressBar *progressBar;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *chooseWorkDir;
    QLineEdit *workingDir;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuCreate;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QButtonGroup *functionTypeGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 659);
        actionSummary = new QAction(MainWindow);
        actionSummary->setObjectName(QStringLiteral("actionSummary"));
        actionCell = new QAction(MainWindow);
        actionCell->setObjectName(QStringLiteral("actionCell"));
        actionGene_list = new QAction(MainWindow);
        actionGene_list->setObjectName(QStringLiteral("actionGene_list"));
        actionGene = new QAction(MainWindow);
        actionGene->setObjectName(QStringLiteral("actionGene"));
        actionSnapshot = new QAction(MainWindow);
        actionSnapshot->setObjectName(QStringLiteral("actionSnapshot"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 70, 271, 491));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        summaryLabel = new QLabel(verticalLayoutWidget_2);
        summaryLabel->setObjectName(QStringLiteral("summaryLabel"));
        summaryLabel->setEnabled(false);
        summaryLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(summaryLabel);

        summaryBrowser = new QTextBrowser(verticalLayoutWidget_2);
        summaryBrowser->setObjectName(QStringLiteral("summaryBrowser"));
        summaryBrowser->setEnabled(false);

        verticalLayout_2->addWidget(summaryBrowser);

        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(9, 39, 271, 21));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(verticalLayoutWidget_3);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 261, 19));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_3->addWidget(frame_2);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(290, 526, 501, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(horizontalLayoutWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout->addWidget(checkBox);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout->addWidget(pushButton);

        simParameters = new QGroupBox(centralwidget);
        simParameters->setObjectName(QStringLiteral("simParameters"));
        simParameters->setGeometry(QRect(289, 39, 501, 241));
        gridLayout = new QGridLayout(simParameters);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        geneListButton = new QPushButton(simParameters);
        geneListButton->setObjectName(QStringLiteral("geneListButton"));

        gridLayout->addWidget(geneListButton, 5, 0, 1, 1);

        noGen = new QLabel(simParameters);
        noGen->setObjectName(QStringLiteral("noGen"));

        gridLayout->addWidget(noGen, 2, 0, 1, 1);

        summButton = new QPushButton(simParameters);
        summButton->setObjectName(QStringLiteral("summButton"));

        gridLayout->addWidget(summButton, 4, 0, 1, 1);

        simName = new QLabel(simParameters);
        simName->setObjectName(QStringLiteral("simName"));

        gridLayout->addWidget(simName, 0, 0, 1, 1);

        simSize = new QLabel(simParameters);
        simSize->setObjectName(QStringLiteral("simSize"));

        gridLayout->addWidget(simSize, 1, 0, 1, 1);

        snapInterval = new QLabel(simParameters);
        snapInterval->setObjectName(QStringLiteral("snapInterval"));

        gridLayout->addWidget(snapInterval, 3, 0, 1, 1);

        nameEdit = new QLineEdit(simParameters);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));

        gridLayout->addWidget(nameEdit, 0, 1, 1, 1);

        sizeEdit = new QLineEdit(simParameters);
        sizeEdit->setObjectName(QStringLiteral("sizeEdit"));

        gridLayout->addWidget(sizeEdit, 1, 1, 1, 1);

        genEdit = new QLineEdit(simParameters);
        genEdit->setObjectName(QStringLiteral("genEdit"));

        gridLayout->addWidget(genEdit, 2, 1, 1, 1);

        snapEdit = new QLineEdit(simParameters);
        snapEdit->setObjectName(QStringLiteral("snapEdit"));

        gridLayout->addWidget(snapEdit, 3, 1, 1, 1);

        summPath = new QLineEdit(simParameters);
        summPath->setObjectName(QStringLiteral("summPath"));

        gridLayout->addWidget(summPath, 4, 1, 1, 1);

        genelistPath = new QLineEdit(simParameters);
        genelistPath->setObjectName(QStringLiteral("genelistPath"));

        gridLayout->addWidget(genelistPath, 5, 1, 1, 1);

        fitnessFunction = new QGroupBox(centralwidget);
        fitnessFunction->setObjectName(QStringLiteral("fitnessFunction"));
        fitnessFunction->setGeometry(QRect(289, 279, 501, 241));
        gridLayoutWidget = new QWidget(fitnessFunction);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(-1, 89, 501, 151));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        DFE = new QGroupBox(gridLayoutWidget);
        DFE->setObjectName(QStringLiteral("DFE"));
        DFE->setEnabled(true);
        gridLayoutWidget_2 = new QWidget(DFE);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(9, 19, 231, 131));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        distributionType = new QComboBox(gridLayoutWidget_2);
        distributionType->setObjectName(QStringLiteral("distributionType"));
        distributionType->setInsertPolicy(QComboBox::InsertAtBottom);

        gridLayout_3->addWidget(distributionType, 1, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_3->addWidget(label_7, 2, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_3->addWidget(label_8, 3, 0, 1, 1);

        shapeEdit = new QLineEdit(gridLayoutWidget_2);
        shapeEdit->setObjectName(QStringLiteral("shapeEdit"));

        gridLayout_3->addWidget(shapeEdit, 2, 1, 1, 1);

        scaleEdit = new QLineEdit(gridLayoutWidget_2);
        scaleEdit->setObjectName(QStringLiteral("scaleEdit"));

        gridLayout_3->addWidget(scaleEdit, 3, 1, 1, 1);


        gridLayout_2->addWidget(DFE, 0, 0, 1, 1);

        fitLandscape = new QGroupBox(gridLayoutWidget);
        fitLandscape->setObjectName(QStringLiteral("fitLandscape"));
        fitLandscape->setEnabled(false);
        gridLayoutWidget_3 = new QWidget(fitLandscape);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(0, 60, 241, 91));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        landscapeAEdit = new QLineEdit(gridLayoutWidget_3);
        landscapeAEdit->setObjectName(QStringLiteral("landscapeAEdit"));

        gridLayout_4->addWidget(landscapeAEdit, 0, 1, 1, 1);

        landscapeB = new QPushButton(gridLayoutWidget_3);
        landscapeB->setObjectName(QStringLiteral("landscapeB"));

        gridLayout_4->addWidget(landscapeB, 1, 0, 1, 1);

        landscapeA = new QPushButton(gridLayoutWidget_3);
        landscapeA->setObjectName(QStringLiteral("landscapeA"));

        gridLayout_4->addWidget(landscapeA, 0, 0, 1, 1);

        landscapeBEdit = new QLineEdit(gridLayoutWidget_3);
        landscapeBEdit->setObjectName(QStringLiteral("landscapeBEdit"));

        gridLayout_4->addWidget(landscapeBEdit, 1, 1, 1, 1);


        gridLayout_2->addWidget(fitLandscape, 0, 1, 1, 1);

        horizontalLayoutWidget_2 = new QWidget(fitnessFunction);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 20, 501, 41));
        theoryOrExp = new QHBoxLayout(horizontalLayoutWidget_2);
        theoryOrExp->setObjectName(QStringLiteral("theoryOrExp"));
        theoryOrExp->setContentsMargins(0, 0, 0, 0);
        theoretical = new QRadioButton(horizontalLayoutWidget_2);
        functionTypeGroup = new QButtonGroup(MainWindow);
        functionTypeGroup->setObjectName(QStringLiteral("functionTypeGroup"));
        functionTypeGroup->addButton(theoretical);
        theoretical->setObjectName(QStringLiteral("theoretical"));
        theoretical->setChecked(true);

        theoryOrExp->addWidget(theoretical);

        experimental = new QRadioButton(horizontalLayoutWidget_2);
        functionTypeGroup->addButton(experimental);
        experimental->setObjectName(QStringLiteral("experimental"));

        theoryOrExp->addWidget(experimental);

        functionType = new QComboBox(fitnessFunction);
        functionType->setObjectName(QStringLiteral("functionType"));
        functionType->setGeometry(QRect(0, 60, 501, 25));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(10, 570, 781, 23));
        progressBar->setValue(0);
        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 0, 781, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        chooseWorkDir = new QPushButton(horizontalLayoutWidget_3);
        chooseWorkDir->setObjectName(QStringLiteral("chooseWorkDir"));

        horizontalLayout_2->addWidget(chooseWorkDir);

        workingDir = new QLineEdit(horizontalLayoutWidget_3);
        workingDir->setObjectName(QStringLiteral("workingDir"));

        horizontalLayout_2->addWidget(workingDir);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuCreate = new QMenu(menuFile);
        menuCreate->setObjectName(QStringLiteral("menuCreate"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(menuCreate->menuAction());
        menuCreate->addAction(actionSnapshot);
        menuCreate->addAction(actionSummary);
        menuCreate->addAction(actionCell);
        menuCreate->addAction(actionGene_list);
        menuCreate->addAction(actionGene);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Sodapop", Q_NULLPTR));
        actionSummary->setText(QApplication::translate("MainWindow", "Population summary", Q_NULLPTR));
        actionCell->setText(QApplication::translate("MainWindow", "Cell", Q_NULLPTR));
        actionGene_list->setText(QApplication::translate("MainWindow", "Gene list", Q_NULLPTR));
        actionGene->setText(QApplication::translate("MainWindow", "Gene", Q_NULLPTR));
        actionSnapshot->setText(QApplication::translate("MainWindow", "Snapshot", Q_NULLPTR));
        summaryLabel->setText(QApplication::translate("MainWindow", "Here's a summary of your population", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Welcome to Sodapop!", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "Run analysis utilities", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Run simulation", Q_NULLPTR));
        simParameters->setTitle(QApplication::translate("MainWindow", "Simulation parameters", Q_NULLPTR));
        geneListButton->setText(QApplication::translate("MainWindow", "Load gene list", Q_NULLPTR));
        noGen->setText(QApplication::translate("MainWindow", "Number of generations", Q_NULLPTR));
        summButton->setText(QApplication::translate("MainWindow", "Load snapshot", Q_NULLPTR));
        simName->setText(QApplication::translate("MainWindow", "Simulation name", Q_NULLPTR));
        simSize->setText(QApplication::translate("MainWindow", "Simulation size", Q_NULLPTR));
        snapInterval->setText(QApplication::translate("MainWindow", "Snapshot interval", Q_NULLPTR));
        sizeEdit->setText(QApplication::translate("MainWindow", "1000", Q_NULLPTR));
        genEdit->setText(QApplication::translate("MainWindow", "10000", Q_NULLPTR));
        snapEdit->setText(QApplication::translate("MainWindow", "50", Q_NULLPTR));
        fitnessFunction->setTitle(QApplication::translate("MainWindow", "Fitness function", Q_NULLPTR));
        DFE->setTitle(QApplication::translate("MainWindow", "Distribution of fitness effects", Q_NULLPTR));
        distributionType->clear();
        distributionType->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Normal", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Gamma", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Exponential", Q_NULLPTR)
        );
        label_7->setText(QApplication::translate("MainWindow", "Shape", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Scale", Q_NULLPTR));
        fitLandscape->setTitle(QApplication::translate("MainWindow", "Fitness landscape", Q_NULLPTR));
        landscapeB->setText(QApplication::translate("MainWindow", "Load matrix", Q_NULLPTR));
        landscapeA->setText(QApplication::translate("MainWindow", "Load matrix", Q_NULLPTR));
        theoretical->setText(QApplication::translate("MainWindow", "Theoretical", Q_NULLPTR));
        experimental->setText(QApplication::translate("MainWindow", "Experimental", Q_NULLPTR));
        functionType->clear();
        functionType->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Additive", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Multiplicative", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Neutral", Q_NULLPTR)
        );
        chooseWorkDir->setText(QApplication::translate("MainWindow", "Select working directory", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuCreate->setTitle(QApplication::translate("MainWindow", "New", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
