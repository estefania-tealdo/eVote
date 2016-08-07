#pragma once

#include "Mesa.h"
#include "Trabajador.h"
#include "Candidatura.h"

using namespace System;
using namespace System::Collections::Generic;

namespace VotacionElectronicaModel
{
	public ref class Voto
	{
	private:

		String^ idVoto;
		String^ Fecha;
		String^ HoraVoto;
		String^ FlagBlanco;
		Mesa^objMesa;
		Trabajador^objTrabajador;
		List<Candidatura^>^ListaCandidatos;
		List<Cargo^>^ListaCargos;

	public:


		Voto(String^ idVoto, String^Fecha, String^HoraVoto, String^FlagBlanco, Mesa^objMesa, Trabajador^objTrabajador);

	};


}