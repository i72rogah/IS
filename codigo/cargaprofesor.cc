#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "profesor.h"

Profesor cargaProfesor(std::string s){
  Profesor p;
  std::ifstream fichero("profesores.bin",std::ifstream::binary);
  if(!fichero.is_open()){
    std::cout << "No se ha podido cargar los datos del profesor" << '\n';
    exit(-1);
  }
  else{
    while(fichero.read((char*)&p,sizeof(Profesor)) && !fichero.eof()){
      if(p.getDni()==s){
        return p;
    }
    std::cout << "No se han encontrado los datos del profesor" << '\n';
  }
}
