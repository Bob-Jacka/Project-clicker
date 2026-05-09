#ifndef UI_FABRIC_HPP
#define UI_FABRIC_HPP

#include <QCheckBox>
#include <QLabel>
#include <QLCDNumber>
#include <QPushButton>
#include <QVBoxLayout>

/**
 * Main namespace for game
 */
namespace Clicker {
    namespace UI {
        struct Menu_bar {
            //
        };

        /**
        * Base element in game
        */
        struct Element {
            private:
                /**
                 * Lcd elements
                 */
                struct Lcds {
                    private:
                        QLCDNumber *next_upgrade_lcd;
                        QLCDNumber *proceed_lcd;

                    public:
                        Lcds() {
                            next_upgrade_lcd = new QLCDNumber();
                            proceed_lcd      = new QLCDNumber();
                        }

                        ~Lcds() = default;
                };

                /**
                 * Lower level menu with buttons
                 */
                struct Buttons {
                    QPushButton *buy_btn;
                    QPushButton *proceed_btn;
                    QCheckBox *  is_auto_checkbox;

                    Buttons() {
                        buy_btn          = new QPushButton();
                        proceed_btn      = new QPushButton();
                        is_auto_checkbox = new QCheckBox();
                    }

                    ~Buttons() = default;
                };

            public:
                Buttons *buttons;
                Lcds *   lcds;
        };


        struct Footer_menu {
            private:
                struct Balance {
                    QLabel *    label_name;
                    QLCDNumber *balance_lcd;
                };

            public:
                Balance *balance;

                Footer_menu() {
                    //
                }

                ~Footer_menu() = default;
        };

        class UI_fabric {
            private:
                void create_element() const;

                void create_footer_menu() const;

                template<typename T>
                    requires std::is_same_v<T, QVBoxLayout> || std::is_same_v<T, QHBoxLayout>
                T *create_framed_layout() const {
                    const auto frame = new QFrame();
                    frame->setFrameStyle(QFrame::Box | QFrame::Plain);
                    frame->setStyleSheet("border: 2px solid black; border-radius: 5px;");
                    auto layout = new QVBoxLayout(frame);
                    return layout;
                }

            public:
                explicit UI_fabric(QWidget *parent = nullptr);

                ~UI_fabric();

                UI_fabric() = default;

                UI_fabric(const UI_fabric &) = delete;

                UI_fabric &operator=(const UI_fabric &) = delete;

                void create_main_window();
        };
    }
}

#endif //UI_FABRIC_HPP
