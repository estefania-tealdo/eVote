#include "ventLogin.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace VotacionElectronicaView;

void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	//MyForm form;
	ventLogin form;
	Application::Run(%form);
}