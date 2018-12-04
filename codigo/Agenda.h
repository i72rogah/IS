#ifndef AGENDA_H
#define AGENDA_H

#include <string>
#include <list>

class Agenda {
private:
list<Alumno>alumnos_;


public:
void introducirAlumno();
void modificarAlumno();
void borrarAlumno();
int buscarAlumno();
void mostrarAlumnos();
void mostarEquipo(int equipo);
void mostrarAlumno();
void ordenarAlf(std::string s);
void ordenarAlf(int curso);
};




#endif
