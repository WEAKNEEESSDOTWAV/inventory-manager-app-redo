#include "AddressAddForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void AddrFormMain(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is jour project name
    ProjetPOOGRP7::AddressAddForm form;
    Application::Run(% form);
}