#pragma once

namespace winFormsCalculator 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CalculatorHome
	/// </summary>
	public ref class CalculatorHome : public System::Windows::Forms::Form
	{
		public:
			CalculatorHome(void)
			{
				InitializeComponent();
				//
				//TODO: Add the constructor code here
				//
			}

		protected:
			/// <summary>
			/// Clean up any resources being used.
			/// </summary>
			~CalculatorHome()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::TextBox^ textBox1;
		private: System::Windows::Forms::Button^ DeleteButton;

		private: System::Windows::Forms::Button^ DivideButton;

		private: System::Windows::Forms::Button^ MultiplyButton;
		private: System::Windows::Forms::Button^ SubtractButton;
		private: System::Windows::Forms::Button^ Num1Button;
		private: System::Windows::Forms::Button^ Num2Button;
		private: System::Windows::Forms::Button^ Num3Button;
		private: System::Windows::Forms::Button^ Num4Button;
		private: System::Windows::Forms::Button^ Num5Button;
		private: System::Windows::Forms::Button^ Num6Button;
		private: System::Windows::Forms::Button^ Num7Button;
		private: System::Windows::Forms::Button^ Num8Button;
		private: System::Windows::Forms::Button^ Num9Button;
		private: System::Windows::Forms::Button^ DecimalButton;














		private: System::Windows::Forms::Button^ Num0Button;
		private: System::Windows::Forms::Button^ PlusButton;


		private: System::Windows::Forms::Button^ EnterButton;

	private: System::Windows::Forms::Label^ OperatorLabel;
	private: System::Windows::Forms::Button^ clearButton;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ copyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pasteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem1;



		protected:

		private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

		#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->DeleteButton = (gcnew System::Windows::Forms::Button());
			this->DivideButton = (gcnew System::Windows::Forms::Button());
			this->MultiplyButton = (gcnew System::Windows::Forms::Button());
			this->SubtractButton = (gcnew System::Windows::Forms::Button());
			this->Num1Button = (gcnew System::Windows::Forms::Button());
			this->Num2Button = (gcnew System::Windows::Forms::Button());
			this->Num3Button = (gcnew System::Windows::Forms::Button());
			this->Num4Button = (gcnew System::Windows::Forms::Button());
			this->Num5Button = (gcnew System::Windows::Forms::Button());
			this->Num6Button = (gcnew System::Windows::Forms::Button());
			this->Num7Button = (gcnew System::Windows::Forms::Button());
			this->Num8Button = (gcnew System::Windows::Forms::Button());
			this->Num9Button = (gcnew System::Windows::Forms::Button());
			this->DecimalButton = (gcnew System::Windows::Forms::Button());
			this->Num0Button = (gcnew System::Windows::Forms::Button());
			this->PlusButton = (gcnew System::Windows::Forms::Button());
			this->EnterButton = (gcnew System::Windows::Forms::Button());
			this->OperatorLabel = (gcnew System::Windows::Forms::Label());
			this->clearButton = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->copyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pasteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->textBox1->Location = System::Drawing::Point(52, 21);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(258, 45);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &CalculatorHome::textBox1_MouseClick);
			// 
			// DeleteButton
			// 
			this->DeleteButton->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DeleteButton->Location = System::Drawing::Point(12, 77);
			this->DeleteButton->Name = L"DeleteButton";
			this->DeleteButton->Size = System::Drawing::Size(70, 70);
			this->DeleteButton->TabIndex = 1;
			this->DeleteButton->Text = L"Delete";
			this->DeleteButton->UseVisualStyleBackColor = true;
			this->DeleteButton->Click += gcnew System::EventHandler(this, &CalculatorHome::DeleteButton_Click);
			// 
			// DivideButton
			// 
			this->DivideButton->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DivideButton->Location = System::Drawing::Point(164, 77);
			this->DivideButton->Name = L"DivideButton";
			this->DivideButton->Size = System::Drawing::Size(70, 70);
			this->DivideButton->TabIndex = 2;
			this->DivideButton->Text = L"/";
			this->DivideButton->UseVisualStyleBackColor = true;
			this->DivideButton->Click += gcnew System::EventHandler(this, &CalculatorHome::DivideButton_Click);
			// 
			// MultiplyButton
			// 
			this->MultiplyButton->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MultiplyButton->Location = System::Drawing::Point(240, 77);
			this->MultiplyButton->Name = L"MultiplyButton";
			this->MultiplyButton->Size = System::Drawing::Size(70, 70);
			this->MultiplyButton->TabIndex = 3;
			this->MultiplyButton->Text = L"*";
			this->MultiplyButton->UseVisualStyleBackColor = true;
			this->MultiplyButton->Click += gcnew System::EventHandler(this, &CalculatorHome::MultiplyButton_Click);
			// 
			// SubtractButton
			// 
			this->SubtractButton->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SubtractButton->Location = System::Drawing::Point(240, 153);
			this->SubtractButton->Name = L"SubtractButton";
			this->SubtractButton->Size = System::Drawing::Size(70, 70);
			this->SubtractButton->TabIndex = 4;
			this->SubtractButton->Text = L"-";
			this->SubtractButton->UseVisualStyleBackColor = true;
			this->SubtractButton->Click += gcnew System::EventHandler(this, &CalculatorHome::SubtractButton_Click);
			// 
			// Num1Button
			// 
			this->Num1Button->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Num1Button->Location = System::Drawing::Point(12, 153);
			this->Num1Button->Name = L"Num1Button";
			this->Num1Button->Size = System::Drawing::Size(70, 70);
			this->Num1Button->TabIndex = 5;
			this->Num1Button->Text = L"1";
			this->Num1Button->UseVisualStyleBackColor = true;
			this->Num1Button->Click += gcnew System::EventHandler(this, &CalculatorHome::Num1Button_Click);
			// 
			// Num2Button
			// 
			this->Num2Button->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Num2Button->Location = System::Drawing::Point(88, 153);
			this->Num2Button->Name = L"Num2Button";
			this->Num2Button->Size = System::Drawing::Size(70, 70);
			this->Num2Button->TabIndex = 6;
			this->Num2Button->Text = L"2";
			this->Num2Button->UseVisualStyleBackColor = true;
			this->Num2Button->Click += gcnew System::EventHandler(this, &CalculatorHome::Num2Button_Click);
			// 
			// Num3Button
			// 
			this->Num3Button->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Num3Button->Location = System::Drawing::Point(164, 153);
			this->Num3Button->Name = L"Num3Button";
			this->Num3Button->Size = System::Drawing::Size(70, 70);
			this->Num3Button->TabIndex = 7;
			this->Num3Button->Text = L"3";
			this->Num3Button->UseVisualStyleBackColor = true;
			this->Num3Button->Click += gcnew System::EventHandler(this, &CalculatorHome::Num3Button_Click);
			// 
			// Num4Button
			// 
			this->Num4Button->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Num4Button->Location = System::Drawing::Point(12, 229);
			this->Num4Button->Name = L"Num4Button";
			this->Num4Button->Size = System::Drawing::Size(70, 70);
			this->Num4Button->TabIndex = 8;
			this->Num4Button->Text = L"4";
			this->Num4Button->UseVisualStyleBackColor = true;
			this->Num4Button->Click += gcnew System::EventHandler(this, &CalculatorHome::Num4Button_Click);
			// 
			// Num5Button
			// 
			this->Num5Button->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Num5Button->Location = System::Drawing::Point(88, 229);
			this->Num5Button->Name = L"Num5Button";
			this->Num5Button->Size = System::Drawing::Size(70, 70);
			this->Num5Button->TabIndex = 9;
			this->Num5Button->Text = L"5";
			this->Num5Button->UseVisualStyleBackColor = true;
			this->Num5Button->Click += gcnew System::EventHandler(this, &CalculatorHome::Num5Button_Click);
			// 
			// Num6Button
			// 
			this->Num6Button->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Num6Button->Location = System::Drawing::Point(164, 229);
			this->Num6Button->Name = L"Num6Button";
			this->Num6Button->Size = System::Drawing::Size(70, 70);
			this->Num6Button->TabIndex = 10;
			this->Num6Button->Text = L"6";
			this->Num6Button->UseVisualStyleBackColor = true;
			this->Num6Button->Click += gcnew System::EventHandler(this, &CalculatorHome::Num6Button_Click);
			// 
			// Num7Button
			// 
			this->Num7Button->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Num7Button->Location = System::Drawing::Point(12, 305);
			this->Num7Button->Name = L"Num7Button";
			this->Num7Button->Size = System::Drawing::Size(70, 70);
			this->Num7Button->TabIndex = 11;
			this->Num7Button->Text = L"7";
			this->Num7Button->UseVisualStyleBackColor = true;
			this->Num7Button->Click += gcnew System::EventHandler(this, &CalculatorHome::Num7Button_Click);
			// 
			// Num8Button
			// 
			this->Num8Button->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Num8Button->Location = System::Drawing::Point(88, 305);
			this->Num8Button->Name = L"Num8Button";
			this->Num8Button->Size = System::Drawing::Size(70, 70);
			this->Num8Button->TabIndex = 12;
			this->Num8Button->Text = L"8";
			this->Num8Button->UseVisualStyleBackColor = true;
			this->Num8Button->Click += gcnew System::EventHandler(this, &CalculatorHome::Num8Button_Click);
			// 
			// Num9Button
			// 
			this->Num9Button->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Num9Button->Location = System::Drawing::Point(164, 305);
			this->Num9Button->Name = L"Num9Button";
			this->Num9Button->Size = System::Drawing::Size(70, 70);
			this->Num9Button->TabIndex = 13;
			this->Num9Button->Text = L"9";
			this->Num9Button->UseVisualStyleBackColor = true;
			this->Num9Button->Click += gcnew System::EventHandler(this, &CalculatorHome::Num9Button_Click);
			// 
			// DecimalButton
			// 
			this->DecimalButton->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DecimalButton->Location = System::Drawing::Point(164, 381);
			this->DecimalButton->Name = L"DecimalButton";
			this->DecimalButton->Size = System::Drawing::Size(70, 70);
			this->DecimalButton->TabIndex = 14;
			this->DecimalButton->Text = L".";
			this->DecimalButton->UseVisualStyleBackColor = true;
			this->DecimalButton->Click += gcnew System::EventHandler(this, &CalculatorHome::DecimalButton_Click);
			// 
			// Num0Button
			// 
			this->Num0Button->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Num0Button->Location = System::Drawing::Point(12, 381);
			this->Num0Button->Name = L"Num0Button";
			this->Num0Button->Size = System::Drawing::Size(146, 70);
			this->Num0Button->TabIndex = 15;
			this->Num0Button->Text = L"0";
			this->Num0Button->UseVisualStyleBackColor = true;
			this->Num0Button->Click += gcnew System::EventHandler(this, &CalculatorHome::Num0Button_Click);
			// 
			// PlusButton
			// 
			this->PlusButton->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlusButton->Location = System::Drawing::Point(240, 229);
			this->PlusButton->Name = L"PlusButton";
			this->PlusButton->Size = System::Drawing::Size(70, 146);
			this->PlusButton->TabIndex = 16;
			this->PlusButton->Text = L"+";
			this->PlusButton->UseVisualStyleBackColor = true;
			this->PlusButton->Click += gcnew System::EventHandler(this, &CalculatorHome::PlusButton_Click);
			// 
			// EnterButton
			// 
			this->EnterButton->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EnterButton->Location = System::Drawing::Point(240, 381);
			this->EnterButton->Name = L"EnterButton";
			this->EnterButton->Size = System::Drawing::Size(70, 70);
			this->EnterButton->TabIndex = 17;
			this->EnterButton->Text = L"Enter";
			this->EnterButton->UseVisualStyleBackColor = true;
			this->EnterButton->Click += gcnew System::EventHandler(this, &CalculatorHome::EnterButton_Click);
			// 
			// OperatorLabel
			// 
			this->OperatorLabel->AutoSize = true;
			this->OperatorLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OperatorLabel->Location = System::Drawing::Point(12, 25);
			this->OperatorLabel->Name = L"OperatorLabel";
			this->OperatorLabel->Size = System::Drawing::Size(0, 38);
			this->OperatorLabel->TabIndex = 20;
			// 
			// clearButton
			// 
			this->clearButton->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clearButton->Location = System::Drawing::Point(88, 76);
			this->clearButton->Name = L"clearButton";
			this->clearButton->Size = System::Drawing::Size(70, 70);
			this->clearButton->TabIndex = 21;
			this->clearButton->Text = L"Clear";
			this->clearButton->UseVisualStyleBackColor = true;
			this->clearButton->Click += gcnew System::EventHandler(this, &CalculatorHome::clearButton_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->editToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(322, 24);
			this->menuStrip1->TabIndex = 22;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->exitToolStripMenuItem,
					this->exitToolStripMenuItem1
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(99, 22);
			this->exitToolStripMenuItem->Text = L"Help";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &CalculatorHome::exitToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem1
			// 
			this->exitToolStripMenuItem1->Name = L"exitToolStripMenuItem1";
			this->exitToolStripMenuItem1->Size = System::Drawing::Size(99, 22);
			this->exitToolStripMenuItem1->Text = L"Exit";
			this->exitToolStripMenuItem1->Click += gcnew System::EventHandler(this, &CalculatorHome::exitToolStripMenuItem1_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->copyToolStripMenuItem,
					this->pasteToolStripMenuItem, this->cutToolStripMenuItem
			});
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// copyToolStripMenuItem
			// 
			this->copyToolStripMenuItem->Name = L"copyToolStripMenuItem";
			this->copyToolStripMenuItem->Size = System::Drawing::Size(102, 22);
			this->copyToolStripMenuItem->Text = L"Copy";
			this->copyToolStripMenuItem->Click += gcnew System::EventHandler(this, &CalculatorHome::copyToolStripMenuItem_Click);
			// 
			// pasteToolStripMenuItem
			// 
			this->pasteToolStripMenuItem->Name = L"pasteToolStripMenuItem";
			this->pasteToolStripMenuItem->Size = System::Drawing::Size(102, 22);
			this->pasteToolStripMenuItem->Text = L"Paste";
			this->pasteToolStripMenuItem->Click += gcnew System::EventHandler(this, &CalculatorHome::pasteToolStripMenuItem_Click);
			// 
			// cutToolStripMenuItem
			// 
			this->cutToolStripMenuItem->Name = L"cutToolStripMenuItem";
			this->cutToolStripMenuItem->Size = System::Drawing::Size(102, 22);
			this->cutToolStripMenuItem->Text = L"Cut";
			this->cutToolStripMenuItem->Click += gcnew System::EventHandler(this, &CalculatorHome::cutToolStripMenuItem_Click);
			// 
			// CalculatorHome
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(322, 457);
			this->Controls->Add(this->clearButton);
			this->Controls->Add(this->OperatorLabel);
			this->Controls->Add(this->EnterButton);
			this->Controls->Add(this->PlusButton);
			this->Controls->Add(this->Num0Button);
			this->Controls->Add(this->DecimalButton);
			this->Controls->Add(this->Num9Button);
			this->Controls->Add(this->Num8Button);
			this->Controls->Add(this->Num7Button);
			this->Controls->Add(this->Num6Button);
			this->Controls->Add(this->Num5Button);
			this->Controls->Add(this->Num4Button);
			this->Controls->Add(this->Num3Button);
			this->Controls->Add(this->Num2Button);
			this->Controls->Add(this->Num1Button);
			this->Controls->Add(this->SubtractButton);
			this->Controls->Add(this->MultiplyButton);
			this->Controls->Add(this->DivideButton);
			this->Controls->Add(this->DeleteButton);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"CalculatorHome";
			this->Text = L"Calculator";
			this->Shown += gcnew System::EventHandler(this, &CalculatorHome::CalculatorHome_Shown);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &CalculatorHome::CalculatorHome_KeyDown);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		#pragma endregion





		/************************************************************************

							Section for variables used

		************************************************************************/
		private:
		bool operatorHit = false;
		double firstEntry = 0;
		double secondEntry = 0;
		double result = 0;





		/************************************************************************
				
					Section for winFormsCalculator Helper Functions

		************************************************************************/
		private:
		void clearTextBox()
		{
			textBox1->Text = "";
		}

		bool checkForRemainderZero()
		{
			return textBox1->Text->Length == 1 && textBox1->Text->Contains("0");
		}

		void clearFocus()
		{
			this->ActiveControl = nullptr;
		}

		void focusTextBox()
		{
			textBox1->Focus();
		}

		bool checkPasteRequirements()
		{
			//Checks for letter"s in the clipboard
			if (Clipboard::ContainsText())
			{
				TextBox tempBox;
				tempBox.Text = Clipboard::GetText();

				//parse text for letters
				int tempBoxLength = tempBox.Text->Length;
				int decimalCount = 0;



				for (int index = 0; index < tempBoxLength; index++)
				{
					char letterAtIndex = tempBox.Text[index];
					if (letterAtIndex < 48 && letterAtIndex != 46 ||
						letterAtIndex > 57 && letterAtIndex != 46)
					{
						MessageBox::Show(" clipboard cannot contain letters\n or special chars",
										 "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						return false; //is not a digit or decimal

					}
					if (tempBox.Text[index] == 46)
					{
						decimalCount++;
					}
					if (decimalCount > 1)
					{
						MessageBox::Show(" clipboard cannot contain more than one decimal",
										 "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						return false; //more than one decimal

					}

				}
				return true;
			}
		}



		/************************************************************************
				Section for Buttons that add entries into the textBox1 field

			This secton is for the buttons whos only function is to modify
			the text within the TextBox1 object.
			-Checks should be performed to make sure that TextBox1 has not 
			overflown, and no more than one decimal is included in the number

			Post: append the number clicked to the end of TextBox1's text and then
				  return it tot he text box
		************************************************************************/
		private: 
		System::Void Num1Button_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			if (checkForRemainderZero())
				clearTextBox();

			textBox1->Text += System::Convert::ToString(1);

			clearFocus();
		}

		System::Void Num2Button_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			if (checkForRemainderZero())
				clearTextBox();

			textBox1->Text += System::Convert::ToString(2);

			clearFocus();
		}

		System::Void Num3Button_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			if (checkForRemainderZero())
				clearTextBox();

			textBox1->Text += System::Convert::ToString(3);

			clearFocus();
		}

		System::Void Num4Button_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			if (checkForRemainderZero())
				clearTextBox();

			textBox1->Text += System::Convert::ToString(4);
			clearFocus();
		}

		System::Void Num5Button_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			if (checkForRemainderZero())
				clearTextBox();

			textBox1->Text += System::Convert::ToString(5);

			clearFocus();
		}

		System::Void Num6Button_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			if (checkForRemainderZero())
				clearTextBox();

			textBox1->Text += System::Convert::ToString(6);

			clearFocus();
		}

		System::Void Num7Button_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			if (checkForRemainderZero())
				clearTextBox();

			textBox1->Text += System::Convert::ToString(7);

			clearFocus();
		}

		System::Void Num8Button_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			if (checkForRemainderZero())
				clearTextBox();

			textBox1->Text += System::Convert::ToString(8);

			clearFocus();
		}

		System::Void Num9Button_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			if (checkForRemainderZero())
				clearTextBox();

			textBox1->Text += System::Convert::ToString(9);

			clearFocus();
		}

		System::Void Num0Button_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			if (checkForRemainderZero())
				clearTextBox();

			textBox1->Text += System::Convert::ToString(0);

			clearFocus();
		}

		System::Void DecimalButton_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			//check if there is a decimal present already
			if (!textBox1->Text->Contains("."))
			{
				//add a decimal to the number
				textBox1->Text += ".";
			}	

			clearFocus();
		}

		System::Void DeleteButton_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			//remove the last character in the textbox
			if (textBox1->Text->Length > 0)
			{
				textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length - 1);
			}
			
			clearFocus();
		}





		/************************************************************************
							Section for Operator Buttons

			-These functions allow the user to change the operation that is being
			performed to the numbers. Operation is chosen after entering the first
			number and before the second number is entered. 
			-Checks should be performed to make sure that the textbox field is 
			not empty before the operation is chosen. doing so should throw
			some kind of error.

			Post: The operation and first entry are stored in their own 
				  variables. TextBox1 has been cleared and ready for Second
				  Entry
		************************************************************************/
	private:
		System::Void PlusButton_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			if (textBox1->Text->Length > 0)
			{
				if (!operatorHit)
				{
					//record the first entry as an integer;
					firstEntry = System::Convert::ToDouble(textBox1->Text);

					//change Operation box to the clicked operation
					OperatorLabel->Text = "+";

					//reset the box to a clear state
					textBox1->Text = "";

					operatorHit = true;
				}
			}

			clearFocus();
		}

		System::Void SubtractButton_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			//if textbox is empty it needs to double as a negative number indicator
			if (textBox1->Text->Length < 1)
			{
				//insert the negative sign into the textbox not as an opperator
				textBox1->Text = "-";
			}
			else if (textBox1->Text->Length > 0)
			{
				if (!operatorHit)
				{
					//record the first entry as an integer;
					firstEntry = System::Convert::ToDouble(textBox1->Text);

					//change Operation box to the clicked operation
					OperatorLabel->Text = "-";

					//reset the box to a clear state
					textBox1->Text = "";

					operatorHit = true;
				}
			}

			clearFocus();
		}

		System::Void MultiplyButton_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			if (textBox1->Text->Length > 0)
			{
				if (!operatorHit)
				{
					//record the first entry as an integer;
					firstEntry = System::Convert::ToDouble(textBox1->Text);

					//change Operation box to the clicked operation
					OperatorLabel->Text = "*";

					//reset the box to a clear state
					textBox1->Text = "";

					operatorHit = true;

				}
			}

			clearFocus();
		}


		System::Void DivideButton_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			if (textBox1->Text->Length > 0)
			{
				if (!operatorHit)
				{
					//record the first entry as an integer;
					firstEntry = System::Convert::ToDouble(textBox1->Text);

					//change Operation box to the clicked operation
					OperatorLabel->Text = "/";

					//reset the box to a clear state
					textBox1->Text = "";

					operatorHit = true;
				}
			}

			clearFocus();
		}





		/************************************************************************
					Section for Enter/Clear Functionality

			- This section documents the functionality of Enter(=) and clear
			- Enter should
		************************************************************************/
		private: 
		System::Void EnterButton_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			if (textBox1->Text->Length > 0)
			{
				//store second entry
				secondEntry = System::Convert::ToDouble(textBox1->Text);
				
				if (!operatorHit)
				{
					firstEntry = System::Convert::ToDouble(textBox1->Text);
					result = firstEntry;
				}
				else if (OperatorLabel->Text == "+")
				{
					result = firstEntry + secondEntry;
				}
				else if (OperatorLabel->Text == "-")
				{
					result = firstEntry - secondEntry;
				}
				else if (OperatorLabel->Text == "/")
				{
					result = firstEntry / secondEntry;
				}
				else if (OperatorLabel->Text == "*")
				{
					result = firstEntry * secondEntry;
				}
				
				//update textbox1 with the solution
				textBox1->Text = System::Convert::ToString(result);

				//Set current OperatorBox icon to "="
				OperatorLabel->Text = "=";

				//set operatorHit to false
				operatorHit = false;

				clearFocus();
			}

		}

		System::Void clearButton_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			firstEntry = 0;
			secondEntry = 0;
			result = 0;
			operatorHit = false;
			OperatorLabel->Text = "";
			textBox1->Text = "";
		}

		private: System::Void CalculatorHome_Shown(System::Object^ sender, System::EventArgs^ e) 
		{
			clearFocus();
		}

		System::Void textBox1_MouseClick(System::Object^ sender,
			System::Windows::Forms::MouseEventArgs^ e)
		{
			clearFocus();
		}

		System::Void CalculatorHome_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
		{
			//Check what key was pressed
			switch (e->KeyValue)
			{
				case (int)Keys::Enter:
				{
					EnterButton->PerformClick();
					break;
				}
				case (int)Keys::NumPad0: case (int)Keys::D0:
				{
					Num0Button->PerformClick();
					break;
				}
				case (int)Keys::NumPad1: case (int)Keys::D1:
				{
					Num1Button->PerformClick();
					break;
				}
				case (int)Keys::NumPad2: case (int)Keys::D2:
				{
					Num2Button->PerformClick();
					break;
				}
				case (int)Keys::NumPad3: case (int)Keys::D3:
				{
					Num3Button->PerformClick();
					break;
				}
				case (int)Keys::NumPad4: case (int)Keys::D4:
				{
					Num4Button->PerformClick();
					break;
				}
				case (int)Keys::NumPad5: case (int)Keys::D5:
				{
					Num5Button->PerformClick();
					break;
				}
				case (int)Keys::NumPad6: case (int)Keys::D6:
				{
					Num6Button->PerformClick();
					break;
				}
				case (int)Keys::NumPad7: case (int)Keys::D7:
				{
					Num7Button->PerformClick();
					break;
				}
				case (int)Keys::NumPad8: case (int)Keys::D8:
				{
					Num8Button->PerformClick();
					break;
				}
				case (int)Keys::NumPad9: case (int)Keys::D9:
				{
					Num9Button->PerformClick();
					break;
				}
				case (int)Keys::Add: //Dont know how to handle Shift + Key yet
				{
					PlusButton->PerformClick();
					break;
				}
				case (int)Keys::Subtract:
				{
					SubtractButton->PerformClick();
					break;
				}
				case (int)Keys::Divide: 
				{
					DivideButton->PerformClick();
					break;
				}
				case (int)Keys::Multiply:
				{
					MultiplyButton->PerformClick();
					break;
				}
				case (int)Keys::Decimal: 
				{
					DecimalButton->PerformClick();
					break;
				}
				case (int)Keys::Delete:
				{
					DeleteButton->PerformClick();
					break;
				}
				case (int)Keys::Escape:
				{
					clearButton->PerformClick();
				}
			}
		}





		/************************************************************************
							Section for Menu Strip Items

			- 
			- 
		************************************************************************/
		System::Void exitToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			Application::Exit();
		}

		System::Void copyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			textBox1->SelectAll();
			textBox1->Copy();
		}
		
		System::Void cutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			textBox1->SelectAll();
			textBox1->Cut();
		}

	    System::Void pasteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			//check to make sure there are no letters and no more than one decimal
			if (checkPasteRequirements())
			{
				textBox1->SelectAll();
				textBox1->Paste();
			}
		}
		
		System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			// Send users to the github README.txt 
			System::Diagnostics::Process::Start
			("https://github.com/JustinAndreotti/winForms-Calculator/blob/master/README.txt.txt");
		}
	};//end header
}//end namespace
