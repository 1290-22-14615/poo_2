#include <iostream>
using namespace std; 
class Persona{
	
	protected: string nombres,apellidos,direccion; 
	          int telefono, fecha; 	
	protected: 
	      Persona(){
	      }  
		  Persona(string nom,string ape,string dir, int tel, int fech){
		  	  nombres = nom; 
		  	  apellidos = ape; 
		  	  direccion = dir; 
		  	  telefono = tel;
			  fecha = fech; 
	      }         
	void mostrar(); 
	 
	
};
