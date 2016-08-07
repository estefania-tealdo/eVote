#include "Voto.h"  

using namespace VotacionElectronicaModel;

Voto::Voto(String^ idVoto, String^Fecha, String^HoraVoto, String^FlagBlanco, Mesa^objMesa, Trabajador^objTrabajador)
{
	this->idVoto = idVoto;
	this->Fecha = Fecha;
	this->HoraVoto = HoraVoto;
	this->FlagBlanco = FlagBlanco;
	this->objMesa = objMesa;
	this->objTrabajador = objTrabajador;
	this->ListaCandidatos = gcnew List<Candidatura^>();
	this->ListaCargos = gcnew List<Cargo^>();
}

