#pragma once

namespace MyCalc {

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

	private: System::Windows::Forms::Button^ Exit_Button;
	private: System::Windows::Forms::Label^ Value;
	private: System::Windows::Forms::Button^ button_0;
	private: System::Windows::Forms::Button^ button_dot;
	private: System::Windows::Forms::Button^ button_equal;
	private: System::Windows::Forms::Button^ button_1;
	private: System::Windows::Forms::Button^ button_2;
	private: System::Windows::Forms::Button^ button_3;
	private: System::Windows::Forms::Button^ button_plus;
	private: System::Windows::Forms::Button^ button_4;
	private: System::Windows::Forms::Button^ button_5;
	private: System::Windows::Forms::Button^ button_6;
	private: System::Windows::Forms::Button^ button_minus;
	private: System::Windows::Forms::Button^ button_7;
	private: System::Windows::Forms::Button^ button_8;
	private: System::Windows::Forms::Button^ button_9;
	private: System::Windows::Forms::Button^ button_multi;
	private: System::Windows::Forms::Button^ button_ac;
	private: System::Windows::Forms::Button^ button_plmin;
	private: System::Windows::Forms::Button^ button_percent;
	private: System::Windows::Forms::Button^ button_division;
	private: double first_num;
	private: char user_action = ' ';
	private: bool is_equal = false;

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Exit_Button = (gcnew System::Windows::Forms::Button());
			this->Value = (gcnew System::Windows::Forms::Label());
			this->button_0 = (gcnew System::Windows::Forms::Button());
			this->button_dot = (gcnew System::Windows::Forms::Button());
			this->button_equal = (gcnew System::Windows::Forms::Button());
			this->button_1 = (gcnew System::Windows::Forms::Button());
			this->button_2 = (gcnew System::Windows::Forms::Button());
			this->button_3 = (gcnew System::Windows::Forms::Button());
			this->button_plus = (gcnew System::Windows::Forms::Button());
			this->button_4 = (gcnew System::Windows::Forms::Button());
			this->button_5 = (gcnew System::Windows::Forms::Button());
			this->button_6 = (gcnew System::Windows::Forms::Button());
			this->button_minus = (gcnew System::Windows::Forms::Button());
			this->button_7 = (gcnew System::Windows::Forms::Button());
			this->button_8 = (gcnew System::Windows::Forms::Button());
			this->button_9 = (gcnew System::Windows::Forms::Button());
			this->button_multi = (gcnew System::Windows::Forms::Button());
			this->button_ac = (gcnew System::Windows::Forms::Button());
			this->button_plmin = (gcnew System::Windows::Forms::Button());
			this->button_percent = (gcnew System::Windows::Forms::Button());
			this->button_division = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Exit_Button
			// 
			this->Exit_Button->Location = System::Drawing::Point(12, 12);
			this->Exit_Button->Name = L"Exit_Button";
			this->Exit_Button->Size = System::Drawing::Size(30, 30);
			this->Exit_Button->TabIndex = 1;
			this->Exit_Button->Text = L"X";
			this->Exit_Button->UseVisualStyleBackColor = true;
			this->Exit_Button->Click += gcnew System::EventHandler(this, &MyForm::Exit_Button_Click);
			// 
			// Value
			// 
			this->Value->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Value->Location = System::Drawing::Point(60, 15);
			this->Value->Name = L"Value";
			this->Value->Size = System::Drawing::Size(210, 46);
			this->Value->TabIndex = 2;
			this->Value->Text = L"0";
			this->Value->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button_0
			// 
			this->button_0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_0->Location = System::Drawing::Point(11, 339);
			this->button_0->Name = L"button_0";
			this->button_0->Size = System::Drawing::Size(60, 58);
			this->button_0->TabIndex = 3;
			this->button_0->Text = L"0";
			this->button_0->UseVisualStyleBackColor = true;
			this->button_0->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button_dot
			// 
			this->button_dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_dot->Location = System::Drawing::Point(78, 339);
			this->button_dot->Name = L"button_dot";
			this->button_dot->Size = System::Drawing::Size(60, 58);
			this->button_dot->TabIndex = 5;
			this->button_dot->Text = L".";
			this->button_dot->UseVisualStyleBackColor = true;
			this->button_dot->Click += gcnew System::EventHandler(this, &MyForm::button_dot_Click);
			// 
			// button_equal
			// 
			this->button_equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_equal->Location = System::Drawing::Point(144, 339);
			this->button_equal->Name = L"button_equal";
			this->button_equal->Size = System::Drawing::Size(125, 58);
			this->button_equal->TabIndex = 6;
			this->button_equal->Text = L"=";
			this->button_equal->UseVisualStyleBackColor = true;
			this->button_equal->Click += gcnew System::EventHandler(this, &MyForm::button_equal_Click);
			// 
			// button_1
			// 
			this->button_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_1->Location = System::Drawing::Point(11, 275);
			this->button_1->Name = L"button_1";
			this->button_1->Size = System::Drawing::Size(60, 58);
			this->button_1->TabIndex = 7;
			this->button_1->Text = L"1";
			this->button_1->UseVisualStyleBackColor = true;
			this->button_1->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button_2
			// 
			this->button_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_2->Location = System::Drawing::Point(77, 275);
			this->button_2->Name = L"button_2";
			this->button_2->Size = System::Drawing::Size(60, 58);
			this->button_2->TabIndex = 8;
			this->button_2->Text = L"2";
			this->button_2->UseVisualStyleBackColor = true;
			this->button_2->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button_3
			// 
			this->button_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_3->Location = System::Drawing::Point(143, 275);
			this->button_3->Name = L"button_3";
			this->button_3->Size = System::Drawing::Size(60, 58);
			this->button_3->TabIndex = 9;
			this->button_3->Text = L"3";
			this->button_3->UseVisualStyleBackColor = true;
			this->button_3->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button_plus
			// 
			this->button_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_plus->Location = System::Drawing::Point(209, 275);
			this->button_plus->Name = L"button_plus";
			this->button_plus->Size = System::Drawing::Size(60, 58);
			this->button_plus->TabIndex = 10;
			this->button_plus->Text = L"+";
			this->button_plus->UseVisualStyleBackColor = true;
			this->button_plus->Click += gcnew System::EventHandler(this, &MyForm::button_plus_Click);
			// 
			// button_4
			// 
			this->button_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_4->Location = System::Drawing::Point(11, 211);
			this->button_4->Name = L"button_4";
			this->button_4->Size = System::Drawing::Size(60, 58);
			this->button_4->TabIndex = 11;
			this->button_4->Text = L"4";
			this->button_4->UseVisualStyleBackColor = true;
			this->button_4->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button_5
			// 
			this->button_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_5->Location = System::Drawing::Point(77, 211);
			this->button_5->Name = L"button_5";
			this->button_5->Size = System::Drawing::Size(60, 58);
			this->button_5->TabIndex = 12;
			this->button_5->Text = L"5";
			this->button_5->UseVisualStyleBackColor = true;
			this->button_5->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button_6
			// 
			this->button_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_6->Location = System::Drawing::Point(143, 211);
			this->button_6->Name = L"button_6";
			this->button_6->Size = System::Drawing::Size(60, 58);
			this->button_6->TabIndex = 13;
			this->button_6->Text = L"6";
			this->button_6->UseVisualStyleBackColor = true;
			this->button_6->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button_minus
			// 
			this->button_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_minus->Location = System::Drawing::Point(209, 211);
			this->button_minus->Name = L"button_minus";
			this->button_minus->Size = System::Drawing::Size(60, 58);
			this->button_minus->TabIndex = 14;
			this->button_minus->Text = L"-";
			this->button_minus->UseVisualStyleBackColor = true;
			this->button_minus->Click += gcnew System::EventHandler(this, &MyForm::button_minus_Click);
			// 
			// button_7
			// 
			this->button_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_7->Location = System::Drawing::Point(12, 147);
			this->button_7->Name = L"button_7";
			this->button_7->Size = System::Drawing::Size(60, 58);
			this->button_7->TabIndex = 15;
			this->button_7->Text = L"7";
			this->button_7->UseVisualStyleBackColor = true;
			this->button_7->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button_8
			// 
			this->button_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_8->Location = System::Drawing::Point(78, 147);
			this->button_8->Name = L"button_8";
			this->button_8->Size = System::Drawing::Size(60, 58);
			this->button_8->TabIndex = 16;
			this->button_8->Text = L"8";
			this->button_8->UseVisualStyleBackColor = true;
			this->button_8->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button_9
			// 
			this->button_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_9->Location = System::Drawing::Point(144, 147);
			this->button_9->Name = L"button_9";
			this->button_9->Size = System::Drawing::Size(60, 58);
			this->button_9->TabIndex = 17;
			this->button_9->Text = L"9";
			this->button_9->UseVisualStyleBackColor = true;
			this->button_9->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button_multi
			// 
			this->button_multi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_multi->Location = System::Drawing::Point(210, 147);
			this->button_multi->Name = L"button_multi";
			this->button_multi->Size = System::Drawing::Size(60, 58);
			this->button_multi->TabIndex = 18;
			this->button_multi->Text = L"*";
			this->button_multi->UseVisualStyleBackColor = true;
			this->button_multi->Click += gcnew System::EventHandler(this, &MyForm::button_multi_Click);
			// 
			// button_ac
			// 
			this->button_ac->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_ac->Location = System::Drawing::Point(12, 83);
			this->button_ac->Name = L"button_ac";
			this->button_ac->Size = System::Drawing::Size(60, 58);
			this->button_ac->TabIndex = 19;
			this->button_ac->Text = L"AC";
			this->button_ac->UseVisualStyleBackColor = true;
			this->button_ac->Click += gcnew System::EventHandler(this, &MyForm::button_ac_Click);
			// 
			// button_plmin
			// 
			this->button_plmin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_plmin->Location = System::Drawing::Point(77, 83);
			this->button_plmin->Name = L"button_plmin";
			this->button_plmin->Size = System::Drawing::Size(60, 58);
			this->button_plmin->TabIndex = 20;
			this->button_plmin->Text = L"+/-";
			this->button_plmin->UseVisualStyleBackColor = true;
			this->button_plmin->Click += gcnew System::EventHandler(this, &MyForm::button_plmin_Click);
			// 
			// button_percent
			// 
			this->button_percent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_percent->Location = System::Drawing::Point(143, 83);
			this->button_percent->Name = L"button_percent";
			this->button_percent->Size = System::Drawing::Size(60, 58);
			this->button_percent->TabIndex = 21;
			this->button_percent->Text = L"%";
			this->button_percent->UseVisualStyleBackColor = true;
			this->button_percent->Click += gcnew System::EventHandler(this, &MyForm::button_percent_Click);
			// 
			// button_division
			// 
			this->button_division->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_division->Location = System::Drawing::Point(210, 83);
			this->button_division->Name = L"button_division";
			this->button_division->Size = System::Drawing::Size(60, 58);
			this->button_division->TabIndex = 22;
			this->button_division->Text = L"/";
			this->button_division->UseVisualStyleBackColor = true;
			this->button_division->Click += gcnew System::EventHandler(this, &MyForm::button_division_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(282, 404);
			this->ControlBox = false;
			this->Controls->Add(this->button_division);
			this->Controls->Add(this->button_percent);
			this->Controls->Add(this->button_plmin);
			this->Controls->Add(this->button_ac);
			this->Controls->Add(this->button_multi);
			this->Controls->Add(this->button_9);
			this->Controls->Add(this->button_8);
			this->Controls->Add(this->button_7);
			this->Controls->Add(this->button_minus);
			this->Controls->Add(this->button_6);
			this->Controls->Add(this->button_5);
			this->Controls->Add(this->button_4);
			this->Controls->Add(this->button_plus);
			this->Controls->Add(this->button_3);
			this->Controls->Add(this->button_2);
			this->Controls->Add(this->button_1);
			this->Controls->Add(this->button_equal);
			this->Controls->Add(this->button_dot);
			this->Controls->Add(this->button_0);
			this->Controls->Add(this->Value);
			this->Controls->Add(this->Exit_Button);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyCalc";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{

	}
		   //exit button
	private: System::Void Exit_Button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MyForm::Close();
	}
	
	private: System::Void BtnNumber_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Value->ForeColor = Color::White;
		Button^ button = safe_cast<Button^>(sender);
		

		if (this->Value->Text == "0" || is_equal == true)
		{
			this->Value->Text = button->Text;
			is_equal = false;
		}
		else
			this->Value->Text = this->Value->Text + button->Text;
	}


private: System::Void button_plus_Click(System::Object^ sender, System::EventArgs^ e)
{
	math_action('+');
}
private: System::Void button_minus_Click(System::Object^ sender, System::EventArgs^ e) 
{
	math_action('-');
}
private: System::Void button_multi_Click(System::Object^ sender, System::EventArgs^ e)
{
	math_action('*');
}
private: System::Void button_division_Click(System::Object^ sender, System::EventArgs^ e) 
{
	math_action('/');
}

private: System::Void math_action(char action)
	   {
	 this->first_num = System::Convert::ToDouble(this->Value->Text);
	 this->user_action = action;
	 this->Value->Text = "0";
	   }
private: System::Void button_equal_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (user_action == ' ')
		return;

	int second = System::Convert::ToDouble(this->Value->Text);
	int res;
	switch (this->user_action)
	{
	case '+': res = this->first_num + second; break;
	case '-': res = this->first_num - second; break;
	case '*': res = this->first_num * second; break;
	case '%': res = this->first_num * second / 100; break;
	case '/':
		if (second == 0)
		{
			res = 0;
			this->Value->ForeColor = Color::DarkRed;
			MessageBox::Show(this, "ƒействие запрещено", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		res = this->first_num / second;
		break;
	}
	this->is_equal = true;
	this->Value->Text = System::Convert::ToString(res);
}
private: System::Void button_ac_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Value->Text = "0";
	this->Value->ForeColor = Color::White;
	this->first_num = 0;
	this->user_action = ' ';
	is_equal = false;
}
private: System::Void button_plmin_Click(System::Object^ sender, System::EventArgs^ e)
{
	int num = System::Convert::ToDouble(this->Value->Text);
	num *= -1;
	this->Value->Text = System::Convert::ToString(num);
}
private: System::Void button_percent_Click(System::Object^ sender, System::EventArgs^ e)
{
	math_action('%');

}
private: System::Void button_dot_Click(System::Object^ sender, System::EventArgs^ e)
	{
	String^ text = this->Value->Text;
	if(!text->Contains(","))
	this->Value->Text = text + ",";
	}
};
}
