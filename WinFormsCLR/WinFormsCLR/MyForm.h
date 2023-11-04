#pragma once

namespace WinFormsCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ ClickMe_Button;
	private: System::Windows::Forms::CheckBox^ checkBox;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::ServiceProcess::ServiceController^ serviceController1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button1;
	protected:




	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ClickMe_Button = (gcnew System::Windows::Forms::Button());
			this->checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->serviceController1 = (gcnew System::ServiceProcess::ServiceController());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Some Text";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// ClickMe_Button
			// 
			this->ClickMe_Button->Location = System::Drawing::Point(12, 25);
			this->ClickMe_Button->Name = L"ClickMe_Button";
			this->ClickMe_Button->Size = System::Drawing::Size(200, 40);
			this->ClickMe_Button->TabIndex = 1;
			this->ClickMe_Button->Text = L"Click Me";
			this->ClickMe_Button->UseVisualStyleBackColor = true;
			this->ClickMe_Button->Click += gcnew System::EventHandler(this, &MyForm::ClickMe_Button_Click);
			// 
			// checkBox
			// 
			this->checkBox->AutoSize = true;
			this->checkBox->Location = System::Drawing::Point(15, 103);
			this->checkBox->Name = L"checkBox";
			this->checkBox->Size = System::Drawing::Size(74, 17);
			this->checkBox->TabIndex = 2;
			this->checkBox->Text = L"checkBox";
			this->checkBox->UseVisualStyleBackColor = true;
			this->checkBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_CheckedChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(15, 142);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(116, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(134, 241);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(80, 17);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L"checkBox1";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(134, 288);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(439, 508);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->checkBox);
			this->Controls->Add(this->ClickMe_Button);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"First Program";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e)
	{

	}
	private: System::Void ClickMe_Button_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->label1->Text = "I was clicked!";
	}
	private: System::Void checkBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->checkBox->Checked)
			this->ClickMe_Button->Width = 300;
		else
			this->ClickMe_Button->Width = 100;
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (this->textBox1->Text == "blue")
		this->ClickMe_Button->BackColor = Color::Blue;
	else if (this->textBox1->Text == "red")
		this->ClickMe_Button->BackColor = Color::Red;
}
};
}
