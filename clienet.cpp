#include "Persona.cpp"
#include <iostream>
using namespace std;

class Cliente : Persona { 
	private : string nit; 
	
	public : 
	Cliente (){
	}
	
	Cliente (string nom, string ape, string dir, int tel,int fech, string n) : Persona(nom,ape,dir,tel,fech){
		nit=n;
		
	}
	void setNit(string n){nit=n; } 
	void setNombres(string nom){nombres=nom; } 
	void setApellidos(string ape){apellidos=ape; } 
	void setDireccion(string dir){direccion=dir; } 
	void setTelefono(int tel){telefono=tel; } 
	void setFecha(int fech){fecha = fech; }

	string getNit(){return nit;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	int getTelefono(){return telefono;}
	int getFecha(int fech){fecha = fech; }

	void mostrar(){
		cout<<"____________________"<<endl; 
		cout<<nit<<";"<< nombres<<";"<<apellidos<<";"<<direccion<<";"<<telefono<<";"<<fecha<<endl;
	}
};
