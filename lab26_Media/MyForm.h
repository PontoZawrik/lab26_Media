#pragma once
#include "SecondForm.h"

namespace lab26Media {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îòêğûòüÔàéëToolStripMenuItem;
	private: AxWMPLib::AxWindowsMediaPlayer^ axWindowsMediaPlayer1;
	private: Microsoft::VisualBasic::Compatibility::VB6::FileListBox^ fileListBox1;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ ñëåäóşùèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğîèãğûâàòüToolStripMenuItem;
	private: System::Windows::Forms::Button^ button1;
	protected:


	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îòêğûòüÔàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñëåäóşùèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğîèãğûâàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileListBox1 = (gcnew Microsoft::VisualBasic::Compatibility::VB6::FileListBox());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->axWindowsMediaPlayer1 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ôàéëToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(822, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->îòêğûòüÔàéëToolStripMenuItem,
					this->ñëåäóşùèéToolStripMenuItem, this->ïğîèãğûâàòüToolStripMenuItem
			});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// îòêğûòüÔàéëToolStripMenuItem
			// 
			this->îòêğûòüÔàéëToolStripMenuItem->Name = L"îòêğûòüÔàéëToolStripMenuItem";
			this->îòêğûòüÔàéëToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			this->îòêğûòüÔàéëToolStripMenuItem->Text = L"Îòêğûòü ôàéë";
			this->îòêğûòüÔàéëToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::îòêğûòüÔàéëToolStripMenuItem_Click);
			// 
			// ñëåäóşùèéToolStripMenuItem
			// 
			this->ñëåäóşùèéToolStripMenuItem->Name = L"ñëåäóşùèéToolStripMenuItem";
			this->ñëåäóşùèéToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			this->ñëåäóşùèéToolStripMenuItem->Text = L"Ñëåäóşùèé";
			this->ñëåäóşùèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñëåäóşùèéToolStripMenuItem_Click);
			// 
			// ïğîèãğûâàòüToolStripMenuItem
			// 
			this->ïğîèãğûâàòüToolStripMenuItem->Name = L"ïğîèãğûâàòüToolStripMenuItem";
			this->ïğîèãğûâàòüToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			this->ïğîèãğûâàòüToolStripMenuItem->Text = L"Ïğîèãğûâàòü";
			this->ïğîèãğûâàòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïğîèãğûâàòüToolStripMenuItem_Click);
			// 
			// fileListBox1
			// 
			this->fileListBox1->FormattingEnabled = true;
			this->fileListBox1->Location = System::Drawing::Point(593, 52);
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
			// button1
			// 
			this->button1->Location = System::Drawing::Point(593, 207);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(207, 28);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Çàäàíèå 4";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(822, 448);
			this->Controls->Add(this->button1);
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
	private: System::Void îòêğûòüÔàéëToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		fileListBox1->Pattern = "*.avi";
		folderBrowserDialog1->ShowDialog();
		fileListBox1->FileName = folderBrowserDialog1->SelectedPath;
	}

	private: System::Void fileListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		axWindowsMediaPlayer1->URL = folderBrowserDialog1->SelectedPath + "\\" + fileListBox1->SelectedItem->ToString();
	}

	private: System::Void axWindowsMediaPlayer1_StatusChange(System::Object^ sender, System::EventArgs^ e) {
		this->Text = "Ïğîèãğûâàåòñÿ: " + axWindowsMediaPlayer1->status;
	}

	private: System::Void ñëåäóşùèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			fileListBox1->SelectedIndex += 1;
		}
		catch (System::ArgumentOutOfRangeException^ e) {
			MessageBox::Show("Ñïèñîê çàêîí÷èëñÿ.");
		}
		catch (System::Exception^ e) {
			MessageBox::Show("Îøèáêà " + e->Message);
		}
	}

	private: System::Void ïğîèãğûâàòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			axWindowsMediaPlayer1->Ctlcontrols->play();
		}
		catch (System::Exception^ e) {
			MessageBox::Show("Îøèáêà " + e->Message);
		}
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		SecondForm^ f = gcnew SecondForm;
		f->Show();
	}
};
}
