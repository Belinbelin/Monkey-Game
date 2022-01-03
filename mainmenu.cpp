#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QApplication>
#include "mainmenu.h"
#include "grid.h"
#include <QFont>


void MainMenu::launchGrid(){
    Grid *grid = new Grid(nullptr);
    grid->show();
}


MainMenu::MainMenu(QWidget *parent)
    : QWidget{parent}
{
    this->setFixedSize(500,500);

    int WidgetHeight = 50;
    int WidgetWidth = 150;
    LaunchGame = new QPushButton("Launch game",this);
    LaunchGame->setGeometry(250-WidgetWidth/2,100,WidgetWidth,WidgetHeight);
    LaunchGame->setText("Allez");
    this->connect(LaunchGame,SIGNAL(clicked()),this,SLOT(launchGrid()));

    Exit = new QPushButton("Quit",this);
    Exit->setGeometry(250-WidgetWidth/2,100+3*WidgetHeight,WidgetWidth,WidgetHeight);
    this->connect(Exit,SIGNAL(clicked()),QApplication::instance(),SLOT (quit()));

    textbox = new QLineEdit(this);
    textbox->setGeometry(250-WidgetWidth/2,100+2*WidgetHeight,WidgetWidth,WidgetHeight);
    textbox->setInputMask("99");

    EnterGridSize = new QLabel("Enter desired grid size: (Default 5)",this);
    EnterGridSize->setGeometry(250-WidgetWidth/2,100+1*WidgetHeight,WidgetWidth*5,WidgetHeight);


}
