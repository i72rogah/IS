#include "profesor.h"
#include "alumno.h"
#include <list>
#include <fstream>

void Profesor::exportarDatos(){
  ofstream fichero(getNombreFichero().c_str(),std::ofstream::binary);
  Alumno a;
  std::list <Alumno> aux;//lista auxiliar para trabajar con los alumnos
  std::list <Alumno>::iterator i;
  aux=ptrAgenda_->getAlumnos();//copia los alumnos a la lista auxiliar
  for(i=aux.begin();i!=aux.end();i++){
    a=*i;
    fichero.write((char*)&a,sizeof(Alumno));//escribe en el fichero al alumno
  }
  fichero.close();//cierra fichero
}
