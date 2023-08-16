#pragma once

namespace laba291 {

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
			this->Text = "Работа с MS Word Парфянович Александр Т-992";
			this->textBox1->Multiline = true;
			this->textBox1->TabIndex = 0;
			this->button1->TabIndex = 1;
			this->button2->TabIndex = 2;
			this->button1->Text = "Проверка орфографии";
			this->button2->Text = "Создать документ";
			textBox1->AutoSize = false;
			textBox1->Size = System::Drawing::Size(258, 350);
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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(17, 16);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(344, 22);
			this->textBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(17, 471);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(156, 28);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(181, 471);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(181, 28);
			this->button2->TabIndex = 2;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(371, 15);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(452, 352);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(853, 506);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		auto word1 = gcnew Microsoft::Office::Interop::Word::Application();
		word1->Visible = false;
		Object^ t = Type::Missing;
		auto document = word1->Documents->Add(t, t, t, t);
		document->Words->First->InsertBefore(this->textBox1->Text);
		document->CheckSpelling(t,t,t,t,t,t,t,t,t,t,t,t);
		String^ correctText = document->Content->Text;
		this->textBox1->Text = correctText->Replace("\r","");
		Boolean^ tt = false;
		word1->Documents->Close(tt, t, t);
		word1->Quit(tt, t, t);
		word1 = nullptr;

	}
		   private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
			   DataTable^ table = gcnew DataTable();
			   table->Columns->Add("Название книги", String::typeid);
			   table->Columns->Add("Количество книг", double::typeid);
			   table->Columns->Add("Цена книги", double::typeid);
			   DataRow^ row = table->NewRow();
			   row["Название книги"] = "Пеппидлинныйчулок";
			   row["Количество книг"] = 6;
			   row["Цена книги"] = 150;
			   table->Rows->Add(row);
			   dataGridView1->DataSource = table;

		   }
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		try 
		{
			int rows = dataGridView1->Rows->Count;
			String^ name;
			String^ count;
			String^ price;
			auto word2 = gcnew Microsoft::Office::Interop::Word::Application();
			word2->Visible = true;
			auto t = Type::Missing;
			auto document2 = word2->Documents->Add(t, t, t, t);
			word2->Selection->TypeText("\t\t\t\tТаблица наличия книг в библиотеке.");
			System::Object^ t1 = Microsoft::Office::Interop::Word::WdDefaultTableBehavior::wdWord9TableBehavior;
			System::Object^ t2 = Microsoft::Office::Interop::Word::WdAutoFitBehavior::wdAutoFitContent;
			word2->ActiveDocument->Tables->Add(word2->Selection->Range, (rows - 1), 3, t1, t2);
			for (size_t i = 0; i < rows; i++)
			{
					try
					{
						name = dataGridView1->Rows[i]->Cells[0]->Value->ToString();
						count = dataGridView1->Rows[i]->Cells[1]->Value->ToString();
						price = dataGridView1->Rows[i]->Cells[2]->Value->ToString();
						word2->ActiveDocument->Tables[1]->Cell(i + 1, 1)->Range->InsertAfter(name);
						word2->ActiveDocument->Tables[1]->Cell(i + 1, 2)->Range->InsertAfter(count);
						word2->ActiveDocument->Tables[1]->Cell(i + 1, 3)->Range->InsertAfter(price);

					}
					catch (System::Runtime::InteropServices::COMException^ e)
					{
						textBox1->Text += i.ToString() + " " + e->Message + "\t";
						i--;
					}
			}
			Object^ t3 = Microsoft::Office::Interop::Word::WdUnits::wdLine;
			Int32^ str10 = 3;
			word2->Selection->MoveDown(t3, str10, t);
			//word2->Selection->TypeText("111111111111111111111111111111111111111111111\n");
			Object^ fileName = "Parfianovich.docx";
			word2->ActiveDocument->SaveAs(fileName, t, t, t, t, t, t, t, t, t, t, t,t,t,t,t);
		}
		catch (System::Exception^ e0)
		{
			textBox1->Text += e0->Message + "\t";
		}

	}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ tmp = dataGridView1->Rows[0]->Cells[0]->Value->ToString();
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
