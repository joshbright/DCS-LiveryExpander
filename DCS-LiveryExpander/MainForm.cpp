#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

//Sets the application to be single threaded
[STAThreadAttribute]

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	DCSLiveryExpander::MainForm form;
	Application::Run(% form);
}