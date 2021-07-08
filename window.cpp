#include "window.h"
#include <QPushButton>
#include <QApplication>
Window::Window(QWidget *parent) : QWidget(parent)
{
setFixedSize(300,150);
m_button = new QPushButton("button",this);
    QFont font("Courier");
    m_button->setFont(font);
    m_button->setText("test button");
    m_button->setToolTip("a tool tip");
 m_button->setGeometry(65, 30, 80, 30);

 connect(m_button,SIGNAL(pressed()),QApplication::instance(), SLOT(quit()));

}
