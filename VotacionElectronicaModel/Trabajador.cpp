#include "Trabajador.h"  

using namespace VotacionElectronicaModel;

Trabajador::Trabajador(String^ idTrabajador, String^nombre, String^apellido, String^ codigo, String^correo, String^contraseña, String^flagVoto)
{
	
	this->idTrabajador = idTrabajador;
	this-> nombre=nombre;
	this-> apellido=apellido;
	this-> codigo=codigo;
	this-> correo =correo;
	this-> contraseña=contraseña;
	this-> flagVoto=flagVoto;
}

Trabajador::Trabajador(String^ nombre, String^apellido, String^codigo, String^contraseña)
{
	this->nombre = nombre;
	this->apellido = apellido;
	this->codigo = codigo;
	this->contraseña = contraseña;
}
