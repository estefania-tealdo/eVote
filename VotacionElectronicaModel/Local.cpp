#include "Local.h"  

using namespace VotacionElectronicaModel;

Local::Local(String^ idLocal, String^NombreLocal)
{
	this->idLocal = idLocal;
	this->NombreLocal = NombreLocal;
	this->UbicacionMesa = gcnew List<Local^>();

}

