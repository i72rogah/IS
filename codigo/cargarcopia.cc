#include "profesor.h"
#include "alumno.h"
#include <list>
#include <string>
#include <iostream>

void Profesor::cargarCopia(){
  Alumno a;
  list <Alumno> aux;
  std::string nombreFichero;
  std::cout << "Introduzca la fecha de la copia de seguridad(formato dd/mm/aaaa)" << '\n';
  std::cin >> nombreFichero;
  nombreFichero="copias/copia_"+nombreFichero+".bin";
  ifstream fichero(nombreFichero.c_str(),std::ifstream::binary);
  if(!fichero.is_open()){ //comprobar fallo en apertura del fichero
    std::cout << "Copia de seguridad no encontrada" << '\n';
    exit(-1);
  }
  else{
    aux.clear();
    while(fichero.read((char*)&a,sizeof(Alumno)) && !fichero.eof()){
      //fichero.read((char*)&a,sizeof(Alumno));
      aux.push_back(a);
    }
    ptrAgenda_->setAlumnos(aux);
    fichero.close();
  }
}
