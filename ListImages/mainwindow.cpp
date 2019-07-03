#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_add_clicked(){
    QString ubication=QFileDialog::getOpenFileName(this,tr("Escoger"),"",tr("Images(*.png *.jpg *.jpeg *.bmp *..gif)"));

    if(QString::compare(ubication,QString())!=0){
        /*
        QImage image;
        bool valid =image.load(ubication);
        if(valid){
            Imagen_ image_(image,"TITULO",ubication);
            dlist.push_back(image_);
        }
        else{
            //no se pudo cardar
        }*/

        QImage image;
        bool valid =image.load(ubication);
        if(valid){
            ui->lbl_image->setPixmap(QPixmap::fromImage(image));

        }
        else{
            //ERROR
        }
    }
}

