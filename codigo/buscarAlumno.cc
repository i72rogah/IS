#include <list>


int buscarAlumno(std::string s){

  list <Alumno>::iterator it;
  list <Alumno> aux;
  aux=getAlumnos();
  int cont=0;
  if(aux.size()==0){
    return -1:
  }
  for(it=aux.begin();it!=aux.end();it++){
    if(it->getDNI()==s||it->getApellidos()==s){
      cont++;
    }
  }
   return cont;
}
