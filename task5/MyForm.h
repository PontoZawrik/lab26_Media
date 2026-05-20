#pragma once

namespace task5 {

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ создатьМассивToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ отобразитьФИОToolStripMenuItem;
	private: System::Windows::Forms::Label^ label2;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->создатьМассивToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->отобразитьФИОToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 115);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 16);
			this->label1->TabIndex = 13;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 269);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(363, 23);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Распечатать имеющиеся в массиве значения";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 220);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(363, 22);
			this->textBox2->TabIndex = 11;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 85);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(363, 23);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Добавить символ в массив";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 191);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(363, 23);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Создать новый массив (размерность берётся выше)";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(120, 56);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(255, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Сгенерировать рандомную букву";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 56);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(102, 22);
			this->textBox1->TabIndex = 7;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->создатьМассивToolStripMenuItem,
					this->отобразитьФИОToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(422, 28);
			this->menuStrip1->TabIndex = 14;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// создатьМассивToolStripMenuItem
			// 
			this->создатьМассивToolStripMenuItem->Name = L"создатьМассивToolStripMenuItem";
			this->создатьМассивToolStripMenuItem->Size = System::Drawing::Size(132, 24);
			this->создатьМассивToolStripMenuItem->Text = L"Создать массив";
			this->создатьМассивToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::создатьМассивToolStripMenuItem_Click);
			// 
			// отобразитьФИОToolStripMenuItem
			// 
			this->отобразитьФИОToolStripMenuItem->Name = L"отобразитьФИОToolStripMenuItem";
			this->отобразитьФИОToolStripMenuItem->Size = System::Drawing::Size(142, 24);
			this->отобразитьФИОToolStripMenuItem->Text = L"Отобразить ФИО";
			this->отобразитьФИОToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::отобразитьФИОToolStripMenuItem_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 249);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 16);
			this->label2->TabIndex = 15;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(422, 337);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private:
	int n = 0;
	array<Char>^ m = nullptr;
	int i = 0;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Random^ r = gcnew Random();
		Char a = 'A' + (r->Next()) % 26;
		textBox1->Text = a.ToString();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (m != nullptr) {
				delete[] m;
				m = nullptr;
				n = 0;
				label1->Text = "Удален имевшийся массив.";
			}

			this->n = Convert::ToInt32(this->textBox1->Text);
			m = gcnew array<Char>(n);

			if (!m) {
				MessageBox::Show("Не удалось создать массив на " + n.ToString() + " элементов.");
				return;
			}
			i = 0;
			label1->Text = "Создан массив на " + n.ToString() + " элементов.";
		}
		catch (System::FormatException^ e) {
			MessageBox::Show(e->Message);
		}
		catch (System::Exception^ e) {
			MessageBox::Show(e->Message);
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (i < n && n > 0 && m != nullptr) {
				m[i] = this->textBox1->Text[0];
				i++;
				label1->Text = "Заполнен элемент № " + i.ToString() + " из " + n.ToString();
			}
			else {
				MessageBox::Show("Массив размерности " + n + " заполнен или не создан.");
			}
		}
		catch (System::FormatException^ e) {
			MessageBox::Show(e->Message);
		}
		catch (System::Exception^ e) {
			MessageBox::Show(e->Message);
		}
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox2->ReadOnly = true;
		this->textBox2->Clear();
		this->textBox1->Clear();

		if (m == nullptr || i == 0) {
			MessageBox::Show("Массив пуст или не создан.");
			return;
		}


		int letters = 0;
		int digits = 0;

		for (int j = 0; j < i && j < n; j++) {
			this->textBox2->Text += m[j].ToString() + " ";

			if (Char::IsLetter(m[j])) {
				letters++;
			}
			else if (Char::IsDigit(m[j])) {
				digits++;
			}
		}


		if (letters > digits) {
			label2->Text = "Больше букв: " + letters.ToString();
		}
		else if (digits > letters) {
			label2->Text = "Больше цифр: " + digits.ToString();
		}
		else {
			label2->Text = "Букв и цифр поровну.";
		}
	}

	private: System::Void создатьМассивToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		EventArgs^ er = gcnew EventArgs;
		button2_Click(sender, er);
	}

	private: System::Void отобразитьФИОToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Text = "Толстик Дмитрий Павлович Т-491";
	}
};
}
