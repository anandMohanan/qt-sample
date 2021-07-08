#include <QApplication>
#include <QPushButton>
#include "window.h"
int main(int argc,char **argv){
    QApplication app(argc,argv);

    Window window;
//    window.setFixedSize(200,150);


//    QPushButton *button = new QPushButton("hello",&window);
////    QPushButton button1("another button",&button);
//    QFont font("Courier");
//    button->setFont(font);
//    button->setText("test button");
//    button->setToolTip("a tool tip");

////    button.show();
//    button->setGeometry(65, 30, 80, 30);
    window.show();

    return app.exec();
}
