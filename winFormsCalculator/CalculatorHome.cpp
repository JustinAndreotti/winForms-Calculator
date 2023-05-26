#include "CalculatorHome.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]	//apparently allows for the drag and drop design window (?)

void main(array<String^>^ args)
{
	//enable OS visual styles
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);

	//create the main window and run it
	winFormsCalculator::CalculatorHome form;		//ProjectName::FormName::FormVar
	Application::Run(% form);

}