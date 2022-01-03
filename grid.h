#ifndef GRID_H
#define GRID_H

#include <QWidget>
#include <QPushButton>
#include <QGroupBox>
#include <QHBoxLayout>


class Grid : public QWidget
{
    Q_OBJECT
public:
    explicit Grid(QWidget *parent = nullptr,int n=5);

private:
int GridSize;
int height;
int width;


signals:

public slots:
};

#endif // GRID_H
