#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QDialog>
#include "game.h"
namespace Ui {
class MainWindow;
}
class MainWindow : public QDialog
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_pushButton_clicked();
    void on_pushButton_4_clicked();  
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
private:
    Ui::MainWindow *ui;
    Game *game;
};

