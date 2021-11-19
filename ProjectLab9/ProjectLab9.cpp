#include "pch.h"

#include <Windows.h>

#include "MyForm.h"

using namespace System;
using namespace ProjectLab9;

int main(array<System::String ^> ^args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm);

    return 0;
}
