#pragma once

namespace winformscpp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ main_btn;
	private: System::Windows::Forms::Label^ main_lbl;
	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->main_btn = (gcnew System::Windows::Forms::Button());
			this->main_lbl = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// main_btn
			// 
			this->main_btn->Location = System::Drawing::Point(13, 86);
			this->main_btn->Name = L"main_btn";
			this->main_btn->Size = System::Drawing::Size(75, 23);
			this->main_btn->TabIndex = 0;
			this->main_btn->Text = L"main_btn";
			this->main_btn->UseVisualStyleBackColor = true;
			this->main_btn->Click += gcnew System::EventHandler(this, &MyForm::main_btn_Click);
			// 
			// main_lbl
			// 
			this->main_lbl->Location = System::Drawing::Point(12, 132);
			this->main_lbl->Name = L"main_lbl";
			this->main_lbl->Size = System::Drawing::Size(317, 91);
			this->main_lbl->TabIndex = 1;
			this->main_lbl->Text = L"main_lbl";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(369, 426);
			this->Controls->Add(this->main_lbl);
			this->Controls->Add(this->main_btn);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
		int count = 0;
	private: System::Void main_btn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		
		count++;
		this->main_lbl->Text = "Количество нажатий: " + System::Convert::ToString(count);
		
	}
	};
}
