#include "Sensores.h"
#include "Prueba_operador.h"
#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace View;


int Main(array<String^>^ args) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	MyForm LoginForm;

	if (LoginForm.ShowDialog() == DialogResult::OK) {


		if (LoginForm.RolLogueado == "Administrador") {

			Sensores form;
			Application::Run(% form);

		}
		else {

			Prueba_operador formi;
			Application::Run(% formi);
		}


		
	}

	
	
	return 0;
}