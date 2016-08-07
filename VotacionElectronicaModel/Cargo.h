#pragma once

#include "Periodo.h"

using namespace System;

namespace VotacionElectronicaModel
{
	public ref class Cargo
	{
	private:

		String^ idCargo;
		String^ nombreCargo;
		Periodo^objPeriodo;

	public:

		 
		Cargo(String^ idCargo, String^nombreCargo, Periodo^objPeriodo);

	};


}