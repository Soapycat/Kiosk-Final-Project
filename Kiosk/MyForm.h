#pragma once
#include "AirlneTicket.h"
#include "Database.h"
#include <string>


namespace Kiosk {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:

		MyForm(void)
		{
			db = gcnew Database();
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ComboBox^  departureCitybox;
	private: System::Windows::Forms::ComboBox^  destinationCitybox;
	private: System::Windows::Forms::ComboBox^  cabinGradebox;
	private: System::Windows::Forms::TextBox^  travelerText;
	private: System::Windows::Forms::TextBox^  bagsText;





	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  totalCost;
	private: System::Windows::Forms::TextBox^  TotalBox;


	private:
		Database^ db;
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->departureCitybox = (gcnew System::Windows::Forms::ComboBox());
			this->destinationCitybox = (gcnew System::Windows::Forms::ComboBox());
			this->cabinGradebox = (gcnew System::Windows::Forms::ComboBox());
			this->travelerText = (gcnew System::Windows::Forms::TextBox());
			this->bagsText = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->totalCost = (gcnew System::Windows::Forms::Label());
			this->TotalBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Departure City";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(175, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Destination City";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(314, 43);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Cabin Grade";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(78, 107);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Number of Travelers";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(199, 107);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(129, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Number of Checked Bags";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 252);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 32);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(321, 252);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(94, 32);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Total Cost";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// departureCitybox
			// 
			this->departureCitybox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->departureCitybox->FormattingEnabled = true;
			this->departureCitybox->Location = System::Drawing::Point(12, 59);
			this->departureCitybox->MaxDropDownItems = 16;
			this->departureCitybox->Name = L"departureCitybox";
			this->departureCitybox->Size = System::Drawing::Size(121, 21);
			this->departureCitybox->TabIndex = 7;
			// 
			// destinationCitybox
			// 
			this->destinationCitybox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->destinationCitybox->FormattingEnabled = true;
			this->destinationCitybox->Location = System::Drawing::Point(151, 59);
			this->destinationCitybox->MaxDropDownItems = 16;
			this->destinationCitybox->Name = L"destinationCitybox";
			this->destinationCitybox->Size = System::Drawing::Size(121, 21);
			this->destinationCitybox->TabIndex = 8;
			// 
			// cabinGradebox
			// 
			this->cabinGradebox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cabinGradebox->FormattingEnabled = true;
			this->cabinGradebox->Location = System::Drawing::Point(289, 59);
			this->cabinGradebox->Name = L"cabinGradebox";
			this->cabinGradebox->Size = System::Drawing::Size(121, 21);
			this->cabinGradebox->TabIndex = 9;
			// 
			// travelerText
			// 
			this->travelerText->Location = System::Drawing::Point(81, 123);
			this->travelerText->Name = L"travelerText";
			this->travelerText->Size = System::Drawing::Size(100, 20);
			this->travelerText->TabIndex = 10;
			// 
			// bagsText
			// 
			this->bagsText->Location = System::Drawing::Point(213, 123);
			this->bagsText->Name = L"bagsText";
			this->bagsText->Size = System::Drawing::Size(100, 20);
			this->bagsText->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(199, 173);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Total:";
			// 
			// totalCost
			// 
			this->totalCost->AutoSize = true;
			this->totalCost->Location = System::Drawing::Point(198, 186);
			this->totalCost->Name = L"totalCost";
			this->totalCost->Size = System::Drawing::Size(0, 13);
			this->totalCost->TabIndex = 13;
			// 
			// TotalBox
			// 
			this->TotalBox->Location = System::Drawing::Point(172, 202);
			this->TotalBox->Multiline = true;
			this->TotalBox->Name = L"TotalBox";
			this->TotalBox->ReadOnly = true;
			this->TotalBox->Size = System::Drawing::Size(100, 72);
			this->TotalBox->TabIndex = 14;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(427, 296);
			this->Controls->Add(this->TotalBox);
			this->Controls->Add(this->totalCost);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->bagsText);
			this->Controls->Add(this->travelerText);
			this->Controls->Add(this->cabinGradebox);
			this->Controls->Add(this->destinationCitybox);
			this->Controls->Add(this->departureCitybox);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Kiosk";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e)
	{
		auto cities = db->getCities();
		for each (Object^ city in cities)
		{
			this->destinationCitybox->Items->Add(city);
			this->departureCitybox->Items->Add(city);
		}

		auto grades = db->getGrades();
		for each (Object^ grade in grades)
		{
			this->cabinGradebox->Items->Add(grade);
		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)//Total Cost
	{
		int routePrice; // route price
		int gradeprice; //cabin grade price
		int bagPrice; // price of bags
		String^ totalPrice; //total price

		String^ pass = travelerText->Text; //number of passengers
		String^ bag = bagsText->Text; //number of bags
		int numpass;
		int numbag;

		String^ Depart = departureCitybox->Text; //departure city box contents
		String^ Arrive = destinationCitybox->Text; //arrival city box contents
		String^ Grade = cabinGradebox->Text; //grade box contents

		if (Depart->Length == 0 || Arrive->Length == 0 || Grade->Length == 0) // 
		{
			MessageBox::Show("You must chose something for Departure/Arrival/Grade");
			return;
		}

		if (pass->Length == 0 || bag->Length == 0)
		{
			MessageBox::Show("Please enter a number 1 through 5 for Travelers and Bags");
			return;
		}
		else
		{
			numpass = System::Convert::ToInt16(pass);
			numbag = System::Convert::ToInt16(bag);
		}

		//number of passengers check 
		if (numpass > 5 || numpass < 1)
		{
			MessageBox::Show("You can only have a maximum of 5 passengers and a minimum of 1");
			return;
		}
		//number of bags check
		if (numbag > 5 || numbag < 1)
		{
			MessageBox::Show("You can only have a maximum of 5 bags and a minimum of 1");
			return;
		}
		//Logic check
		if (Depart == Arrive)
		{
			MessageBox::Show("You can't fly to your own city!");
			return;
		}

		//class objects and stuff//
		Ticket ticket{ db }; // ticket class object
		ticket.setValue(numbag, numpass, Depart, Arrive, Grade);

		routePrice = ticket.routeQuery();
		gradeprice = ticket.gradeQuery();
		bagPrice = ticket.otherPrice();
		////total box
		totalPrice = System::Convert::ToString(((routePrice + gradeprice) * numpass) + bagPrice);
		this->TotalBox->Text = "$" + totalPrice;
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) //Exit
	{
		Application::Exit();
	}

	};
}
