#pragma once

#include "Trabajador.h"
#include "Cargo.h"

using namespace System;

namespace VotacionElectronicaModel
{
	public ref class Candidatura : public Trabajador
	{
	private:

		String^ idCandidato;
		int numVotos;
		Cargo^objCargo;
		
	public:

		//Trabajador();  
		Candidatura(String^ idCandidato, int numVotos, String^ idTrabajador, String^nombre, String^apellido, String^ codigo, String^correo, String^contraseña, String^flagVoto, Cargo^objCargo);

	};


}