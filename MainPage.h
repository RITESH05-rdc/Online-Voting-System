#pragma once
#include"VoterPortal.h"
#include"VotingPanel.h"
#include"AdminLogin.h"
#include"AdminDash.h"
#include"Vres.h"
namespace VotingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainPage
	/// </summary>
	public ref class MainPage : public System::Windows::Forms::Form
	{
	public:
		MainPage(void)
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
		~MainPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1VoterPortal;
	protected:


	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;


	protected:

	private:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainPage::typeid));
			this->button1VoterPortal = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1VoterPortal
			// 
			this->button1VoterPortal->BackColor = System::Drawing::Color::White;
			this->button1VoterPortal->FlatAppearance->BorderSize = 0;
			this->button1VoterPortal->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1VoterPortal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1VoterPortal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1VoterPortal->Location = System::Drawing::Point(133, 195);
			this->button1VoterPortal->Name = L"button1VoterPortal";
			this->button1VoterPortal->Size = System::Drawing::Size(238, 91);
			this->button1VoterPortal->TabIndex = 0;
			this->button1VoterPortal->Text = L"VOTER PORTAL";
			this->button1VoterPortal->UseVisualStyleBackColor = false;
			this->button1VoterPortal->Click += gcnew System::EventHandler(this, &MainPage::button1_ClickVP);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(143, 328);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(218, 81);
			this->button3->TabIndex = 2;
			this->button3->Text = L"RESULTS";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MainPage::button3_Click);
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(132, 448);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(239, 101);
			this->button1->TabIndex = 3;
			this->button1->Text = L"ADMIN";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainPage::button1_Click);
			// 
			// MainPage
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(497, 767);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1VoterPortal);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainPage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainPage";
			this->Load += gcnew System::EventHandler(this, &MainPage::MainPage_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainPage_Load(System::Object^ sender, System::EventArgs^ e) {
	}


		   String^ retrieveButton_Click()
		   {
			   // Retrieve the value from the file
			   if (File::Exists("resCond.txt"))
			   {
				   StreamReader^ reader = gcnew StreamReader("resCond.txt");
				   String^ valueStr = reader->ReadLine();
				   reader->Close();
				   return valueStr;
			   }
			  
		   }



		   //Results Button
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (retrieveButton_Click() == "1") {
			Vres VR;
			this->Hide();
			VR.ShowDialog();
		}
		else {
			MessageBox::Show("Not Allowed");
		}

	}
	private: System::Void button1_ClickVP(System::Object^ sender, System::EventArgs^ e) {
		VoterPortal VP;
		this->Hide();
		VP.ShowDialog();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	     
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	AdminLogin AL;
	this->Hide();
	AL.ShowDialog();

}      void storeOne() {
	String^ userAccountFile = "resCond.txt";
	StreamWriter^ writer = gcnew StreamWriter(userAccountFile);
	writer->WriteLine("1");
	writer->Close();

}

	   void storeZero() {
		   String^ userAccountFile = "resCond.txt";
		   StreamWriter^ writer = gcnew StreamWriter(userAccountFile);
		   writer->WriteLine("0");
		   writer->Close();
	   }





private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
