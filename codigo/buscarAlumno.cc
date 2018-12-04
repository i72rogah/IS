#include <list>


int buscarAlumno(std::string s){

  list <Alumno>::iterator i;
  int cont=0;

  for(i=alumno_.begin();i!=alumno_.end();i++)
    if(i->getDNI()==s||i->getApellidos()==s){
      cont++;
    }
   return cont;
}
