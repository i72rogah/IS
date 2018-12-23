#include <iostream>
#include <cstdio>

int menu(){
  int opcion;
  std::cout << "Selecciona opcion" << '\n';
  std::cout << "1.- Introducir nuevo alumno" << '\n';
  std::cout << "2.- Modificar alumno" << '\n';
  std::cout << "3.- Borrar alumno" << '\n';
  std::cout << "4.- Mostrar todos los alumnos" << '\n';
  std::cout << "5.- Mostrar integrantes de un grupo" << '\n';
  std::cout << "6.- Mostrar un unico alumno" << '\n';
  std::cout << "7.- Ordenar alfabeticamente los alumnos" << '\n';
  std::cout << "8.- Importar datos del fichero local" << '\n';
  std::cout << "9.- Exportar datos al fichero local" << '\n';
  std::cout << "10.- Cargar copia de seguridad" << '\n';
  std::cout << "11.- Guardar alumnos en copia de seguridad" << '\n';
  std::cout << "12.- Registrar nuevo profesor" << '\n';
  std::cout << "0.- Salir" << '\n';
  std::cin.ignore();
  std::cin >> opcion;
  return opcion;
}
