#include "Imagen_.h"

Imagen_::Imagen_(){
    direccion="No declarada";
    titulo="No declarado";

}

Imagen_::Imagen_(QImage image,QString titulo, QString direccion):
    image_(image),direccion(direccion),titulo(titulo){


}
