#pragma once

#include "App.h"

namespace ProjectLab9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ MethodComboBox;
	protected:
	private: System::Windows::Forms::ComboBox^ PolynomialComboBox;
	private: System::Windows::Forms::TextBox^ aValueTB;
	private: System::Windows::Forms::TextBox^ bValueTB;
	private: System::Windows::Forms::TextBox^ ResultTB;
	private: System::Windows::Forms::TextBox^ IterationsTB;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ SolveButton;
	private: System::Windows::Forms::TextBox^ epsValueTB;

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
			this->epsValueTB = (gcnew System::Windows::Forms::TextBox());
			this->MethodComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->PolynomialComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->aValueTB = (gcnew System::Windows::Forms::TextBox());
			this->bValueTB = (gcnew System::Windows::Forms::TextBox());
			this->ResultTB = (gcnew System::Windows::Forms::TextBox());
			this->IterationsTB = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SolveButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// epsValueTB
			// 
			this->epsValueTB->Location = System::Drawing::Point(223, 82);
			this->epsValueTB->Name = L"epsValueTB";
			this->epsValueTB->Size = System::Drawing::Size(100, 20);
			this->epsValueTB->TabIndex = 4;
			// 
			// MethodComboBox
			// 
			this->MethodComboBox->DisplayMember = L"0";
			this->MethodComboBox->FormattingEnabled = true;
			this->MethodComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"МДН", L"Метод Ньютона" });
			this->MethodComboBox->Location = System::Drawing::Point(12, 30);
			this->MethodComboBox->Name = L"MethodComboBox";
			this->MethodComboBox->Size = System::Drawing::Size(121, 21);
			this->MethodComboBox->TabIndex = 0;
			this->MethodComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::MethodComboBox_SelectedIndexChanged);
			// 
			// PolynomialComboBox
			// 
			this->PolynomialComboBox->FormattingEnabled = true;
			this->PolynomialComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"x*x - 4 = 0", L"3 * x - 4 * log(x) - 5 = 0" });
			this->PolynomialComboBox->Location = System::Drawing::Point(12, 94);
			this->PolynomialComboBox->Name = L"PolynomialComboBox";
			this->PolynomialComboBox->Size = System::Drawing::Size(121, 21);
			this->PolynomialComboBox->TabIndex = 1;
			this->PolynomialComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::PolynomialComboBox_SelectedIndexChanged);
			// 
			// aValueTB
			// 
			this->aValueTB->Location = System::Drawing::Point(223, 30);
			this->aValueTB->Name = L"aValueTB";
			this->aValueTB->Size = System::Drawing::Size(100, 20);
			this->aValueTB->TabIndex = 2;
			// 
			// bValueTB
			// 
			this->bValueTB->Location = System::Drawing::Point(223, 56);
			this->bValueTB->Name = L"bValueTB";
			this->bValueTB->Size = System::Drawing::Size(100, 20);
			this->bValueTB->TabIndex = 3;
			// 
			// ResultTB
			// 
			this->ResultTB->Location = System::Drawing::Point(171, 144);
			this->ResultTB->Name = L"ResultTB";
			this->ResultTB->ReadOnly = true;
			this->ResultTB->Size = System::Drawing::Size(100, 20);
			this->ResultTB->TabIndex = 5;
			// 
			// IterationsTB
			// 
			this->IterationsTB->Location = System::Drawing::Point(171, 170);
			this->IterationsTB->Name = L"IterationsTB";
			this->IterationsTB->ReadOnly = true;
			this->IterationsTB->Size = System::Drawing::Size(100, 20);
			this->IterationsTB->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 20);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Метод";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 20);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Рівняння";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(187, 30);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 20);
			this->label3->TabIndex = 10;
			this->label3->Text = L"a =";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(187, 56);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(31, 20);
			this->label4->TabIndex = 11;
			this->label4->Text = L"b =";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(168, 80);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(50, 20);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Eps =";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(91, 142);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(75, 20);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Корінь = ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(40, 170);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(126, 20);
			this->label7->TabIndex = 14;
			this->label7->Text = L"К-сть іткрацій =";
			// 
			// SolveButton
			// 
			this->SolveButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SolveButton->Location = System::Drawing::Point(210, 215);
			this->SolveButton->Name = L"SolveButton";
			this->SolveButton->Size = System::Drawing::Size(101, 34);
			this->SolveButton->TabIndex = 7;
			this->SolveButton->Text = L"Розв\'язати";
			this->SolveButton->UseVisualStyleBackColor = true;
			this->SolveButton->Click += gcnew System::EventHandler(this, &MyForm::SolveButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(332, 261);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->SolveButton);
			this->Controls->Add(this->IterationsTB);
			this->Controls->Add(this->ResultTB);
			this->Controls->Add(this->epsValueTB);
			this->Controls->Add(this->bValueTB);
			this->Controls->Add(this->aValueTB);
			this->Controls->Add(this->PolynomialComboBox);
			this->Controls->Add(this->MethodComboBox);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(348, 300);
			this->MinimumSize = System::Drawing::Size(348, 300);
			this->Name = L"MyForm";
			this->Text = L"СПВ Розв\'язання нелінійних рівнянь за МДН та МН";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MethodComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void PolynomialComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void SolveButton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	PolyFunc polyFunc;
	MethodFunc methodFunc;

	switch (PolynomialComboBox->SelectedIndex)
	{
	case 0: polyFunc = Polynomial1; break;
	case 1: polyFunc = Polynomial2; break;
	}

	switch (MethodComboBox->SelectedIndex)
	{
	case 0: methodFunc = BisectionMethod; break;
	case 1: methodFunc = NewtonMethod; break;
	}

	const float a = Convert::ToDouble(aValueTB->Text);
	const float b = Convert::ToDouble(bValueTB->Text);
	const float eps = Convert::ToDouble(epsValueTB->Text);

	MethodRes res = methodFunc(a, b, eps, polyFunc);

	ResultTB->Text = Convert::ToString(res.Root);
	IterationsTB->Text = Convert::ToString(res.Iterations);
}
};
}
