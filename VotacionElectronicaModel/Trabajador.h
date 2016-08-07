#pragma once

using namespace System;

namespace VotacionElectronicaModel 
{
	public ref class Trabajador  
	{
	public:

		String^ idTrabajador;
		String^ nombre;
		String^ apellido;
		String^ codigo;
		String^ correo;
		String^ contraseña;
		String^ flagVoto;

	public: 

		//Trabajador();  
		Trabajador(String^ idTrabajador, String^nombre, String^apellido, String^ codigo,String^correo,String^contraseña, String^flagVoto);
		Trabajador(String^ nombre, String^apellido, String^codigo, String^contraseña);
	};


}