#include "agenda.h"
#include "alumno.h"
#include <list>
#include <iostream>

void Agenda::ordenarAlf(){
  list<Alumno> aux;
  int opcion;
  aux=getAlumnos();
  if(aux.empty()){
    std::cout << "La lista esta vacia" << '\n';
    exit(-1);
  }
  std::cout << "Seleccione opcion de ordenado" << '\n';
  std::cout << "1.- A partir del DNI de forma ascendente" << '\n';
  std::cout << "2.- A partir del DNI de forma descendente" << '\n';
  std::cout << "3.- A partir del nombre de forma ascendente" << '\n';
  std::cout << "4.- A partir del nombre de forma descendente" << '\n';
  std::cout << "5.- A partir de los apellidos de forma ascendente" << '\n';
  std::cout << "6.- A partir de los apellidos de forma descendente" << '\n';
  std::cout << "7.- A partir del curso de forma ascendente" << '\n';
  std::cout << "8.- A partir del curso de forma descendente" << '\n';
  switch (opcion) {
    case 1:
    aux.sort(compare_dni_asc);
    break;
    case 2:
    aux.sort(compare_dni_desc);
    break;
    case 3:
    aux.sort(compare_nombre_asc);
    break;
    case 4:
    aux.sort(compare_nombre_desc);
    break;
    case 5:
    aux.sort(compare_apell_asc);
    break;
    case 6:
    aux.sort(compare_apell_desc);
    break;
    case 7:
    aux.sort(compare_curso_asc);
    break;
    case 8:
    aux.sort(compare_curso_desc);
    break;
  }
  setAlumnos(aux);
}
