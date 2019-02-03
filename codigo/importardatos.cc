#include "profesor.h"
#include "alumno.h"
#include "ficherobinario.h"
#include <list>
#include <fstream>
#include <iostream>
#include <cstdlib>

void Profesor::importarDatos(Agenda &ag){
  std::ifstream fichero(getNombreFichero().c_str(),std::ifstream::binary);
  Alumno a("");
  //FicheroBinario fichero(getNombreFichero().c_str());
  //fichero.openin();
  std::list<Alumno> aux; //lista auxiliar para rellenar con alumnos
  if(!fichero.is_open()){ //comprobar fallo en apertura del fichero
    std::cout << "Fichero local no encontrado" << '\n';
    exit(-1);
  }
  else{
    aux.clear();
    while(fichero>>a&&!fichero.eof()){

      aux.push_back(a);
    }
    ag.setAlumnos(aux);//copia la lista rellenada a la agenda
    fichero.close();//cierra fichero
  }
}
