#ifndef AGENDA_H
#define AGENDA_H

#include <string>
#include <list>
#include "alumno.h"

class Agenda {
private:
std::list<Alumno>alumnos_;


public:
void introducirAlumno();
void modificarAlumno(std::string s);
void borrarAlumno(std::string s);
int buscarAlumno(std::string s);
void mostrarAlumnos();
void mostrarEquipo(int equipo);
void mostrarAlumno(std::string s);
void ordenarAlf();
inline std::list <Alumno> getAlumnos(){return alumnos_;};
inline void setAlumnos(std::list <Alumno> aux){alumnos_=aux;};
};




#endif
