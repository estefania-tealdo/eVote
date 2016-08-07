#pragma once

using namespace System;

namespace VotacionElectronicaModel
{
	public ref class Periodo
	{
	private:

		String^ idPeriodo;
		String^ FechaInicio;
		String^ FechaFin;


	public:


		Periodo(String^ idPeriodo, String^FechaInicio, String^FechaFin);

	};


}