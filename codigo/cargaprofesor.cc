#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "profesor.h"
//#include "ficherobinario.h"

Profesor cargaProfesor(std::string s){
  Profesor p("");
  //FicheroBinario fichero("profesores.bin");
  //fichero.openin();
  std::ifstream fichero("profesores.bin");
  if(!fichero.is_open()){
    std::cout << "No se ha podido cargar los datos del profesor" << '\n';
    exit(-1);
  }
  else{
    while(fichero>>p && !fichero.eof()){
      if(p.getDni()==s){
        std::cout << "Datos del profesor cargados con exito" << '\n';
        return p;
      }
    }
    std::cout << "No se han encontrado los datos del profesor" << '\n';
  }
}
