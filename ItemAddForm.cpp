#include "ItemAddForm.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
void ItemAddForm(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is jour project name
    ProjetPOOGRP7::ItemAddForm form;
    Application::Run(% form);
}
