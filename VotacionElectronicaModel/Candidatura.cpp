#include "Candidatura.h"  

using namespace VotacionElectronicaModel;

Candidatura::Candidatura(String^ idCandidato, int numVotos, String^ idTrabajador, String^nombre, String^apellido, String^ codigo, String^correo, String^contraseña, String^flagVoto, Cargo^objCargo) : Trabajador(idTrabajador, nombre, apellido, codigo, correo, contraseña, flagVoto)
{
	this->idCandidato = idCandidato;
	this->numVotos = numVotos;
	this->objCargo = objCargo;

}

