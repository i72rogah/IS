#include "profesor.h"
#include "alumno.h"
#include <list>
#include <iostream>
#include <fstream>

void Profesor::exportarDatos(){
  std::ofstream fichero(getNombreFichero().c_str(),std::ofstream::binary);
  std::cout << "aqui" << '\n';
  Alumno a;
  std::list <Alumno> aux;//lista auxiliar para trabajar con los alumnos
  std::list <Alumno>::iterator i;
  std::cout << "aqui" << '\n';
  aux=ptrAgenda_->getAlumnos();//copia los alumnos a la lista auxiliar
  std::cout << "aqui" << '\n';
  for(i=aux.begin();i!=aux.end();i++){
    a=*i;
    fichero.write((char*)&a,sizeof(Alumno));//escribe en el fichero al alumno
  }
  fichero.close();//cierra fichero
}
