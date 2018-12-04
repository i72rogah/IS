#ifndef ALUMNO_H
#define ALUMNO_H
#include <string>

class Alumno {
private:
  std::string dni_;
  std::string nombre_;
  std::string apellidos_;
  std::string telefono_;
  std::string email_;
  std::string direccion_;
  std::string fechanacimiento_;
  int curso_;
  int grupo_;
  bool lider_;

public:
  inline std::string getDNI(){return dni_;};
  inline void setDNI(std::string dni){dni_=dni;};
  //
  inline std::string getNombre(){return nombre_;};
  inline void setNombre(std::string nombre){nombre_=nombre;};
  //
  inline std::string getApellidos(){return apellidos_;};
  inline void setApellidos(std::string apellidos){apellidos_=apellidos;};
  //
  inline std::string getTelefono(){return telefono_;};
  inline void setTelefono(std::string telefono){telefono_=telefono;};
  //
  inline std::string getEmail(){return email_;};
  inline void setEmail(std::string email){email_=email;};
  //
  inline std::string getDireccion(){return direccion_;};
  inline void setDireccion(std::string direccion){direccion_=direccion;};
  //
  inline std::string getFechaNacimiento(){return fechanacimiento_;};
  inline void setFechaNacimiento(std::string fechanacimiento){fechanacimiento_=fechanacimiento;};
  //
  inline int getCurso(){return curso_;};
  inline void setCurso(int curso){curso_=curso;};
  //
  inline int getGrupo(){return grupo_;};
  inline void setGrupo(int grupo){grupo_=grupo;};
  //
  inline bool getLider(){return lider_;};
  inline void setLider(bool lider){lider_=lider;};


};
#endif
