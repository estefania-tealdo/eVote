#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace VotacionElectronicaModel
{
	public ref class Local
	{
	private:

		String^ idLocal;
		String^ NombreLocal;
		List<Local^>^UbicacionMesa;
	public:


		Local(String^ idLocal, String^NombreLocal);

	};


}