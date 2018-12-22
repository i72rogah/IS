#include <fstrem>
#include <string>
#include <iostream>

void registrarProfesor();{
  Profesor p;
  Credencial c;
  std::string aux;
  std::ofstream fichero("profesores.bin",std::ofstream::ate|std::ofstream::binary);
  if(!fichero.is_open()){exit(-1);};
  std::cout << "DNI: ";
  getline(std::cin,aux);
  p.setDni(aux);
  c.usuario=aux;
  std::cout << "Nombre: ";
  getline(std::cin,aux);
  p.setNombre(aux);
  std::cout << "Apellidos: ";
  getline(std::cin,aux);
  p.setApellidos(aux);
  std::cout << "Telefono: ";
  getline(std::cin,aux);
  p.setTelefono(aux);
  std::cout << "Email: ";
  getline(std::cin,aux);
  p.setEmail(aux);
  std::cout << "Direccion: ";
  getline(std::cin,aux);
  p.setDireccion(aux);
  std::cout << "Fecha de nacimiento(formato dd/mm/aaaa): ";
  getline(std::cin,aux);
  p.setFechaNacimiento(aux);
  std::cout << "Nombre fichero local: ";
  getline(std::cin,aux);
  p.setNombreFichero(aux);
  std::cout << "¿El profesor es coordinador?" << '\n';
  std::cout << "Si: pulse cualquier tecla" << '\n';
  std::cout << "No: pulse n" << '\n';
  getline(std::cin,aux);
  if(aux=='n'||aux=='N'){
    p.setCoordinador(false);
  }
  else{
    p.setCoordinador(true);
  }
  fichero.write((char*)&p,sizeof(Profesor));
  fichero.close();
  fichero.open("credenciales.bin",std::ofstream::ate|std::ofstream::binary);
  if(!fichero.is_open()){exit(-1);};
  std::cout << "Contraseña del profesor para acceso: ";
  std::cin >> aux;
  c.contraseña=aux;
  fichero.write((char*)&c,sizeof(Credencial));
  fichero.close();
}
