#ifndef PROFESOR_H
#define PROFESOR_H

#include <string>
class Profesor {
private:
  std::string dni_;
  std::string nombre_;
  std::string apellidos_;
  std::string telefono_;
  std::string email_;
  std::string direccion_;
  std::string fechanacimiento_;
  bool coordinador_;
  std::string nombreFichero_;
  Agenda* ptrAgenda_;
public:
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
  inline void setCoordinador(bool b){coordinador_=b;};
  inline bool getCoordinador(){return coordinador_;};
  inline void setNombreFichero(std::string s){nombreFichero_=s;};
  inline std::string getNombreFichero(){return nombreFichero_;};
  inline void setPtrAgenda(Agenda* ptr){ptrAgenda_=ptr;};
  inline Agenda* getPtrAgenda(){return ptrAgenda_;};
  void importarDatos();
  void exportarDatos();
  void guardarCopia();
  void cargarCopia();
};
#endif
