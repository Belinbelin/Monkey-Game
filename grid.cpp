#include <QScreen>
#include <QSize>
#include <QGuiApplication>

#include "grid.h"


/*Constructor with given GridSize*/

Grid::Grid(QWidget *parent, int n)
    : QWidget{parent}
{
    int GridSize = 5;
//    QScreen *screen = QGuiApplication::primaryScreen();
//    QSize SizeScreen = screen->availableSize();
//    height =SizeScreen.height();
//    width = SizeScreen.width();
//    QPushButton* Buttons[GridSize][GridSize];
    height = 500;
    width = 500;
    this->setFixedSize(width,height);
    for(int i = 0;i<GridSize;i++){
        for(int j = 0;j<GridSize;j++){
       QPushButton* Buttons[i][j] = new QPushButton("Salut",this);
       Buttons[i][j]->setGeometry(i*width/GridSize,j*height/GridSize,width/GridSize,height/GridSize);
       this->connect(Buttons[i][j],SIGNAL(clicked()),this,SLOT(launchGame()));
    }
    }
}



//void Grid::launchGame(){
//    qDebug()<< "Salut";
//    for(int i = 0;i<Grid::GridSize;i++){
//        for(int j = 0;j<Grid::GridSize;j++){
//            Grid::Buttons[i][j]->setText("C'est parti");
//        }
//    }
//}
