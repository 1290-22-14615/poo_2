#include "Persona.cpp"
#include <iostream>
using namespace std;

class Empleado : Persona { 
	private : string codigo, puesto; 
	
	public :
	Empleado (){
	} 
		Empleado (string nom, string ape, string dir, int tel,int fech, string n, string cod, string pues) : Persona(nom,ape,dir,tel,fech){
		codigo=cod;
		puesto=pues;
	}
	void setCodigo(string cod){codigo=cod; } 
	void setPuesto(string pues){puesto=pues; } 
	void setNombres(string nom){nombres=nom; } 
	void setApellidos(string ape){apellidos=ape; } 
	void setDireccion(string dir){direccion=dir; } 
	void setTelefono(int tel){telefono=tel; } 
	void setFecha(int fech){fecha = fech; }

	string getCodigo(){return codigo; } 
	string getPuesto(){return puesto; }
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	int getTelefono(){return telefono;}
	int getFecha(int fech){fecha = fech; }

	void mostrar(){
		cout<<"____________________"<<endl; 
		cout<<";"<< nombres<<";"<<apellidos<<";"<<direccion<<";"<<telefono<<";"<<fecha<<";"<<codigo<<";"<<puesto<<endl;
	}
};
