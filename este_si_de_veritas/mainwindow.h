#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPixmap>
#include "linked_list.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QPixmap pix;
    linked_list <string> lista;
    linked_list <string>::iterator it;

char*a;

       explicit MainWindow(QWidget *parent = nullptr);
       ~MainWindow();

   private slots:
       void on_nextbutton_clicked();

       void on_backbutton_clicked();

   private:
       Ui::MainWindow *ui;
       string file;
       string name;
       string tags;
       string text;
   };

   #endif // MAINWINDOW_H
