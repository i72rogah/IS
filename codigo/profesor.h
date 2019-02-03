#ifndef PROFESOR_H
#define PROFESOR_H

#include <string>
#include <fstream>
#include "agenda.h"

class Profesor {
private:
  std::string dni_;
  std::string nombre_;
  std::string apellidos_;
  std::string telefono_;
  std::string email_;
  std::string direccion_;
  std::string fechanacimiento_;
  int coordinador_;
  std::string nombreFichero_;
  Agenda* ptrAgenda_;
public:
  Profesor(std::string dni,std::string nombre="",std::string apellidos="",
    std::string telefono="",std::string email="",std::string direccion="",
    std::string fechanacimiento="",int coordinador=0,std::string nombreFichero="",Agenda* ptr=NULL);
  inline void setDni(std::string s){dni_=s;};
  inline std::string getDni(){return dni_;};
  inline void setNombre(std::string s){nombre_=s;};
  inline std::string getNombre(){return nombre_;};
  inline void setApellidos(std::string s){apellidos_=s;};
  inline std::string getApellidos(){return apellidos_;};
  inline void setTelefono(std::string s){telefono_=s;};
  inline std::string getTelefono(){return telefono_;};
  inline void setEmail(std::string s){email_=s;};
  inline std::string getEmail(){return email_;};
  inline void setDireccion(std::string s){direccion_=s;};
  inline std::string getDireccion(){return direccion_;};
  inline void setFechaNacimiento(std::string s){fechanacimiento_=s;};
  inline std::string getFechaNacimiento(){return fechanacimiento_;};
  inline void setCoordinador(int i){coordinador_=i;};
  inline int getCoordinador(){return coordinador_;};
  inline void setNombreFichero(std::string s){nombreFichero_=s;};
  inline std::string getNombreFichero(){return nombreFichero_;};
  inline void setPtrAgenda(Agenda* ptr){ptrAgenda_=ptr;};
  inline Agenda* getPtrAgenda(){return ptrAgenda_;};
  void importarDatos(Agenda &ag);
  void exportarDatos(Agenda &ag);
  void guardarCopia(std::string nombre,Agenda &ag);
  void cargarCopia(std::string nombre,Agenda &ag);
  friend std::ostream &operator<<(std::ostream &escritura, Profesor &p);
	friend std::istream &operator>>(std::istream &lectura, Profesor &p);
  //void escribeProfesor(std::ofstream &f);
  //Profesor leeProfesor(std::ifstream &f);
};
#endif
