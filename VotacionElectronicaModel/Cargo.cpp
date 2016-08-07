#include "Cargo.h"  

using namespace VotacionElectronicaModel;

Cargo::Cargo(String^ idCargo, String^nombreCargo, Periodo^objPeriodo)
{
	this->idCargo = idCargo;
	this->nombreCargo = nombreCargo;
	this->objPeriodo = objPeriodo;

}

