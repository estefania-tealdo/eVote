#include"gestorUsuario.h";

using namespace VotacionElectronicaController;

gestorUsuario::gestorUsuario()
{
	this->listaTrabajadores = gcnew List<Trabajador^>;
}


int gestorUsuario::ValidaUsuario(String^ user, String^ password)
{
	for (int i = 0; i < this->listaTrabajadores->Count; i++)
	{
		if (this->listaTrabajadores[i]->codigo == user, this->listaTrabajadores[i]->contraseña == password)
		{
			return 1;
		}
	}
	return 0;
}

void gestorUsuario::CargarUsuarios()
{
	Trabajador^ trabajador1 = gcnew Trabajador("Kei", "Takayama", "ktdot", "1612");
	Trabajador^ trabajador2 = gcnew Trabajador("Norma", "Baffi", "normabaffi7", "1912");
	Trabajador^ trabajador3 = gcnew Trabajador("Chopper", "Baffi", "chopperin", "2609");
	Trabajador^ trabajador4 = gcnew Trabajador("Estefania", "Tealdo", "teffi1201", "1201");

	this->listaTrabajadores->Add(trabajador1);
	this->listaTrabajadores->Add(trabajador2);
	this->listaTrabajadores->Add(trabajador3);
	this->listaTrabajadores->Add(trabajador4);


}

int gestorUsuario::ObtenerIndiceLista(String^ user)
{
	for (int i = 0; i < this->listaTrabajadores->Count; i++)
	{
		if (this->listaTrabajadores[i]->codigo == user)
			return i;
	}
	return -1; //no debe llega a esta parte porque el usuario ya fue verificado y si existe
}
