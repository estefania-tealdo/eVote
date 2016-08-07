#pragma once

using namespace System::Collections::Generic;
using namespace VotacionElectronicaModel;
using namespace System;

namespace VotacionElectronicaController
{
	public ref class gestorUsuario
	{
	public:
		List<Trabajador^>^ listaTrabajadores;

	public:
		gestorUsuario();
		int ValidaUsuario(String^ user, String^ password);
		void CargarUsuarios();
		int ObtenerIndiceLista(String^ user);
	};
}

