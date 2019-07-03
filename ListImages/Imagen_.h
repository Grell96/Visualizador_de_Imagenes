#ifndef C_IMAGE_H
#define C_IMAGE_H
#include <string>
#include <vector>
#include <QFileDialog>
using namespace std;
class Imagen_
{
public:
    QString direccion;
    QString titulo;
    QImage image_;
    vector<string>tags;
    Imagen_();
    Imagen_(QImage,QString, QString);

};

#endif // C_IMAGE_H
