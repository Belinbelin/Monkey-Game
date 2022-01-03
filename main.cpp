#include <QApplication>
#include <QPushButton>
#include <iostream>
#include <MainMenu.h>
#include <QLineEdit>
#include <QLabel>

#include "mainmenu.h"
#include "grid.h"



int main(int argc, char **argv)
{
     QApplication app (argc, argv);
     app.setApplicationDisplayName("Monkey Game !");
     MainMenu menu;
     menu.show();

     return app.exec();
}
