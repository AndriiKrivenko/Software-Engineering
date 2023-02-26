#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->radioButton_2->setChecked(true); // за замовчування середній рівень складності
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_clicked()
{
    int DELAY=0;
    if (ui->radioButton->isChecked()) // легкий рівень
    {
        DELAY = 150;
        game=new Game(DELAY); // створюємо клас з параметром швидкості
        game->setWindowTitle("Змійка"); // назва вікна
        game->setWindowIcon(QIcon(":/resources/Image/Icon.png")); // картинка вікна
        this->close(); // Закриття меню
        game->show(); // показ
    }
    else if (ui->radioButton_2->isChecked()) // середній рівень
    {
        DELAY = 120;
        game=new Game(DELAY); // створюємо клас з параметром швидкості
        game->setWindowTitle("Змійка"); // назва вікна
        game->setWindowIcon(QIcon(":/resources/Image/Icon.png")); // картинка вікна
        this->close(); // Закриття меню
        game->show(); // показ
    } else if (ui->radioButton_3->isChecked()) // складний рівень
    {
        DELAY = 100;
        game=new Game(DELAY); // створюємо клас з параметром швидкості
        game->setWindowTitle("Змійка"); // назва вікна
        game->setWindowIcon(QIcon(":/resources/Image/Icon.png")); // картинка вікна
        this->close(); // Закриття меню
        game->show(); // показ
    } else if (ui->radioButton_4->isChecked()) // надскладний рівень
    {
        DELAY = 80;
        game=new Game(DELAY); // створюємо клас з параметром швидкості
        game->setWindowTitle("Змійка"); // назва вікна
        game->setWindowIcon(QIcon(":/resources/Image/Icon.png")); // картинка вікна
        this->close(); // Закриття меню
        game->show(); // показ
    }
}
void MainWindow::on_pushButton_3_clicked() // вихід з меню
{qApp->quit();}
void MainWindow::on_pushButton_4_clicked() // про автора
{
    QMessageBox msgb;
    msgb.setWindowTitle("Змійка"); // назва вікна
    msgb.setWindowIcon(QIcon(":/resources/Image/Icon.png")); // картинка вікна
    msgb.setText("Гра була розроблена для курсового проєкту.\n"
                 "Автор студент групи КІ-1709 - Кривенко Андрій."); // вивід тексту що гра закінчилась
    msgb.exec();
}
void MainWindow::on_pushButton_2_clicked() // допомога
{
    QMessageBox msgb;
    msgb.setWindowTitle("Змійка"); // назва вікна
    msgb.setWindowIcon(QIcon(":/resources/Image/Icon.png")); // картинка вікна
    msgb.setText("Допомога користувачу.\n"
                 "Перед початком гри рекомендується обрати рівень складності на свій розсуд.\n"
                 "За замовчуванням гра має середній рівень складності.\n"
                 "Щоб розпочати грати, потрібно натиснути кнопку 'Грати'.\n"
                 "Для виходу з головного меню, потрібно натиснути кнопку 'Вихід'.\n"
                 "Управління змійкою здійснюється клавішами-стрілками.\n"
                 "Для збільшення довжини змійки потрібно з'їсти 'Яблуко'.\n"
                 "Гра завершується якщо голова змійки доторкнеться свого тіла, або межі поля.\n"
                 "При завершені гри, з'явиться вікно, в якому запропонується 'Продовжити', або 'Вихід'.\n"
                 "Щоб закрити вікно гри, потрібно натиснути клавішу 'Esc'."); // вивід тексту що гра закінчилась

