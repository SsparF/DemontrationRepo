#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::RadioButton^ radioButton3;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(80, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Число 1";
			this->textBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm3::textBox1_MouseClick);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 75);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(211, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"Результат (Число 1 в куб)";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(12, 101);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(211, 20);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"Результат (Число 1 + корень из 13)";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(12, 127);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(211, 20);
			this->textBox4->TabIndex = 3;
			this->textBox4->Text = L"Результат (Число 1 делить на Число 2) ";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(12, 38);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(80, 20);
			this->textBox5->TabIndex = 4;
			this->textBox5->Text = L"Число 2";
			this->textBox5->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm3::textBox5_MouseClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(112, 22);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Очистить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(229, 72);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Вычислить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm3::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(229, 98);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Вычислить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm3::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(229, 124);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Вычислить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm3::button4_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(12, 156);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(119, 90);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Цвет приложения";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(7, 67);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(74, 17);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Оригинал";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm3::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(7, 44);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(52, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Black";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm3::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(7, 20);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(51, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Violet";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm3::radioButton1_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(163, 186);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(53, 17);
			this->checkBox1->TabIndex = 10;
			this->checkBox1->Text = L"ФИО";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm3::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(163, 210);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(141, 17);
			this->checkBox2->TabIndex = 11;
			this->checkBox2->Text = L"Номер группы, списка";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm3::checkBox2_CheckedChanged);
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(354, 258);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm3";
			this->Text = L"MyForm3";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->textBox1->Clear();
	this->textBox5->Clear();
	this->textBox2->Text = "Результат (Число 1 в куб)";
	this->textBox3->Text = "Результат (Число 1 + корень из 13)";
	this->textBox4->Text = "Результат (Число 1 делить на Число 2) ";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		double a = Convert::ToDouble(this->textBox1->Text);
		double c = Math::Pow(a, 3);
		this->textBox2->Clear();
		this->textBox2->Text = c.ToString();
		this->Text = c.ToString();
	}
	catch (System::FormatException^ e)
	{
		MessageBox::Show(e->Message->ToString(), "Ошибка формата данных!");
		button1_Click(sender, System::EventArgs::Empty);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		double a = Convert::ToDouble(this->textBox1->Text);
		double c = a+(Math::Sqrt(13));
		this->textBox3->Clear();
		this->textBox3->Text = c.ToString();
		this->Text = c.ToString();
	}
	catch (System::FormatException^ e)
	{
		MessageBox::Show(e->Message->ToString(), "Ошибка формата данных!");
		button1_Click(sender, System::EventArgs::Empty);
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		double a = Convert::ToDouble(this->textBox1->Text);
		double b = Convert::ToDouble(this->textBox5->Text);
		if (b == 0)
		{
			MessageBox::Show("Попытка деления на ноль!");
			button1_Click(sender, System::EventArgs::Empty);
		}
		else
		{
			double c = a / b;
			this->textBox4->Clear();
			this->textBox4->Text = c.ToString();
			this->Text = c.ToString();
		}
	}
	catch (System::FormatException^ e)
	{
		MessageBox::Show(e->Message->ToString(), "Ошибка формата данных!");
		button1_Click(sender, System::EventArgs::Empty);
	}
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	this->BackColor = Color::Violet;
	if (this->groupBox1->ForeColor == Color::White)
	{
		this->groupBox1->ForeColor = Color::Black;
	}
	if (this->checkBox1->ForeColor == Color::White)
	{
		this->checkBox1->ForeColor = Color::Black;
	}
	if (this->checkBox2->ForeColor == Color::White)
	{
		this->checkBox2->ForeColor = Color::Black;
	}
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	this->BackColor = Color::Black;
	this->groupBox1->ForeColor = Color::White;
	this->checkBox1->ForeColor = Color::White;
	this->checkBox2->ForeColor = Color::White;
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	this->Text = "Парфянович Александр Сергеевич";
	this->checkBox2->CheckState = CheckState::Unchecked;
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	this->Text = "Т-992 №20";
	this->checkBox1->CheckState = CheckState::Unchecked;
}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	this->BackColor = SystemColors::ButtonFace;
	if (this->groupBox1->ForeColor == Color::White)
	{
		this->groupBox1->ForeColor = Color::Black;
	}
	if (this->checkBox1->ForeColor == Color::White)
	{
		this->checkBox1->ForeColor = Color::Black;
	}
	if (this->checkBox2->ForeColor == Color::White)
	{
		this->checkBox2->ForeColor = Color::Black;
	}
	this->Text = "MyForm3";
}
private: System::Void textBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
{
	this->textBox1->Clear();
}

private: System::Void textBox5_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
{
	this->textBox5->Clear();
}
};
}
