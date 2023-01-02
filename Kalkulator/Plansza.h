#include "Pomoc.h"

#pragma once

namespace Kalkulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Plansza
	/// </summary>
	public ref class Plansza : public System::Windows::Forms::Form
	{
	public:
		Plansza(void)
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
		~Plansza()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ przypnijToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ okienkoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zamknijToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ widokToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ standardowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ finansowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ graToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pomocToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ txtOkno;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Plansza::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->przypnijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->okienkoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zamknijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->widokToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->standardowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->finansowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->graToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pomocToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->txtOkno = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->plikToolStripMenuItem,
					this->widokToolStripMenuItem, this->pomocToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(434, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->przypnijToolStripMenuItem,
					this->okienkoToolStripMenuItem, this->zamknijToolStripMenuItem
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->plikToolStripMenuItem->Text = L"Plik";
			// 
			// przypnijToolStripMenuItem
			// 
			this->przypnijToolStripMenuItem->Name = L"przypnijToolStripMenuItem";
			this->przypnijToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->przypnijToolStripMenuItem->Text = L"Przypnij";
			this->przypnijToolStripMenuItem->Click += gcnew System::EventHandler(this, &Plansza::przypnijToolStripMenuItem_Click);
			// 
			// okienkoToolStripMenuItem
			// 
			this->okienkoToolStripMenuItem->Name = L"okienkoToolStripMenuItem";
			this->okienkoToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->okienkoToolStripMenuItem->Text = L"Okienko";
			this->okienkoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Plansza::okienkoToolStripMenuItem_Click);
			// 
			// zamknijToolStripMenuItem
			// 
			this->zamknijToolStripMenuItem->Name = L"zamknijToolStripMenuItem";
			this->zamknijToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->zamknijToolStripMenuItem->Text = L"Zamknij";
			this->zamknijToolStripMenuItem->Click += gcnew System::EventHandler(this, &Plansza::zamknijToolStripMenuItem_Click);
			// 
			// widokToolStripMenuItem
			// 
			this->widokToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->standardowyToolStripMenuItem,
					this->finansowyToolStripMenuItem, this->graToolStripMenuItem
			});
			this->widokToolStripMenuItem->Name = L"widokToolStripMenuItem";
			this->widokToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->widokToolStripMenuItem->Text = L"Widok";
			// 
			// standardowyToolStripMenuItem
			// 
			this->standardowyToolStripMenuItem->Name = L"standardowyToolStripMenuItem";
			this->standardowyToolStripMenuItem->Size = System::Drawing::Size(130, 22);
			this->standardowyToolStripMenuItem->Text = L"Standard";
			this->standardowyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Plansza::standardowyToolStripMenuItem_Click);
			// 
			// finansowyToolStripMenuItem
			// 
			this->finansowyToolStripMenuItem->Name = L"finansowyToolStripMenuItem";
			this->finansowyToolStripMenuItem->Size = System::Drawing::Size(130, 22);
			this->finansowyToolStripMenuItem->Text = L"Finansowy";
			this->finansowyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Plansza::finansowyToolStripMenuItem_Click);
			// 
			// graToolStripMenuItem
			// 
			this->graToolStripMenuItem->Name = L"graToolStripMenuItem";
			this->graToolStripMenuItem->Size = System::Drawing::Size(130, 22);
			this->graToolStripMenuItem->Text = L"Gra";
			this->graToolStripMenuItem->Click += gcnew System::EventHandler(this, &Plansza::graToolStripMenuItem_Click);
			// 
			// pomocToolStripMenuItem
			// 
			this->pomocToolStripMenuItem->Name = L"pomocToolStripMenuItem";
			this->pomocToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->pomocToolStripMenuItem->Text = L"Pomoc";
			this->pomocToolStripMenuItem->Click += gcnew System::EventHandler(this, &Plansza::pomocToolStripMenuItem_Click);
			// 
			// txtOkno
			// 
			this->txtOkno->BackColor = System::Drawing::Color::Gray;
			this->txtOkno->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtOkno->Font = (gcnew System::Drawing::Font(L"Calibri Light", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtOkno->ForeColor = System::Drawing::SystemColors::Window;
			this->txtOkno->Location = System::Drawing::Point(14, 38);
			this->txtOkno->Name = L"txtOkno";
			this->txtOkno->Size = System::Drawing::Size(270, 59);
			this->txtOkno->TabIndex = 1;
			this->txtOkno->Text = L"0";
			this->txtOkno->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(10, 164);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(55, 55);
			this->button1->TabIndex = 2;
			this->button1->Text = L"7";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Plansza::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(64, 164);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(55, 55);
			this->button2->TabIndex = 3;
			this->button2->Text = L"8";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Plansza::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Calibri Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button3->Location = System::Drawing::Point(118, 164);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(55, 55);
			this->button3->TabIndex = 4;
			this->button3->Text = L"9";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Plansza::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Calibri Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button4->Location = System::Drawing::Point(118, 218);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(55, 55);
			this->button4->TabIndex = 7;
			this->button4->Text = L"6";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Plansza::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Calibri Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button5->Location = System::Drawing::Point(64, 218);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(55, 55);
			this->button5->TabIndex = 6;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Plansza::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Calibri Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button6->Location = System::Drawing::Point(10, 218);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(55, 55);
			this->button6->TabIndex = 5;
			this->button6->Text = L"4";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Plansza::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Calibri Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button7->Location = System::Drawing::Point(118, 272);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(55, 55);
			this->button7->TabIndex = 10;
			this->button7->Text = L"3";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Plansza::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Calibri Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button8->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button8->Location = System::Drawing::Point(64, 272);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(55, 55);
			this->button8->TabIndex = 9;
			this->button8->Text = L"2";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Plansza::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Calibri Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button9->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button9->Location = System::Drawing::Point(10, 272);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(55, 55);
			this->button9->TabIndex = 8;
			this->button9->Text = L"1";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Plansza::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Calibri Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button10->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button10->Location = System::Drawing::Point(10, 326);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(109, 55);
			this->button10->TabIndex = 11;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Plansza::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Calibri Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button11->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button11->Location = System::Drawing::Point(118, 326);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(55, 55);
			this->button11->TabIndex = 12;
			this->button11->Text = L",";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Plansza::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Calibri Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button12->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button12->Location = System::Drawing::Point(172, 272);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(55, 109);
			this->button12->TabIndex = 13;
			this->button12->Text = L"+";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Plansza::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Calibri Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button13->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button13->Location = System::Drawing::Point(172, 218);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(55, 55);
			this->button13->TabIndex = 15;
			this->button13->Text = L"X";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Plansza::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Calibri Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button14->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button14->Location = System::Drawing::Point(172, 164);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(55, 55);
			this->button14->TabIndex = 14;
			this->button14->Text = L"-";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Plansza::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Calibri Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button15->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button15->Location = System::Drawing::Point(118, 110);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(55, 55);
			this->button15->TabIndex = 17;
			this->button15->Text = L"CE";
			this->button15->UseVisualStyleBackColor = false;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Calibri Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button16->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button16->Location = System::Drawing::Point(10, 110);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(109, 55);
			this->button16->TabIndex = 16;
			this->button16->Text = L"C";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &Plansza::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Calibri Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button17->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button17->Location = System::Drawing::Point(172, 110);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(55, 55);
			this->button17->TabIndex = 18;
			this->button17->Text = L"/";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &Plansza::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Orange;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Calibri Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button18->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button18->Location = System::Drawing::Point(226, 110);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(55, 55);
			this->button18->TabIndex = 22;
			this->button18->Text = L"√";
			this->button18->UseVisualStyleBackColor = false;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::Orange;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Calibri Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button19->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button19->Location = System::Drawing::Point(226, 218);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(55, 55);
			this->button19->TabIndex = 21;
			this->button19->Text = L"%";
			this->button19->UseVisualStyleBackColor = false;
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::Orange;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Calibri Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button20->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button20->Location = System::Drawing::Point(226, 164);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(55, 55);
			this->button20->TabIndex = 20;
			this->button20->Text = L"a²";
			this->button20->UseVisualStyleBackColor = false;
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::Orange;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Calibri Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button21->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button21->Location = System::Drawing::Point(226, 272);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(55, 109);
			this->button21->TabIndex = 19;
			this->button21->Text = L"=";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &Plansza::button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Calibri Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button22->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button22->Location = System::Drawing::Point(302, 326);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(120, 55);
			this->button22->TabIndex = 23;
			this->button22->Text = L"Narzut";
			this->button22->UseVisualStyleBackColor = false;
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Font = (gcnew System::Drawing::Font(L"Calibri Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button23->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button23->Location = System::Drawing::Point(302, 272);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(120, 55);
			this->button23->TabIndex = 24;
			this->button23->Text = L"Marża";
			this->button23->UseVisualStyleBackColor = false;
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Font = (gcnew System::Drawing::Font(L"Calibri Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button24->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button24->Location = System::Drawing::Point(302, 218);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(120, 55);
			this->button24->TabIndex = 25;
			this->button24->Text = L"Brutto←Netto";
			this->button24->UseVisualStyleBackColor = false;
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Font = (gcnew System::Drawing::Font(L"Calibri Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button25->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button25->Location = System::Drawing::Point(302, 164);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(120, 55);
			this->button25->TabIndex = 26;
			this->button25->Text = L"Netto→Brutto";
			this->button25->UseVisualStyleBackColor = false;
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::Orange;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Font = (gcnew System::Drawing::Font(L"Calibri Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button26->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button26->Location = System::Drawing::Point(161, 433);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(120, 55);
			this->button26->TabIndex = 29;
			this->button26->Text = L"Dodawanie";
			this->button26->UseVisualStyleBackColor = false;
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::Orange;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Font = (gcnew System::Drawing::Font(L"Calibri Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button27->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button27->Location = System::Drawing::Point(161, 487);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(120, 55);
			this->button27->TabIndex = 28;
			this->button27->Text = L"Odejmowanie";
			this->button27->UseVisualStyleBackColor = false;
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::Orange;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Font = (gcnew System::Drawing::Font(L"Calibri Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button28->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button28->Location = System::Drawing::Point(161, 541);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(120, 55);
			this->button28->TabIndex = 27;
			this->button28->Text = L"Mnożenie";
			this->button28->UseVisualStyleBackColor = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(10, 433);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(130, 130);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 30;
			this->pictureBox1->TabStop = false;
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"pytajnik.png");
			this->imageList1->Images->SetKeyName(1, L"zle.png");
			this->imageList1->Images->SetKeyName(2, L"dobrze.png");
			// 
			// Plansza
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(434, 611);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtOkno);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Plansza";
			this->Text = L" Kalkulator";
			this->Load += gcnew System::EventHandler(this, &Plansza::Plansza_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


		double pierwsza, druga, wynik;
		char operacja;
		bool status = false;

#pragma endregion
		private: Void Wypisz(String^ liczba) {
			if (txtOkno->Text == "0"|| status) {
				txtOkno->Text = liczba;
			}
			else {
				this->txtOkno->Text += liczba;
			}
			status = false;
		}
	private: System::Void Plansza_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pomocToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Pomoc^ Onas = gcnew Pomoc();
		Onas->Show();
	}
private: System::Void standardowyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Plansza::Width = 300;
	Plansza::Height = 425;

}
private: System::Void finansowyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Plansza::Width = 460;
	Plansza::Height = 425;

}
private: System::Void graToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Plansza::Width = 300;
	Plansza::Height = 650;
}
private: System::Void przypnijToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Plansza::FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	TopMost = true;
}
private: System::Void okienkoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Plansza::FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;

}
private: System::Void zamknijToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Czy wylaczyc kalkulator?", "Kalkulator", MessageBoxButtons::YesNo,MessageBoxIcon::Question)==System::Windows::Forms::DialogResult::Yes) {
	Application::Exit();

	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("1");
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("2");
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("3");

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("4");

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("5");

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("6");

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("7");

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("8");

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("9");

}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("0");

}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz(",");

}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(txtOkno->Text);
	operacja = '+';
	status = true;

}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(txtOkno->Text);
	operacja = '*';
	status = true;
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(txtOkno->Text);
	operacja = '-';
	status = true;
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(txtOkno->Text);
	operacja = '/';
	status = true;
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	druga = Convert::ToDouble(txtOkno->Text);



	switch (operacja) {
	case '+':
		wynik = pierwsza + druga;		///dodawanie
		break;
	case '-':
		wynik = pierwsza - druga;		///odejmowanie
			break;
	case '*':
		wynik = pierwsza * druga;		///mnozenie

		break;
	case '/':
		if (druga == 0) {
			MessageBox::Show("dzielenie przez 0!");
		}
		else {
			wynik = pierwsza / druga;	///dzielenie
		}
		break;
	default:
		break;
	}


	this->txtOkno->Text = Convert::ToString(wynik);
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	txtOkno->Text = "0";
	pierwsza = 0;
	druga = 0; 
	status = false;
}
};
}
