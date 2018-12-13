#include "profesor.h"
#include "alumno.h"
#include <list>
#include <fstream>
#include <iostream>

void Profesor::guardarCopia(){
  Alumno a;
  std::list <Alumno> aux;//lista auxiliar para trabajar con los alumnos
  std::list <Alumno>::iterator i;
  std::string nombreFichero;
  std::cout << "Introduzca la fecha de hoy para la copia de seguridad(formato dd/mm/aaaa)" << '\n';
  std::cout << "(Si ya existe una copia con esa fecha, se sobreescribira)" << '\n';
  std::cin >> nombreFichero;
  nombreFichero="copias/copia_"+nombreFichero+".bin";
  ofstream fichero(nombreFichero.c_str(),std::ofstream::binary);
  aux=ptrAgenda_->getAlumnos();//copia los alumnos a la lista auxiliar
  for(i=aux.begin();i!=aux.end();i++){
    a=*i;
    fichero.write((char*)&a,sizeof(Alumno));//escribe en el fichero al alumno
  }
  fichero.close();//cierra fichero
}
