#pragma once

namespace lab26Media {

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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ открыть‘айлToolStripMenuItem;
	private: AxWMPLib::AxWindowsMediaPlayer^ axWindowsMediaPlayer1;
	private: Microsoft::VisualBasic::Compatibility::VB6::FileListBox^ fileListBox1;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открыть‘айлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileListBox1 = (gcnew Microsoft::VisualBasic::Compatibility::VB6::FileListBox());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->axWindowsMediaPlayer1 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->файлToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(855, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->открыть‘айлToolStripMenuItem });
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->файлToolStripMenuItem->Text = L"‘айл";
			// 
			// открыть‘айлToolStripMenuItem
			// 
			this->открыть‘айлToolStripMenuItem->Name = L"открыть‘айлToolStripMenuItem";
			this->открыть‘айлToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			this->открыть‘айлToolStripMenuItem->Text = L"ќткрыть файл";
			this->открыть‘айлToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::открыть‘айлToolStripMenuItem_Click);
			// 
			// fileListBox1
			// 
			this->fileListBox1->FormattingEnabled = true;
			this->fileListBox1->Location = System::Drawing::Point(623, 52);
			this->fileListBox1->Name = L"fileListBox1";
			this->fileListBox1->Pattern = L"*.*";
			this->fileListBox1->Size = System::Drawing::Size(207, 148);
			this->fileListBox1->TabIndex = 2;
			this->fileListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::fileListBox1_SelectedIndexChanged);
			// 
			// axWindowsMediaPlayer1
			// 
			this->axWindowsMediaPlayer1->Enabled = true;
			this->axWindowsMediaPlayer1->Location = System::Drawing::Point(13, 52);
			this->axWindowsMediaPlayer1->Name = L"axWindowsMediaPlayer1";
			this->axWindowsMediaPlayer1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer1.OcxState")));
			this->axWindowsMediaPlayer1->Size = System::Drawing::Size(421, 292);
			this->axWindowsMediaPlayer1->TabIndex = 1;
			this->axWindowsMediaPlayer1->StatusChange += gcnew System::EventHandler(this, &MyForm::axWindowsMediaPlayer1_StatusChange);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(855, 448);
			this->Controls->Add(this->fileListBox1);
			this->Controls->Add(this->axWindowsMediaPlayer1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void открыть‘айлToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		fileListBox1->Pattern = "*.mp3";
		folderBrowserDialog1->ShowDialog();
		fileListBox1->FileName = folderBrowserDialog1->SelectedPath;
	}

	private: System::Void fileListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		axWindowsMediaPlayer1->URL = folderBrowserDialog1->SelectedPath + "\\" + fileListBox1->SelectedItem->ToString();
	}

	private: System::Void axWindowsMediaPlayer1_StatusChange(System::Object^ sender, System::EventArgs^ e) {
		this->Text = "ѕроигрываетс€: " + axWindowsMediaPlayer1->status;
	}
};
}
