#pragma once

namespace laba292 {

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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label3;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(21, 22);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(363, 350);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.75F));
			this->button1->Location = System::Drawing::Point(67, 385);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(159, 27);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Создать документ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(399, 59);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(300, 300);
			this->chart1->TabIndex = 3;
			this->chart1->Text = L"chart1";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.75F));
			this->button2->Location = System::Drawing::Point(473, 385);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(161, 27);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Обновить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.75F));
			this->label1->Location = System::Drawing::Point(734, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(155, 18);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Средняя стоймость: ";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(883, 26);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(43, 20);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(918, 73);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(43, 20);
			this->textBox3->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.75F));
			this->label2->Location = System::Drawing::Point(734, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(192, 18);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Минимальная стоймость: ";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(918, 116);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(43, 20);
			this->textBox4->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.75F));
			this->label3->Location = System::Drawing::Point(739, 118);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(178, 18);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Не было в продаже/ раз";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(988, 416);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		DataTable^ table = gcnew DataTable();
		table->Columns->Add("Месяц", String::typeid);
		table->Columns->Add("Название товара", String::typeid);
		table->Columns->Add("Количество товара", double::typeid);
		table->Columns->Add("Цена товара", double::typeid);
		DataRow^ row = table->NewRow();
		row["Месяц"] = "Январь";
		row["Название товара"] = "Пеппидлинныйчулок";
		row["Количество товара"] = 6;
		row["Цена товара"] = 150;
		table->Rows->Add(row);
		row = table->NewRow();
		row["Месяц"] = "Февраль";
		table->Rows->Add(row);
		row = table->NewRow();
		row["Месяц"] = "Март";\
		table->Rows->Add(row);
		row = table->NewRow();
		row["Месяц"] = "Апррель";
		table->Rows->Add(row);
		row = table->NewRow();
		row["Месяц"] = "Май";
		table->Rows->Add(row);
		row = table->NewRow();
		row["Месяц"] = "Июнь";
		table->Rows->Add(row);
		chart1->DataSource = table;
		chart1->Series["Series1"]->XValueMember = "Месяц";
		chart1->Series["Series1"]->YValueMembers = "Цена товара";
		chart1->Titles->Add("Цена товаров");
		chart1->Series["Series1"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
		chart1->Series["Series1"]->Color = Color::Aqua;
		chart1->Series["Series1"]->IsVisibleInLegend = false;
		chart1->DataBind();
		dataGridView1->DataSource = table;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int rows = dataGridView1->Rows->Count;
			String^ month;
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
			word2->ActiveDocument->Tables->Add(word2->Selection->Range, (rows - 1), 4, t1, t2);
			for (size_t i = 0; i < rows-1; i++)
			{
				try
				{
					month = dataGridView1->Rows[i]->Cells[0]->Value->ToString();
					name = dataGridView1->Rows[i]->Cells[1]->Value->ToString();
					count = dataGridView1->Rows[i]->Cells[2]->Value->ToString();
					price = dataGridView1->Rows[i]->Cells[3]->Value->ToString();
					word2->ActiveDocument->Tables[1]->Cell(i + 1, 1)->Range->InsertAfter(month);
					word2->ActiveDocument->Tables[1]->Cell(i + 1, 2)->Range->InsertAfter(name);
					word2->ActiveDocument->Tables[1]->Cell(i + 1, 3)->Range->InsertAfter(count);
					word2->ActiveDocument->Tables[1]->Cell(i + 1, 4)->Range->InsertAfter(price);

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
			Object^ fileName = "Parfianovich.docx";
			word2->ActiveDocument->SaveAs(fileName, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t);
		}
		catch (System::Exception^ e0)
		{
			textBox1->Text += e0->Message + "\t";
		}

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		chart1->DataBind();
		String^ price;
		String^ count;
		double a,sum,min = 10000;
		int k=0,count2;
		int rows = dataGridView1->Rows->Count;
		try
		{
			for (size_t i = 0; i < rows - 1; i++)
			{
				price = dataGridView1->Rows[i]->Cells[3]->Value->ToString();
				count = dataGridView1->Rows[i]->Cells[2]->Value->ToString();
				a = Convert::ToDouble(price);
				count2 = Convert::ToDouble(count);
				sum += a;
				if (a < min)
					min = a;
				if (count2 == 0)
					k++;
			}
		}
		catch (System::FormatException^ e)
		{
			textBox1->Text = "Ошибка";
		}
		textBox2->Text = ""+(sum / 6);
		textBox3->Text = "" + min;
		textBox4->Text = "" + k;

	}
};
}
