#ifndef mainmenu_H
#define mainmenu_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>

class MainMenu : public QWidget
{
    Q_OBJECT
public:
    explicit MainMenu(QWidget *parent = nullptr);

private:

    QPushButton *LaunchGame;
    QPushButton *Exit;
    QLineEdit *textbox;
    QLabel *EnterGridSize;

signals:

public slots:
    void launchGrid();

};

#endif // MAINMENU_H
