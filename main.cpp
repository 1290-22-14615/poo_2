#include "Empleado.cpp"
#include <iostream>
using namespace std; 
main(){
string nit,nombres,apellidos,direccion, codigo, puesto;
	int telefono,fecha; 
	
	cout<<"ingrese el Codigo del Empleado: ";
	cin>> codigo;
	cout<<"ingrese el puesto del empleado: ";
	cin>>puesto;
	cout<<"ingresar Nit: "; 
	cin>> nit;
	cout<<"ingresar Nombres: "; 
	cin>> nombres;
	cout<<"ingresar Apellidos: "; 
	cin>> apellidos;
	cout<<"ingresar Direccion: "; 
	cin>> direccion;
	cout<<"ingresar Telefono: "; 
	cin>> telefono;
	cout<<"ingrese la fecha de naciniento: ";
	cin>>fecha;
	Empleado obj = Empleado(nombres,apellidos,direccion,telefono,nit,fecha,codigo,puesto); 
	obj.mostrar();
	
	//cout<<"Datos del Empleado: "<<obj.getNit()<<","<<obj.getnNombres()<<","<<obj.getApellidos()<<","<<obj.getDireccion()<<","<<obj.getTelefono()<<","<<obj.getFecha()<<","<<obj.getCodigo()<<","<<obj.Puesto()<<endl; 
	
}

