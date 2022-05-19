#pragma once

namespace CalculationFraction {

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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;

	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ DisplayText;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::TextBox^ DisplayIntegerPart;

	private: System::Windows::Forms::TextBox^ DisplayDenominator;

	private: System::Windows::Forms::TextBox^ DisplayNumerator;

	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button37;

	protected:

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->DisplayText = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->DisplayIntegerPart = (gcnew System::Windows::Forms::TextBox());
			this->DisplayDenominator = (gcnew System::Windows::Forms::TextBox());
			this->DisplayNumerator = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(1, -1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(374, 511);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::LightGray;
			this->tabPage1->Controls->Add(this->button19);
			this->tabPage1->Controls->Add(this->button18);
			this->tabPage1->Controls->Add(this->button16);
			this->tabPage1->Controls->Add(this->button13);
			this->tabPage1->Controls->Add(this->button12);
			this->tabPage1->Controls->Add(this->button11);
			this->tabPage1->Controls->Add(this->button17);
			this->tabPage1->Controls->Add(this->button15);
			this->tabPage1->Controls->Add(this->button14);
			this->tabPage1->Controls->Add(this->button10);
			this->tabPage1->Controls->Add(this->button9);
			this->tabPage1->Controls->Add(this->button8);
			this->tabPage1->Controls->Add(this->button7);
			this->tabPage1->Controls->Add(this->button6);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->DisplayText);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(366, 485);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Десятичные дроби";
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->Location = System::Drawing::Point(172, 88);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(73, 75);
			this->button19->TabIndex = 43;
			this->button19->Text = L"С";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->Location = System::Drawing::Point(9, 88);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 75);
			this->button18->TabIndex = 42;
			this->button18->Text = L"←";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(249, 88);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(108, 75);
			this->button16->TabIndex = 41;
			this->button16->Text = L"/";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::Action);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(251, 169);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(108, 75);
			this->button13->TabIndex = 40;
			this->button13->Text = L"X";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::Action);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(251, 250);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(108, 75);
			this->button12->TabIndex = 39;
			this->button12->Text = L"-";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::Action);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(251, 331);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(108, 75);
			this->button11->TabIndex = 38;
			this->button11->Text = L"+";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::Action);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::LightGreen;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(251, 412);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(108, 75);
			this->button17->TabIndex = 37;
			this->button17->Text = L"=";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(170, 412);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 75);
			this->button15->TabIndex = 36;
			this->button15->Text = L",";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(9, 412);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 75);
			this->button14->TabIndex = 35;
			this->button14->Text = L"±";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(89, 412);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 75);
			this->button10->TabIndex = 33;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::NumberButton);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(170, 331);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 75);
			this->button9->TabIndex = 32;
			this->button9->Text = L"3";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::NumberButton);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(89, 331);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 75);
			this->button8->TabIndex = 31;
			this->button8->Text = L"2";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::NumberButton);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(8, 331);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 75);
			this->button7->TabIndex = 30;
			this->button7->Text = L"1";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::NumberButton);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(170, 250);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 75);
			this->button6->TabIndex = 29;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::NumberButton);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(89, 250);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 75);
			this->button5->TabIndex = 28;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::NumberButton);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(8, 250);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 75);
			this->button4->TabIndex = 27;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::NumberButton);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(170, 169);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 75);
			this->button3->TabIndex = 26;
			this->button3->Text = L"9";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::NumberButton);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(89, 169);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 75);
			this->button2->TabIndex = 25;
			this->button2->Text = L"8";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::NumberButton);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(8, 169);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 75);
			this->button1->TabIndex = 24;
			this->button1->Text = L"7";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::NumberButton);
			// 
			// DisplayText
			// 
			this->DisplayText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DisplayText->Location = System::Drawing::Point(9, 6);
			this->DisplayText->Name = L"DisplayText";
			this->DisplayText->Size = System::Drawing::Size(351, 62);
			this->DisplayText->TabIndex = 23;
			this->DisplayText->Text = L"0";
			this->DisplayText->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->DisplayText->TextChanged += gcnew System::EventHandler(this, &MyForm::DisplayText_TextChanged);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::LightGray;
			this->tabPage2->Controls->Add(this->button37);
			this->tabPage2->Controls->Add(this->button35);
			this->tabPage2->Controls->Add(this->button36);
			this->tabPage2->Controls->Add(this->button32);
			this->tabPage2->Controls->Add(this->button33);
			this->tabPage2->Controls->Add(this->button34);
			this->tabPage2->Controls->Add(this->button29);
			this->tabPage2->Controls->Add(this->button30);
			this->tabPage2->Controls->Add(this->button31);
			this->tabPage2->Controls->Add(this->button28);
			this->tabPage2->Controls->Add(this->button27);
			this->tabPage2->Controls->Add(this->button26);
			this->tabPage2->Controls->Add(this->button25);
			this->tabPage2->Controls->Add(this->button24);
			this->tabPage2->Controls->Add(this->button23);
			this->tabPage2->Controls->Add(this->button22);
			this->tabPage2->Controls->Add(this->button21);
			this->tabPage2->Controls->Add(this->button20);
			this->tabPage2->Controls->Add(this->DisplayIntegerPart);
			this->tabPage2->Controls->Add(this->DisplayDenominator);
			this->tabPage2->Controls->Add(this->DisplayNumerator);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(366, 485);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Обыкновенные дроби";
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::Color::LightGreen;
			this->button37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button37->Location = System::Drawing::Point(259, 410);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(98, 67);
			this->button37->TabIndex = 22;
			this->button37->Text = L"=";
			this->button37->UseVisualStyleBackColor = false;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::button37_Click);
			// 
			// button35
			// 
			this->button35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button35->Location = System::Drawing::Point(16, 412);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(74, 67);
			this->button35->TabIndex = 21;
			this->button35->Text = L"±";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// button36
			// 
			this->button36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button36->Location = System::Drawing::Point(96, 412);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(74, 67);
			this->button36->TabIndex = 20;
			this->button36->Text = L"0";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::NumberFraction);
			// 
			// button32
			// 
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button32->Location = System::Drawing::Point(15, 337);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(74, 67);
			this->button32->TabIndex = 18;
			this->button32->Text = L"1";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::NumberFraction);
			// 
			// button33
			// 
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button33->Location = System::Drawing::Point(95, 337);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(74, 67);
			this->button33->TabIndex = 17;
			this->button33->Text = L"2";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::NumberFraction);
			// 
			// button34
			// 
			this->button34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button34->Location = System::Drawing::Point(175, 337);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(74, 67);
			this->button34->TabIndex = 16;
			this->button34->Text = L"3";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::NumberFraction);
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button29->Location = System::Drawing::Point(16, 264);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(74, 67);
			this->button29->TabIndex = 15;
			this->button29->Text = L"4";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::NumberFraction);
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button30->Location = System::Drawing::Point(96, 264);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(74, 67);
			this->button30->TabIndex = 14;
			this->button30->Text = L"5";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::NumberFraction);
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button31->Location = System::Drawing::Point(176, 264);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(74, 67);
			this->button31->TabIndex = 13;
			this->button31->Text = L"6";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::NumberFraction);
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button28->Location = System::Drawing::Point(16, 191);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(74, 67);
			this->button28->TabIndex = 12;
			this->button28->Text = L"7";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::NumberFraction);
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button27->Location = System::Drawing::Point(96, 191);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(74, 67);
			this->button27->TabIndex = 11;
			this->button27->Text = L"8";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::NumberFraction);
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button26->Location = System::Drawing::Point(176, 191);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(74, 67);
			this->button26->TabIndex = 10;
			this->button26->Text = L"9";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::NumberFraction);
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button25->Location = System::Drawing::Point(25, 138);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(55, 47);
			this->button25->TabIndex = 9;
			this->button25->Text = L"C";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button24->Location = System::Drawing::Point(176, 412);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(74, 67);
			this->button24->TabIndex = 8;
			this->button24->Text = L"←";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button23->Location = System::Drawing::Point(259, 337);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(98, 67);
			this->button23->TabIndex = 7;
			this->button23->Text = L"+";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::ActionFraction);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button22->Location = System::Drawing::Point(259, 264);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(98, 67);
			this->button22->TabIndex = 6;
			this->button22->Text = L"-";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::ActionFraction);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button21->Location = System::Drawing::Point(260, 191);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(98, 67);
			this->button21->TabIndex = 5;
			this->button21->Text = L"X";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::ActionFraction);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->Location = System::Drawing::Point(259, 118);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(98, 67);
			this->button20->TabIndex = 4;
			this->button20->Text = L"/";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::ActionFraction);
			// 
			// DisplayIntegerPart
			// 
			this->DisplayIntegerPart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DisplayIntegerPart->Location = System::Drawing::Point(16, 55);
			this->DisplayIntegerPart->Multiline = true;
			this->DisplayIntegerPart->Name = L"DisplayIntegerPart";
			this->DisplayIntegerPart->Size = System::Drawing::Size(102, 60);
			this->DisplayIntegerPart->TabIndex = 2;
			this->DisplayIntegerPart->TabStop = false;
			this->DisplayIntegerPart->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->DisplayIntegerPart->Enter += gcnew System::EventHandler(this, &MyForm::FocusInt);
			// 
			// DisplayDenominator
			// 
			this->DisplayDenominator->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DisplayDenominator->Location = System::Drawing::Point(123, 97);
			this->DisplayDenominator->Multiline = true;
			this->DisplayDenominator->Name = L"DisplayDenominator";
			this->DisplayDenominator->Size = System::Drawing::Size(102, 60);
			this->DisplayDenominator->TabIndex = 1;
			this->DisplayDenominator->TabStop = false;
			this->DisplayDenominator->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->DisplayDenominator->Enter += gcnew System::EventHandler(this, &MyForm::FocusDen);
			// 
			// DisplayNumerator
			// 
			this->DisplayNumerator->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DisplayNumerator->Location = System::Drawing::Point(123, 15);
			this->DisplayNumerator->Multiline = true;
			this->DisplayNumerator->Name = L"DisplayNumerator";
			this->DisplayNumerator->Size = System::Drawing::Size(102, 60);
			this->DisplayNumerator->TabIndex = 0;
			this->DisplayNumerator->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->DisplayNumerator->Enter += gcnew System::EventHandler(this, &MyForm::FocusNum);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(127, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 108);
			this->label1->TabIndex = 3;
			this->label1->Text = L"—";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(374, 517);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"Калькулятор";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
		double FirstNumber10, SecondNumber10, Answer;
		int FirstNumenator, SecondNumenator, FirstDenominator, SecondDemoninator, FirstIntegerPart = 0, SecondIntegerPart = 0;
		int AnswerNumenator, AnswerDenominator, AnswerIntegerPart;
		int DisplayCheckFractrion;
		String^ TipeAction;
		String^ TipeActionFraction;
#pragma endregion
		// Код для десятичных дробей
	private: System::Void NumberButton(System::Object^ sender, System::EventArgs^ e) { // Запись чисел с кнопок в дисплей на калькулятор
		Button^ number = safe_cast<Button^>(sender);
		if (DisplayText->Text == "0")
		{
			DisplayText->Text = number->Text;
		}
		else
		{
				DisplayText->Text = DisplayText->Text + number->Text;
		}
	}
	bool checkInputDisplayText() // Проверка на коррекность введенных данных для десятичных дробей
	{
		for (int i = 0; i < DisplayText->Text->Length; i++)
		{
			if (DisplayText->Text[i] >= '0' && DisplayText->Text[i] <= '9' || DisplayText->Text[i] == ',' || DisplayText->Text[0] == '-') {}
			else return false;
			return true;
		}
	}
	bool checkDisplayFraction() // Проверка на коррекность введенных данных для обыкновенных дробей
	{
		for (int i = 0; i < DisplayNumerator->Text->Length; i++)
		{
			if ((DisplayNumerator->Text[i] >= '0' && DisplayNumerator->Text[i] <= '9') || DisplayNumerator->Text[0] == '-') {}
			else return false;
		}
		for (int i = 0; i < DisplayDenominator->Text->Length; i++)
		{
			if ((DisplayDenominator->Text[i] >= '0' && DisplayDenominator->Text[i] <= '9') && DisplayDenominator->Text[0] != '0') {}
			else return false;
		}
		for (int i = 0; i < DisplayIntegerPart->Text->Length; i++)
		{
			if ((DisplayIntegerPart->Text[i] >= '0' && DisplayIntegerPart->Text[i] <= '9') || DisplayIntegerPart->Text->Length == 0 || DisplayIntegerPart->Text[0] == '-') {}
			else return false;
		}
		return true;
	}
private: System::Void Action(System::Object^ sender, System::EventArgs^ e) {  // Запоминания введенного числа и того действия, которое было нажато
	if (!checkInputDisplayText())
	{
		MessageBox::Show("Данные некорректные");
		return;
	}
	if (DisplayText->Text == "")
	{
		return;
	}
	Button^ Act = safe_cast<Button^>(sender);
	FirstNumber10 = Double::Parse(DisplayText->Text);
	DisplayText->Text = "";
	TipeAction = Act->Text;
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) { // Кнопка Стирать полностью
	DisplayText->Text = "0";
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) { // Кнопка запятой
	if (!DisplayText->Text->Contains(","))
	{
		DisplayText->Text = DisplayText->Text + ",";
	}
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) { // Кнопка Стирать
	if (DisplayText->Text->Length > 0)
	{
		DisplayText->Text = DisplayText->Text->Remove(DisplayText->Text->Length - 1, 1);
	}
}
private: System::Void DisplayText_TextChanged(System::Object^ sender, System::EventArgs^ e) { // На дисплее всегда был 0
	if (!DisplayText->Text->Contains(""))
	{
		DisplayText->Text = "0";
	}
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) { // Кнопка +-
	if (DisplayText->Text->Contains("-"))
	{
		DisplayText->Text = DisplayText->Text->Remove(0, 1);
	}
	else
	{
		if (DisplayText->Text->Contains("0") && DisplayText->Text->Length <= 1) // Избавляемся от 0
		{
			DisplayText->Text = DisplayText->Text->Remove(0, 1);
		}
		DisplayText->Text = "-" + DisplayText->Text;
	}
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) { // Кнопка =
	if (!checkInputDisplayText())
	{
		MessageBox::Show("Данные некорректные");
		return;
	}
	SecondNumber10 = Double::Parse(DisplayText->Text);
	if (TipeAction == "+") // Сумма чисел
	{
		Answer = FirstNumber10 + SecondNumber10;
		DisplayText->Text = Convert::ToString(Answer);
	}
	else if (TipeAction == "-") // Разность чисел
	{
		Answer = FirstNumber10 - SecondNumber10;
		DisplayText->Text = Convert::ToString(Answer);
	}
	else if (TipeAction == "X") // Перемножение чисел
	{
		Answer = FirstNumber10 * SecondNumber10;
		DisplayText->Text = Convert::ToString(Answer);
	}
	else if (TipeAction == "/") // Деление чисел
	{
		Answer = FirstNumber10 / SecondNumber10;
		DisplayText->Text = Convert::ToString(Answer);
	}
}
	   // Код для обыкновенных дробей
// Запоминание того дисплея, в котором в последний раз был пользователь
private: System::Void FocusNum(System::Object^ sender, System::EventArgs^ e) { // Дисплей числителя
	DisplayCheckFractrion = 1;
}
private: System::Void FocusDen(System::Object^ sender, System::EventArgs^ e) { // Дисплей знаменателя
	DisplayCheckFractrion = 2;
}
private: System::Void FocusInt(System::Object^ sender, System::EventArgs^ e) { // Дисплей целой части
	DisplayCheckFractrion = 3;
}
private: System::Void NumberFraction(System::Object^ sender, System::EventArgs^ e) { // Запись чисел с кнопок в соответствующий дисплей на калькуляторе
	Button^ numberFraction = safe_cast<Button^>(sender);
	if (DisplayNumerator->Text == "0" && DisplayCheckFractrion == 1)
	{
		DisplayNumerator->Text = numberFraction->Text;
	}
	else if (DisplayCheckFractrion == 1)
	{
		DisplayNumerator->Text = DisplayNumerator->Text + numberFraction->Text;
	}
	if (DisplayDenominator->Text == "0" && DisplayCheckFractrion == 2)
	{
		DisplayDenominator->Text = numberFraction->Text;
	}
	else if (DisplayCheckFractrion == 2)
	{
		DisplayDenominator->Text = DisplayDenominator->Text + numberFraction->Text;
	}
	if (DisplayIntegerPart->Text == "0" && DisplayCheckFractrion == 3)
	{
		DisplayIntegerPart->Text = numberFraction->Text;
	}
	else if (DisplayCheckFractrion == 3)
	{
		DisplayIntegerPart->Text = DisplayIntegerPart->Text + numberFraction->Text;
	}
}

private: System::Void ActionFraction(System::Object^ sender, System::EventArgs^ e) {  // Запоминания введенной дроби и того действия, которое было нажато
	if (!checkDisplayFraction())
	{
		MessageBox::Show("Данные некорректные");
		return;
	}
	if (DisplayText->Text == "")
	{
		return;
	}
	Button^ ActFract = safe_cast<Button^>(sender);
	FirstNumenator = Double::Parse(DisplayNumerator->Text);
	FirstDenominator = Double::Parse(DisplayDenominator->Text);
	if (DisplayIntegerPart->Text->Length != 0) // Работа с отрицательными дробями
	{
		if (DisplayIntegerPart->Text == "-") 
		{
			FirstNumenator *= -1; // Делаем отрицательный числитель
		}
		else if (DisplayIntegerPart->Text[0] == '-' && DisplayIntegerPart->Text->Length >= 1) // Если целая часть имеет какое-либо значение
		{
			FirstNumenator *= -1;
			FirstNumenator += Double::Parse(DisplayIntegerPart->Text) * FirstDenominator;
		}
		else
		FirstIntegerPart = Double::Parse(DisplayIntegerPart->Text);
	}
	DisplayNumerator->Text = "";
	DisplayDenominator->Text = "";
	DisplayIntegerPart->Text = "";
	TipeActionFraction = ActFract->Text;
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) { // Кнопка стирать полность для обыкновенных дробей
	DisplayNumerator->Text = "";
	DisplayDenominator->Text = "";
	DisplayIntegerPart->Text = "";
}

private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) { // Кнопка стирать для обыкновенных дробей
	switch (DisplayCheckFractrion) // Проверка, из какого дисплея надо удалять цифру
	{
	case 1:
		if (DisplayNumerator->Text->Length > 0)
		{
			DisplayNumerator->Text = DisplayNumerator->Text->Remove(DisplayNumerator->Text->Length - 1, 1);
		}
		break;
	case 2:
		if (DisplayDenominator->Text->Length > 0)
		{
			DisplayDenominator->Text = DisplayDenominator->Text->Remove(DisplayDenominator->Text->Length - 1, 1);
		}
		break;
	case 3:
		if (DisplayIntegerPart->Text->Length > 0)
		{
			DisplayIntegerPart->Text = DisplayIntegerPart->Text->Remove(DisplayIntegerPart->Text->Length - 1, 1);
		}
		break;
	default:
		break;
	}
}
private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) { // Кнопка +- обыкновенная дробь
	if (DisplayIntegerPart->Text->Contains("-"))
	{
		DisplayIntegerPart->Text = DisplayIntegerPart->Text->Remove(0, 1);
	}
	else
	{
		if (DisplayIntegerPart->Text->Contains("0") && DisplayIntegerPart->Text->Length <= 1) // Избавляемся от 0
		{
			DisplayIntegerPart->Text = DisplayIntegerPart->Text->Remove(0, 1);
		}
		DisplayIntegerPart->Text = "-" + DisplayIntegerPart->Text;
	}
}
	   int NOD(int a, int b) // Наибольший общий делитель
	   {
		   if (a % b == 0)
			   return b;
		   if (b % a == 0)
			   return a;
		   if (a > b)
			   return NOD(a % b, b);
		   return NOD(a, b % a);
	   }
	   int NOK(int a, int b) // Наименьшее общее кратное
	   {
		   return  (a * b) / NOD(a, b);
	   }
private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) { // Кнопка = обыкновенная дробь
	if (!checkDisplayFraction())
	{
		MessageBox::Show("Данные некорректные");
		return;
	}
	if (DisplayNumerator->Text->Length == 0) // Если вторая дробь не имеет числитель, то думаем, что там 1
	{
		SecondNumenator = 1;
	}
	else
	{
		SecondNumenator = Double::Parse(DisplayNumerator->Text);
	}
	SecondDemoninator = Double::Parse(DisplayDenominator->Text);
	if (DisplayIntegerPart->Text->Length != 0) // Работа с отрицательными дробями
	{

		if (DisplayIntegerPart->Text == "-" && DisplayIntegerPart->Text->Length == 1)
		{
			SecondNumenator *= -1;
		}
		else if (DisplayIntegerPart->Text[0] == '-' && DisplayIntegerPart->Text->Length >= 1)
		{
			SecondNumenator *= -1;
			SecondNumenator += Double::Parse(DisplayIntegerPart->Text) * SecondDemoninator;
		}
		else
			SecondIntegerPart = Double::Parse(DisplayIntegerPart->Text);
	}
	if (TipeActionFraction == "+") // Сумма дробей
	{
		FirstNumenator = FirstNumenator + FirstIntegerPart * FirstDenominator;
		SecondNumenator = SecondNumenator + SecondIntegerPart * SecondDemoninator;
		
		if (FirstDenominator != SecondDemoninator) // Если знаменатели не одинаковы, то ищем Наименьшее общее кратное
		{
			AnswerDenominator = NOK(FirstDenominator, SecondDemoninator);
			AnswerNumenator = (FirstNumenator * (AnswerDenominator / FirstDenominator)) + (SecondNumenator * (AnswerDenominator / SecondDemoninator));
		}
		else
		{
			AnswerDenominator = FirstDenominator;
			AnswerNumenator = FirstNumenator + SecondNumenator;
		}
		AnswerIntegerPart = AnswerNumenator / AnswerDenominator;
		if (AnswerNumenator % AnswerDenominator != 0)
		{
			AnswerNumenator = AnswerNumenator % AnswerDenominator;
		}
		else
		{
			AnswerNumenator = 0;
			AnswerDenominator = 0;
		}
		if (AnswerIntegerPart < 0 && AnswerNumenator < 0)
		{
			AnswerNumenator *= -1;
		}
		DisplayNumerator->Text = Convert::ToString(AnswerNumenator);
		DisplayDenominator->Text = Convert::ToString(AnswerDenominator);
		DisplayIntegerPart->Text = Convert::ToString(AnswerIntegerPart);
	}
	else if (TipeActionFraction == "-") // Разность дробей
	{
		FirstNumenator = FirstNumenator + FirstIntegerPart * FirstDenominator;
		SecondNumenator = SecondNumenator + SecondIntegerPart * SecondDemoninator;
		if (FirstDenominator != SecondDemoninator) // Если знаменатели не одинаковы
		{
			AnswerDenominator = NOK(FirstDenominator, SecondDemoninator);
			AnswerNumenator = (FirstNumenator * (AnswerDenominator / FirstDenominator)) - (SecondNumenator * (AnswerDenominator / SecondDemoninator));
		}
		else
		{
			AnswerDenominator = FirstDenominator;
			AnswerNumenator = FirstNumenator - SecondNumenator;
		}
		AnswerIntegerPart = AnswerNumenator / AnswerDenominator;
		if (AnswerNumenator % AnswerDenominator != 0)
		{
			AnswerNumenator = AnswerNumenator % AnswerDenominator;
		}
		else
		{
			AnswerNumenator = 0;
			AnswerDenominator = 0;
		}
		if (AnswerIntegerPart < 0 && AnswerNumenator < 0)
		{
			AnswerNumenator *= -1;
		}
		DisplayNumerator->Text = Convert::ToString(AnswerNumenator);
		DisplayDenominator->Text = Convert::ToString(AnswerDenominator);
		DisplayIntegerPart->Text = Convert::ToString(AnswerIntegerPart);
	}
	else if (TipeActionFraction == "X") // Произведение дробей
	{
		FirstNumenator = FirstNumenator + FirstIntegerPart * FirstDenominator;
		SecondNumenator = SecondNumenator + SecondIntegerPart * SecondDemoninator;
		AnswerNumenator = FirstNumenator * SecondNumenator;
		AnswerDenominator = FirstDenominator * SecondDemoninator;
		AnswerIntegerPart = AnswerNumenator / AnswerDenominator;
		if (AnswerNumenator % AnswerDenominator != 0)
		{
			AnswerNumenator = AnswerNumenator % AnswerDenominator;
		}
		else
		{
			AnswerNumenator = 0;
			AnswerDenominator = 0;
		}
		if (AnswerIntegerPart < 0 && AnswerNumenator < 0)
		{
			AnswerNumenator *= -1;
		}
		DisplayNumerator->Text = Convert::ToString(AnswerNumenator);
		DisplayDenominator->Text = Convert::ToString(AnswerDenominator);
		DisplayIntegerPart->Text = Convert::ToString(AnswerIntegerPart);
	}
	else if (TipeActionFraction == "/") // Деленеие дробей
	{
		FirstNumenator = FirstNumenator + FirstIntegerPart * FirstDenominator;
		SecondNumenator = SecondNumenator + SecondIntegerPart * SecondDemoninator;
		AnswerNumenator = FirstNumenator * SecondDemoninator;
		AnswerDenominator = FirstDenominator * SecondNumenator;
		AnswerIntegerPart = AnswerNumenator / AnswerDenominator;
		if (AnswerNumenator % AnswerDenominator != 0)
		{
			AnswerNumenator = AnswerNumenator % AnswerDenominator;
		}
		else
		{
			AnswerNumenator = 0;
			AnswerDenominator = 0;
		}
		if (AnswerIntegerPart < 0 && AnswerNumenator < 0)
		{
			AnswerNumenator *= -1;
		}
		DisplayNumerator->Text = Convert::ToString(AnswerNumenator);
		DisplayDenominator->Text = Convert::ToString(AnswerDenominator);
		DisplayIntegerPart->Text = Convert::ToString(AnswerIntegerPart);
	}
}
};
}
