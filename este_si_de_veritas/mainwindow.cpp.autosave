#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


        a=new char[text.size()];
        a[text.size()]=0;
        for(size_t i=0;i<text.size();i++){
            a[i]=text[i];
        }
        ui->label_txt->setText(a);
    lista.insert_front("C:/Users/U LA SALLE/Desktop/pictures/img1.jpg");
    lista.insert_front("C:/Users/U LA SALLE/Desktop/pictures/img2.jpg");
    lista.insert_front("C:/Users/U LA SALLE/Desktop/pictures/img3.jpg");
    lista.insert_front("C:/Users/U LA SALLE/Desktop/pictures/img4.jpg");
    lista.insert_front("C:/Users/U LA SALLE/Desktop/pictures/img5.jpg");
    it=lista.begin();
    string txt=*it;
    a=new char[txt.size()];
    a[txt.size()]=0;
    for(size_t i=0;i<txt.size();i++){
        a[i]=txt[i];
    }
    pix={a};
    ui->label_picture->setPixmap(pix);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete a;
}

void MainWindow::on_nextbutton_clicked()
{

    ++it;
    if(it!=lista.end()){

    }
    else{
        it=lista.begin();
    }
    string txt=*it;
    a=new char[txt.size()];
    a[txt.size()]=0;
    for(size_t i=0;i<txt.size();i++){
        a[i]=txt[i];
    }
    pix={a};
    ui->label_picture->setPixmap(pix);

}

void MainWindow::on_backbutton_clicked()
{


}
