#include <QApplication>
#include <QPushButton>
#include <QWindow>

// #define DYNAMIC //comment or uncomment this line

#ifndef DYNAMIC
/********************************************************************************
** Form generated from reading UI file 'main_window_designSPESIl.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAIN_WINDOW_DESIGNSPESIL_H
#define MAIN_WINDOW_DESIGNSPESIL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow : public QWidget {
        Q_OBJECT

    public:
        QWidget *    centralwidget;
        QWidget *    gridLayoutWidget;
        QGridLayout *Mainlayout;
        QHBoxLayout *Elements_grid;
        QVBoxLayout *min;
        QVBoxLayout *elem1;
        QLabel *     first_elem_name;
        QHBoxLayout *numbers_8;
        QVBoxLayout *how_many_receive_8;
        QLCDNumber * lcdNumber_16;
        QLabel *     label_9;
        QFrame *     line_9;
        QVBoxLayout *next_buy_count_8;
        QLCDNumber * lcdNumber_17;
        QLabel *     count_8;
        QHBoxLayout *buttons_6;
        QPushButton *buy_1;
        QPushButton *proceed_1;
        QCheckBox *  is_auto_1;
        QVBoxLayout *elem2;
        QLabel *     second_elem_name;
        QHBoxLayout *numbers_9;
        QVBoxLayout *how_many_receive_9;
        QLCDNumber * lcdNumber_18;
        QLabel *     label_10;
        QFrame *     line_10;
        QVBoxLayout *next_buy_count_9;
        QLCDNumber * lcdNumber_19;
        QLabel *     count_9;
        QHBoxLayout *buttons_7;
        QPushButton *buy_2;
        QPushButton *proceed_2;
        QCheckBox *  is_auto_2;
        QVBoxLayout *elem3;
        QLabel *     third_elem_name;
        QHBoxLayout *numbers_4;
        QVBoxLayout *how_many_receive_4;
        QLCDNumber * lcdNumber_7;
        QLabel *     label_5;
        QFrame *     line_4;
        QVBoxLayout *next_buy_count_4;
        QLCDNumber * lcdNumber_8;
        QLabel *     count_4;
        QHBoxLayout *buttons_5;
        QPushButton *buy_3;
        QPushButton *proceed_3;
        QCheckBox *  is_auto_3;
        QFrame *     line_7;
        QVBoxLayout *advanced;
        QVBoxLayout *elem4;
        QLabel *     fourth_elem_name;
        QHBoxLayout *numbers_2;
        QVBoxLayout *how_many_receive_2;
        QLCDNumber * lcdNumber_3;
        QLabel *     label_3;
        QFrame *     line_2;
        QVBoxLayout *next_buy_count_2;
        QLCDNumber * lcdNumber_4;
        QLabel *     count_2;
        QHBoxLayout *buttons_4;
        QPushButton *buy_4;
        QPushButton *proceed_4;
        QCheckBox *  is_auto_4;
        QVBoxLayout *elem5;
        QLabel *     fifth_elem_name;
        QHBoxLayout *numbers_6;
        QVBoxLayout *how_many_receive_6;
        QLCDNumber * lcdNumber_11;
        QLabel *     label_7;
        QFrame *     line_6;
        QVBoxLayout *next_buy_count_6;
        QLCDNumber * lcdNumber_12;
        QLabel *     count_6;
        QHBoxLayout *buttons_3;
        QPushButton *buy_5;
        QPushButton *proceed_5;
        QCheckBox *  is_auto_5;
        QVBoxLayout *elem6;
        QLabel *     sixth_elem_name;
        QHBoxLayout *numbers_5;
        QVBoxLayout *how_many_receive_5;
        QLCDNumber * lcdNumber_9;
        QLabel *     label_6;
        QFrame *     line_5;
        QVBoxLayout *next_buy_count_5;
        QLCDNumber * lcdNumber_10;
        QLabel *     count_5;
        QHBoxLayout *buttons_2;
        QPushButton *buy_6;
        QPushButton *proceed_6;
        QCheckBox *  is_auto_6;
        QFormLayout *Footer_menu;
        QPushButton *Sellgalaxy_btn;
        QPushButton *Save_btn;
        QPushButton *Settings_btn;
        QPushButton *pushButton_2;
        QPushButton *pushButton_5;
        QHBoxLayout *Current_balance;
        QLCDNumber * Balance_;
        QSpacerItem *verticalSpacer;
        QLabel *     label;
        QPushButton *pushButton_3;
        QPushButton *pushButton;
        QSpacerItem *horizontalSpacer;
        QMenuBar *   menubar;
        QMenu *      menuMenu;
        QMenu *      menuQuit;
        QStatusBar * statusbar;

        void setupUi(QMainWindow *MainWindow) {
            if (MainWindow->objectName().isEmpty())
                MainWindow->setObjectName("MainWindow");
            MainWindow->resize(920, 670);
            QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
            sizePolicy.setHorizontalStretch(0);
            sizePolicy.setVerticalStretch(0);
            sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
            MainWindow->setSizePolicy(sizePolicy);
            MainWindow->setMinimumSize(QSize(920, 670));
            MainWindow->setMaximumSize(QSize(920, 670));
            MainWindow->setDockNestingEnabled(false);
            centralwidget = new QWidget(MainWindow);
            centralwidget->setObjectName("centralwidget");
            sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
            centralwidget->setSizePolicy(sizePolicy);
            centralwidget->setMinimumSize(QSize(600, 600));
            gridLayoutWidget = new QWidget(centralwidget);
            gridLayoutWidget->setObjectName("gridLayoutWidget");
            gridLayoutWidget->setGeometry(QRect(10, 10, 896, 766));
            Mainlayout = new QGridLayout(gridLayoutWidget);
            Mainlayout->setObjectName("Mainlayout");
            Mainlayout->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);
            Mainlayout->setHorizontalSpacing(0);
            Mainlayout->setVerticalSpacing(20);
            Mainlayout->setContentsMargins(0, 0, 0, 0);
            Elements_grid = new QHBoxLayout();
            Elements_grid->setSpacing(15);
            Elements_grid->setObjectName("Elements_grid");
            Elements_grid->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
            Elements_grid->setContentsMargins(0, 0, -1, 0);
            min = new QVBoxLayout();
            min->setSpacing(6);
            min->setObjectName("min");
            elem1 = new QVBoxLayout();
            elem1->setSpacing(6);
            elem1->setObjectName("elem1");
            first_elem_name = new QLabel(gridLayoutWidget);
            first_elem_name->setObjectName("first_elem_name");
            first_elem_name->setEnabled(true);
            QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
            sizePolicy1.setHorizontalStretch(0);
            sizePolicy1.setVerticalStretch(0);
            sizePolicy1.setHeightForWidth(first_elem_name->sizePolicy().hasHeightForWidth());
            first_elem_name->setSizePolicy(sizePolicy1);
            first_elem_name->setMaximumSize(QSize(365, 61));
            first_elem_name->setFrameShape(QFrame::Shape::NoFrame);
            first_elem_name->setAlignment(Qt::AlignmentFlag::AlignCenter);
            first_elem_name->setWordWrap(false);
            first_elem_name->setTextInteractionFlags(Qt::TextInteractionFlag::NoTextInteraction);

            elem1->addWidget(first_elem_name);

            numbers_8 = new QHBoxLayout();
            numbers_8->setObjectName("numbers_8");
            how_many_receive_8 = new QVBoxLayout();
            how_many_receive_8->setObjectName("how_many_receive_8");
            lcdNumber_16 = new QLCDNumber(gridLayoutWidget);
            lcdNumber_16->setObjectName("lcdNumber_16");

            how_many_receive_8->addWidget(lcdNumber_16);

            label_9 = new QLabel(gridLayoutWidget);
            label_9->setObjectName("label_9");

            how_many_receive_8->addWidget(label_9);


            numbers_8->addLayout(how_many_receive_8);

            line_9 = new QFrame(gridLayoutWidget);
            line_9->setObjectName("line_9");
            line_9->setFrameShape(QFrame::Shape::VLine);
            line_9->setFrameShadow(QFrame::Shadow::Sunken);

            numbers_8->addWidget(line_9);

            next_buy_count_8 = new QVBoxLayout();
            next_buy_count_8->setObjectName("next_buy_count_8");
            lcdNumber_17 = new QLCDNumber(gridLayoutWidget);
            lcdNumber_17->setObjectName("lcdNumber_17");

            next_buy_count_8->addWidget(lcdNumber_17);

            count_8 = new QLabel(gridLayoutWidget);
            count_8->setObjectName("count_8");

            next_buy_count_8->addWidget(count_8);


            numbers_8->addLayout(next_buy_count_8);


            elem1->addLayout(numbers_8);

            buttons_6 = new QHBoxLayout();
            buttons_6->setObjectName("buttons_6");
            buy_1 = new QPushButton(gridLayoutWidget);
            buy_1->setObjectName("buy_1");
            buy_1->setAutoFillBackground(false);

            buttons_6->addWidget(buy_1);

            proceed_1 = new QPushButton(gridLayoutWidget);
            proceed_1->setObjectName("proceed_1");

            buttons_6->addWidget(proceed_1);

            is_auto_1 = new QCheckBox(gridLayoutWidget);
            is_auto_1->setObjectName("is_auto_1");

            buttons_6->addWidget(is_auto_1);


            elem1->addLayout(buttons_6);


            min->addLayout(elem1);

            elem2 = new QVBoxLayout();
            elem2->setObjectName("elem2");
            second_elem_name = new QLabel(gridLayoutWidget);
            second_elem_name->setObjectName("second_elem_name");
            second_elem_name->setEnabled(true);
            sizePolicy1.setHeightForWidth(second_elem_name->sizePolicy().hasHeightForWidth());
            second_elem_name->setSizePolicy(sizePolicy1);
            second_elem_name->setMaximumSize(QSize(365, 61));
            second_elem_name->setFrameShape(QFrame::Shape::NoFrame);
            second_elem_name->setAlignment(Qt::AlignmentFlag::AlignCenter);
            second_elem_name->setWordWrap(false);
            second_elem_name->setTextInteractionFlags(Qt::TextInteractionFlag::NoTextInteraction);

            elem2->addWidget(second_elem_name);

            numbers_9 = new QHBoxLayout();
            numbers_9->setObjectName("numbers_9");
            how_many_receive_9 = new QVBoxLayout();
            how_many_receive_9->setObjectName("how_many_receive_9");
            lcdNumber_18 = new QLCDNumber(gridLayoutWidget);
            lcdNumber_18->setObjectName("lcdNumber_18");

            how_many_receive_9->addWidget(lcdNumber_18);

            label_10 = new QLabel(gridLayoutWidget);
            label_10->setObjectName("label_10");

            how_many_receive_9->addWidget(label_10);


            numbers_9->addLayout(how_many_receive_9);

            line_10 = new QFrame(gridLayoutWidget);
            line_10->setObjectName("line_10");
            line_10->setFrameShape(QFrame::Shape::VLine);
            line_10->setFrameShadow(QFrame::Shadow::Sunken);

            numbers_9->addWidget(line_10);

            next_buy_count_9 = new QVBoxLayout();
            next_buy_count_9->setObjectName("next_buy_count_9");
            lcdNumber_19 = new QLCDNumber(gridLayoutWidget);
            lcdNumber_19->setObjectName("lcdNumber_19");

            next_buy_count_9->addWidget(lcdNumber_19);

            count_9 = new QLabel(gridLayoutWidget);
            count_9->setObjectName("count_9");

            next_buy_count_9->addWidget(count_9);


            numbers_9->addLayout(next_buy_count_9);


            elem2->addLayout(numbers_9);

            buttons_7 = new QHBoxLayout();
            buttons_7->setObjectName("buttons_7");
            buy_2 = new QPushButton(gridLayoutWidget);
            buy_2->setObjectName("buy_2");
            buy_2->setAutoFillBackground(false);

            buttons_7->addWidget(buy_2);

            proceed_2 = new QPushButton(gridLayoutWidget);
            proceed_2->setObjectName("proceed_2");

            buttons_7->addWidget(proceed_2);

            is_auto_2 = new QCheckBox(gridLayoutWidget);
            is_auto_2->setObjectName("is_auto_2");

            buttons_7->addWidget(is_auto_2);


            elem2->addLayout(buttons_7);


            min->addLayout(elem2);

            elem3 = new QVBoxLayout();
            elem3->setObjectName("elem3");
            third_elem_name = new QLabel(gridLayoutWidget);
            third_elem_name->setObjectName("third_elem_name");
            third_elem_name->setEnabled(true);
            sizePolicy1.setHeightForWidth(third_elem_name->sizePolicy().hasHeightForWidth());
            third_elem_name->setSizePolicy(sizePolicy1);
            third_elem_name->setMaximumSize(QSize(365, 61));
            third_elem_name->setFrameShape(QFrame::Shape::NoFrame);
            third_elem_name->setAlignment(Qt::AlignmentFlag::AlignCenter);
            third_elem_name->setWordWrap(false);
            third_elem_name->setTextInteractionFlags(Qt::TextInteractionFlag::NoTextInteraction);

            elem3->addWidget(third_elem_name);

            numbers_4 = new QHBoxLayout();
            numbers_4->setObjectName("numbers_4");
            how_many_receive_4 = new QVBoxLayout();
            how_many_receive_4->setObjectName("how_many_receive_4");
            lcdNumber_7 = new QLCDNumber(gridLayoutWidget);
            lcdNumber_7->setObjectName("lcdNumber_7");

            how_many_receive_4->addWidget(lcdNumber_7);

            label_5 = new QLabel(gridLayoutWidget);
            label_5->setObjectName("label_5");

            how_many_receive_4->addWidget(label_5);


            numbers_4->addLayout(how_many_receive_4);

            line_4 = new QFrame(gridLayoutWidget);
            line_4->setObjectName("line_4");
            line_4->setFrameShape(QFrame::Shape::VLine);
            line_4->setFrameShadow(QFrame::Shadow::Sunken);

            numbers_4->addWidget(line_4);

            next_buy_count_4 = new QVBoxLayout();
            next_buy_count_4->setObjectName("next_buy_count_4");
            lcdNumber_8 = new QLCDNumber(gridLayoutWidget);
            lcdNumber_8->setObjectName("lcdNumber_8");

            next_buy_count_4->addWidget(lcdNumber_8);

            count_4 = new QLabel(gridLayoutWidget);
            count_4->setObjectName("count_4");

            next_buy_count_4->addWidget(count_4);


            numbers_4->addLayout(next_buy_count_4);


            elem3->addLayout(numbers_4);

            buttons_5 = new QHBoxLayout();
            buttons_5->setObjectName("buttons_5");
            buy_3 = new QPushButton(gridLayoutWidget);
            buy_3->setObjectName("buy_3");
            buy_3->setAutoFillBackground(false);

            buttons_5->addWidget(buy_3);

            proceed_3 = new QPushButton(gridLayoutWidget);
            proceed_3->setObjectName("proceed_3");

            buttons_5->addWidget(proceed_3);

            is_auto_3 = new QCheckBox(gridLayoutWidget);
            is_auto_3->setObjectName("is_auto_3");

            buttons_5->addWidget(is_auto_3);


            elem3->addLayout(buttons_5);


            min->addLayout(elem3);


            Elements_grid->addLayout(min);

            line_7 = new QFrame(gridLayoutWidget);
            line_7->setObjectName("line_7");
            line_7->setFrameShape(QFrame::Shape::VLine);
            line_7->setFrameShadow(QFrame::Shadow::Sunken);

            Elements_grid->addWidget(line_7);

            advanced = new QVBoxLayout();
            advanced->setSpacing(6);
            advanced->setObjectName("advanced");
            advanced->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
            advanced->setContentsMargins(-1, -1, -1, 0);
            elem4 = new QVBoxLayout();
            elem4->setObjectName("elem4");
            fourth_elem_name = new QLabel(gridLayoutWidget);
            fourth_elem_name->setObjectName("fourth_elem_name");
            fourth_elem_name->setEnabled(true);
            sizePolicy1.setHeightForWidth(fourth_elem_name->sizePolicy().hasHeightForWidth());
            fourth_elem_name->setSizePolicy(sizePolicy1);
            fourth_elem_name->setMaximumSize(QSize(365, 61));
            fourth_elem_name->setFrameShape(QFrame::Shape::NoFrame);
            fourth_elem_name->setAlignment(Qt::AlignmentFlag::AlignCenter);
            fourth_elem_name->setWordWrap(false);
            fourth_elem_name->setTextInteractionFlags(Qt::TextInteractionFlag::NoTextInteraction);

            elem4->addWidget(fourth_elem_name);

            numbers_2 = new QHBoxLayout();
            numbers_2->setObjectName("numbers_2");
            how_many_receive_2 = new QVBoxLayout();
            how_many_receive_2->setObjectName("how_many_receive_2");
            lcdNumber_3 = new QLCDNumber(gridLayoutWidget);
            lcdNumber_3->setObjectName("lcdNumber_3");

            how_many_receive_2->addWidget(lcdNumber_3);

            label_3 = new QLabel(gridLayoutWidget);
            label_3->setObjectName("label_3");

            how_many_receive_2->addWidget(label_3);


            numbers_2->addLayout(how_many_receive_2);

            line_2 = new QFrame(gridLayoutWidget);
            line_2->setObjectName("line_2");
            line_2->setFrameShape(QFrame::Shape::VLine);
            line_2->setFrameShadow(QFrame::Shadow::Sunken);

            numbers_2->addWidget(line_2);

            next_buy_count_2 = new QVBoxLayout();
            next_buy_count_2->setObjectName("next_buy_count_2");
            lcdNumber_4 = new QLCDNumber(gridLayoutWidget);
            lcdNumber_4->setObjectName("lcdNumber_4");

            next_buy_count_2->addWidget(lcdNumber_4);

            count_2 = new QLabel(gridLayoutWidget);
            count_2->setObjectName("count_2");

            next_buy_count_2->addWidget(count_2);


            numbers_2->addLayout(next_buy_count_2);


            elem4->addLayout(numbers_2);

            buttons_4 = new QHBoxLayout();
            buttons_4->setObjectName("buttons_4");
            buy_4 = new QPushButton(gridLayoutWidget);
            buy_4->setObjectName("buy_4");
            buy_4->setAutoFillBackground(false);

            buttons_4->addWidget(buy_4);

            proceed_4 = new QPushButton(gridLayoutWidget);
            proceed_4->setObjectName("proceed_4");

            buttons_4->addWidget(proceed_4);

            is_auto_4 = new QCheckBox(gridLayoutWidget);
            is_auto_4->setObjectName("is_auto_4");

            buttons_4->addWidget(is_auto_4);


            elem4->addLayout(buttons_4);


            advanced->addLayout(elem4);

            elem5 = new QVBoxLayout();
            elem5->setSpacing(6);
            elem5->setObjectName("elem5");
            fifth_elem_name = new QLabel(gridLayoutWidget);
            fifth_elem_name->setObjectName("fifth_elem_name");
            fifth_elem_name->setEnabled(true);
            sizePolicy1.setHeightForWidth(fifth_elem_name->sizePolicy().hasHeightForWidth());
            fifth_elem_name->setSizePolicy(sizePolicy1);
            fifth_elem_name->setMaximumSize(QSize(365, 61));
            fifth_elem_name->setFrameShape(QFrame::Shape::NoFrame);
            fifth_elem_name->setFrameShadow(QFrame::Shadow::Plain);
            fifth_elem_name->setLineWidth(1);
            fifth_elem_name->setAlignment(Qt::AlignmentFlag::AlignCenter);
            fifth_elem_name->setWordWrap(false);
            fifth_elem_name->setTextInteractionFlags(Qt::TextInteractionFlag::NoTextInteraction);

            elem5->addWidget(fifth_elem_name);

            numbers_6 = new QHBoxLayout();
            numbers_6->setObjectName("numbers_6");
            how_many_receive_6 = new QVBoxLayout();
            how_many_receive_6->setObjectName("how_many_receive_6");
            lcdNumber_11 = new QLCDNumber(gridLayoutWidget);
            lcdNumber_11->setObjectName("lcdNumber_11");

            how_many_receive_6->addWidget(lcdNumber_11);

            label_7 = new QLabel(gridLayoutWidget);
            label_7->setObjectName("label_7");

            how_many_receive_6->addWidget(label_7);


            numbers_6->addLayout(how_many_receive_6);

            line_6 = new QFrame(gridLayoutWidget);
            line_6->setObjectName("line_6");
            line_6->setFrameShape(QFrame::Shape::VLine);
            line_6->setFrameShadow(QFrame::Shadow::Sunken);

            numbers_6->addWidget(line_6);

            next_buy_count_6 = new QVBoxLayout();
            next_buy_count_6->setObjectName("next_buy_count_6");
            lcdNumber_12 = new QLCDNumber(gridLayoutWidget);
            lcdNumber_12->setObjectName("lcdNumber_12");

            next_buy_count_6->addWidget(lcdNumber_12);

            count_6 = new QLabel(gridLayoutWidget);
            count_6->setObjectName("count_6");

            next_buy_count_6->addWidget(count_6);


            numbers_6->addLayout(next_buy_count_6);


            elem5->addLayout(numbers_6);

            buttons_3 = new QHBoxLayout();
            buttons_3->setObjectName("buttons_3");
            buy_5 = new QPushButton(gridLayoutWidget);
            buy_5->setObjectName("buy_5");
            buy_5->setAutoFillBackground(false);

            buttons_3->addWidget(buy_5);

            proceed_5 = new QPushButton(gridLayoutWidget);
            proceed_5->setObjectName("proceed_5");

            buttons_3->addWidget(proceed_5);

            is_auto_5 = new QCheckBox(gridLayoutWidget);
            is_auto_5->setObjectName("is_auto_5");

            buttons_3->addWidget(is_auto_5);


            elem5->addLayout(buttons_3);


            advanced->addLayout(elem5);

            elem6 = new QVBoxLayout();
            elem6->setObjectName("elem6");
            sixth_elem_name = new QLabel(gridLayoutWidget);
            sixth_elem_name->setObjectName("sixth_elem_name");
            sixth_elem_name->setEnabled(true);
            sizePolicy1.setHeightForWidth(sixth_elem_name->sizePolicy().hasHeightForWidth());
            sixth_elem_name->setSizePolicy(sizePolicy1);
            sixth_elem_name->setMaximumSize(QSize(365, 61));
            sixth_elem_name->setFrameShape(QFrame::Shape::NoFrame);
            sixth_elem_name->setAlignment(Qt::AlignmentFlag::AlignCenter);
            sixth_elem_name->setWordWrap(false);
            sixth_elem_name->setTextInteractionFlags(Qt::TextInteractionFlag::NoTextInteraction);

            elem6->addWidget(sixth_elem_name);

            numbers_5 = new QHBoxLayout();
            numbers_5->setObjectName("numbers_5");
            how_many_receive_5 = new QVBoxLayout();
            how_many_receive_5->setObjectName("how_many_receive_5");
            lcdNumber_9 = new QLCDNumber(gridLayoutWidget);
            lcdNumber_9->setObjectName("lcdNumber_9");

            how_many_receive_5->addWidget(lcdNumber_9);

            label_6 = new QLabel(gridLayoutWidget);
            label_6->setObjectName("label_6");

            how_many_receive_5->addWidget(label_6);


            numbers_5->addLayout(how_many_receive_5);

            line_5 = new QFrame(gridLayoutWidget);
            line_5->setObjectName("line_5");
            line_5->setFrameShape(QFrame::Shape::VLine);
            line_5->setFrameShadow(QFrame::Shadow::Sunken);

            numbers_5->addWidget(line_5);

            next_buy_count_5 = new QVBoxLayout();
            next_buy_count_5->setObjectName("next_buy_count_5");
            lcdNumber_10 = new QLCDNumber(gridLayoutWidget);
            lcdNumber_10->setObjectName("lcdNumber_10");

            next_buy_count_5->addWidget(lcdNumber_10);

            count_5 = new QLabel(gridLayoutWidget);
            count_5->setObjectName("count_5");

            next_buy_count_5->addWidget(count_5);


            numbers_5->addLayout(next_buy_count_5);


            elem6->addLayout(numbers_5);

            buttons_2 = new QHBoxLayout();
            buttons_2->setObjectName("buttons_2");
            buy_6 = new QPushButton(gridLayoutWidget);
            buy_6->setObjectName("buy_6");
            buy_6->setAutoFillBackground(false);

            buttons_2->addWidget(buy_6);

            proceed_6 = new QPushButton(gridLayoutWidget);
            proceed_6->setObjectName("proceed_6");

            buttons_2->addWidget(proceed_6);

            is_auto_6 = new QCheckBox(gridLayoutWidget);
            is_auto_6->setObjectName("is_auto_6");

            buttons_2->addWidget(is_auto_6);


            elem6->addLayout(buttons_2);


            advanced->addLayout(elem6);


            Elements_grid->addLayout(advanced);


            Mainlayout->addLayout(Elements_grid, 1, 0, 1, 1);

            Footer_menu = new QFormLayout();
            Footer_menu->setObjectName("Footer_menu");
            Footer_menu->setSizeConstraint(QLayout::SizeConstraint::SetMinAndMaxSize);
            Footer_menu->setFieldGrowthPolicy(QFormLayout::FieldGrowthPolicy::AllNonFixedFieldsGrow);
            Footer_menu->setRowWrapPolicy(QFormLayout::RowWrapPolicy::WrapAllRows);
            Footer_menu->setLabelAlignment(Qt::AlignmentFlag::AlignHCenter | Qt::AlignmentFlag::AlignTop);
            Footer_menu->setFormAlignment(Qt::AlignmentFlag::AlignJustify | Qt::AlignmentFlag::AlignTop);
            Footer_menu->setHorizontalSpacing(0);
            Footer_menu->setVerticalSpacing(0);
            Footer_menu->setContentsMargins(0, 0, 0, 0);
            Sellgalaxy_btn = new QPushButton(gridLayoutWidget);
            Sellgalaxy_btn->setObjectName("Sellgalaxy_btn");
            Sellgalaxy_btn->setEnabled(true);
            QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
            sizePolicy2.setHorizontalStretch(0);
            sizePolicy2.setVerticalStretch(0);
            sizePolicy2.setHeightForWidth(Sellgalaxy_btn->sizePolicy().hasHeightForWidth());
            Sellgalaxy_btn->setSizePolicy(sizePolicy2);
            Sellgalaxy_btn->setMaximumSize(QSize(16777215, 16777215));
            Sellgalaxy_btn->setAcceptDrops(false);

            Footer_menu->setWidget(4, QFormLayout::FieldRole, Sellgalaxy_btn);

            Save_btn = new QPushButton(gridLayoutWidget);
            Save_btn->setObjectName("Save_btn");

            Footer_menu->setWidget(6, QFormLayout::FieldRole, Save_btn);

            Settings_btn = new QPushButton(gridLayoutWidget);
            Settings_btn->setObjectName("Settings_btn");
            Settings_btn->setLayoutDirection(Qt::LayoutDirection::LeftToRight);

            Footer_menu->setWidget(7, QFormLayout::FieldRole, Settings_btn);

            pushButton_2 = new QPushButton(gridLayoutWidget);
            pushButton_2->setObjectName("pushButton_2");

            Footer_menu->setWidget(3, QFormLayout::FieldRole, pushButton_2);

            pushButton_5 = new QPushButton(gridLayoutWidget);
            pushButton_5->setObjectName("pushButton_5");

            Footer_menu->setWidget(8, QFormLayout::FieldRole, pushButton_5);

            Current_balance = new QHBoxLayout();
            Current_balance->setSpacing(0);
            Current_balance->setObjectName("Current_balance");
            Current_balance->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);
            Balance_ = new QLCDNumber(gridLayoutWidget);
            Balance_->setObjectName("Balance_");
            Balance_->setFrameShape(QFrame::Shape::Box);
            Balance_->setFrameShadow(QFrame::Shadow::Plain);
            Balance_->setSmallDecimalPoint(false);
            Balance_->setDigitCount(90);
            Balance_->setSegmentStyle(QLCDNumber::SegmentStyle::Filled);
            Balance_->setProperty("value", QVariant(99.000000000000000));
            Balance_->setProperty("intValue", QVariant(99));

            Current_balance->addWidget(Balance_);

            verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

            Current_balance->addItem(verticalSpacer);

            label = new QLabel(gridLayoutWidget);
            label->setObjectName("label");

            Current_balance->addWidget(label);


            Footer_menu->setLayout(0, QFormLayout::SpanningRole, Current_balance);

            pushButton_3 = new QPushButton(gridLayoutWidget);
            pushButton_3->setObjectName("pushButton_3");

            Footer_menu->setWidget(2, QFormLayout::FieldRole, pushButton_3);

            pushButton = new QPushButton(gridLayoutWidget);
            pushButton->setObjectName("pushButton");

            Footer_menu->setWidget(1, QFormLayout::FieldRole, pushButton);


            Mainlayout->addLayout(Footer_menu, 3, 0, 1, 1);

            horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

            Mainlayout->addItem(horizontalSpacer, 2, 0, 1, 1);

            MainWindow->setCentralWidget(centralwidget);
            menubar = new QMenuBar(MainWindow);
            menubar->setObjectName("menubar");
            menubar->setGeometry(QRect(0, 0, 920, 22));
            menubar->setDefaultUp(false);
            menuMenu = new QMenu(menubar);
            menuMenu->setObjectName("menuMenu");
            menuQuit = new QMenu(menubar);
            menuQuit->setObjectName("menuQuit");
            MainWindow->setMenuBar(menubar);
            statusbar = new QStatusBar(MainWindow);
            statusbar->setObjectName("statusbar");
            MainWindow->setStatusBar(statusbar);

            menubar->addAction(menuMenu->menuAction());
            menubar->addAction(menuQuit->menuAction());

            retranslateUi(MainWindow);

            QMetaObject::connectSlotsByName(MainWindow);
        } // setupUi

        void retranslateUi(QMainWindow *MainWindow) {
            MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
            first_elem_name->setText(QCoreApplication::translate("MainWindow", "First element", nullptr));
            label_9->setText(QCoreApplication::translate("MainWindow", "Next upgrade cost", nullptr));
            count_8->setText(QCoreApplication::translate("MainWindow", "Proceed count", nullptr));
            buy_1->setText(QCoreApplication::translate("MainWindow", "Buy", nullptr));
            proceed_1->setText(QCoreApplication::translate("MainWindow", "Proceed", nullptr));
            is_auto_1->setText(QCoreApplication::translate("MainWindow", "is auto", nullptr));
            second_elem_name->setText(QCoreApplication::translate("MainWindow", "Second element", nullptr));
            label_10->setText(QCoreApplication::translate("MainWindow", "Next upgrade cost", nullptr));
            count_9->setText(QCoreApplication::translate("MainWindow", "Proceed count", nullptr));
            buy_2->setText(QCoreApplication::translate("MainWindow", "Buy", nullptr));
            proceed_2->setText(QCoreApplication::translate("MainWindow", "Proceed", nullptr));
            is_auto_2->setText(QCoreApplication::translate("MainWindow", "is auto", nullptr));
            third_elem_name->setText(QCoreApplication::translate("MainWindow", "Third element", nullptr));
            label_5->setText(QCoreApplication::translate("MainWindow", "Next upgrade cost", nullptr));
            count_4->setText(QCoreApplication::translate("MainWindow", "Proceed count", nullptr));
            buy_3->setText(QCoreApplication::translate("MainWindow", "Buy", nullptr));
            proceed_3->setText(QCoreApplication::translate("MainWindow", "Proceed", nullptr));
            is_auto_3->setText(QCoreApplication::translate("MainWindow", "is auto", nullptr));
            fourth_elem_name->setText(QCoreApplication::translate("MainWindow", "Fourth element", nullptr));
            label_3->setText(QCoreApplication::translate("MainWindow", "Next upgrade cost", nullptr));
            count_2->setText(QCoreApplication::translate("MainWindow", "Proceed count", nullptr));
            buy_4->setText(QCoreApplication::translate("MainWindow", "Buy", nullptr));
            proceed_4->setText(QCoreApplication::translate("MainWindow", "Proceed", nullptr));
            is_auto_4->setText(QCoreApplication::translate("MainWindow", "is auto", nullptr));
            fifth_elem_name->setText(QCoreApplication::translate("MainWindow", "Fifth element", nullptr));
            label_7->setText(QCoreApplication::translate("MainWindow", "Next upgrade cost", nullptr));
            count_6->setText(QCoreApplication::translate("MainWindow", "Proceed count", nullptr));
            buy_5->setText(QCoreApplication::translate("MainWindow", "Buy", nullptr));
            proceed_5->setText(QCoreApplication::translate("MainWindow", "Proceed", nullptr));
            is_auto_5->setText(QCoreApplication::translate("MainWindow", "is auto", nullptr));
            sixth_elem_name->setText(QCoreApplication::translate("MainWindow", "Sixth element", nullptr));
            label_6->setText(QCoreApplication::translate("MainWindow", "Next upgrade cost", nullptr));
            count_5->setText(QCoreApplication::translate("MainWindow", "Proceed count", nullptr));
            buy_6->setText(QCoreApplication::translate("MainWindow", "Buy", nullptr));
            proceed_6->setText(QCoreApplication::translate("MainWindow", "Proceed", nullptr));
            is_auto_6->setText(QCoreApplication::translate("MainWindow", "is auto", nullptr));
            Sellgalaxy_btn->setText(QCoreApplication::translate("MainWindow", "Sell galaxy", nullptr));
            Save_btn->setText(QCoreApplication::translate("MainWindow", "Save progress", nullptr));
            Settings_btn->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
            pushButton_2->setText(QCoreApplication::translate("MainWindow", "Office workers", nullptr));
            pushButton_5->setText(QCoreApplication::translate("MainWindow", "Quit game", nullptr));
            label->setText(QCoreApplication::translate("MainWindow", "Balance", nullptr));
            pushButton_3->setText(QCoreApplication::translate("MainWindow", "About game", nullptr));
            pushButton->setText(QCoreApplication::translate("MainWindow", "Achivements", nullptr));
            menuMenu->setTitle(QCoreApplication::translate("MainWindow", "Save", nullptr));
            menuQuit->setTitle(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        } // retranslateUi
};

namespace Ui {
    class MainWindow final : public Ui_MainWindow {
    };
} // namespace Ui

QT_END_NAMESPACE
#endif
#endif

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

#ifdef DYNAMIC

    QWindow     window;
    QPushButton button("Hello world!", nullptr);
    button.resize(200, 100);
    button.show();

#endif // DYNAMIC
    return QApplication::exec();
}
