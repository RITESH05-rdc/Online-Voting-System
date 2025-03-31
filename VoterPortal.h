#pragma once
#include"VotingPanel.h"
namespace VotingSystem {
	using namespace System;
	using namespace System::IO;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for VoterPortal
	/// </summary>
	public ref class VoterPortal : public System::Windows::Forms::Form
	{
	public:
		VoterPortal(void)
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
		~VoterPortal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxUsername;
	private: System::Windows::Forms::TextBox^ textBoxPassword;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ buttonLogin;
	private: System::Windows::Forms::Button^ buttonRegister;



	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(VoterPortal::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxUsername = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->buttonLogin = (gcnew System::Windows::Forms::Button());
			this->buttonRegister = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(55, 141);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(141, 54);
			this->label1->TabIndex = 0;
			this->label1->Text = L"VOTER";
			this->label1->Click += gcnew System::EventHandler(this, &VoterPortal::label1_Click_1);
			// 
			// textBoxUsername
			// 
			this->textBoxUsername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxUsername->Location = System::Drawing::Point(64, 234);
			this->textBoxUsername->Name = L"textBoxUsername";
			this->textBoxUsername->Size = System::Drawing::Size(348, 46);
			this->textBoxUsername->TabIndex = 1;
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPassword->Location = System::Drawing::Point(64, 327);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->PasswordChar = '*';
			this->textBoxPassword->Size = System::Drawing::Size(348, 46);
			this->textBoxPassword->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(61, 215);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"USERNAME";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(61, 308);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"PASSWORD";
			// 
			// buttonLogin
			// 
			this->buttonLogin->Location = System::Drawing::Point(64, 416);
			this->buttonLogin->Name = L"buttonLogin";
			this->buttonLogin->Size = System::Drawing::Size(171, 59);
			this->buttonLogin->TabIndex = 5;
			this->buttonLogin->Text = L"LOGIN";
			this->buttonLogin->UseVisualStyleBackColor = true;
			this->buttonLogin->Click += gcnew System::EventHandler(this, &VoterPortal::buttonLogin_Click);
			// 
			// buttonRegister
			// 
			this->buttonRegister->Location = System::Drawing::Point(241, 416);
			this->buttonRegister->Name = L"buttonRegister";
			this->buttonRegister->Size = System::Drawing::Size(171, 59);
			this->buttonRegister->TabIndex = 6;
			this->buttonRegister->Text = L"REGISTER";
			this->buttonRegister->UseVisualStyleBackColor = true;
			this->buttonRegister->Click += gcnew System::EventHandler(this, &VoterPortal::button2_Click);
			// 
			// VoterPortal
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(497, 767);
			this->Controls->Add(this->buttonRegister);
			this->Controls->Add(this->buttonLogin);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxPassword);
			this->Controls->Add(this->textBoxUsername);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"VoterPortal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VoterPortal";
			this->Load += gcnew System::EventHandler(this, &VoterPortal::VoterPortal_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void VoterPortal_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}


		   bool HasUserAlreadyVoted(String^ username) {
			   String^ alreadyVotedFile = "alreadyvoted.txt";

			   if (File::Exists(alreadyVotedFile)) {
				   array<String^>^ lines = File::ReadAllLines(alreadyVotedFile);
				   for each (String ^ line in lines) {
					   if (line->Equals(username)) {
						   return true; // Username has already voted
					   }
				   }
			   }

			   return false; // Username has not voted
		   }

		   void MarkUserAsVoted(String^ username) {
			   String^ alreadyVotedFile = "alreadyvoted.txt";

			   // Append the username to the alreadyvoted file
			   StreamWriter^ sw = File::AppendText(alreadyVotedFile);
			   sw->WriteLine(username);
			   sw->Close();
		   }







	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = textBoxUsername->Text;
		String^ password = textBoxPassword->Text;
		String^ userAccountFile = "user_accounts.txt";

		try {
			// Check if the file already exists
			if (!File::Exists(userAccountFile)) {
				// If the file doesn't exist, create it
				FileStream^ fs = File::Create(userAccountFile);
				fs->Close();
			}

			// Check if the username is already taken
			array<String^>^ lines = File::ReadAllLines(userAccountFile);
			for each (String ^ line in lines) {
				array<String^>^ parts = line->Split(':');
				if (parts->Length >= 1 && parts[0]->Equals(username)) {
					MessageBox::Show("Username already taken. Please choose another.");
					/*return false;*/ // Username already exists
				}
			}

			// Append the new user's information to the file
			StreamWriter^ sw = File::AppendText(userAccountFile);
			sw->WriteLine(username + ":" + password);
			sw->Close();

			MessageBox::Show("Registration successful!");
			/*return true;*/
		}
		catch (Exception^ e) {
			MessageBox::Show("Error while registering user: " + e->Message);
		/*	return false;*/
		}





	}


		   // Function to check if the entered username and password are valid
		   bool IsLoginValid(String^ username, String^ password) {
			   // Read the user account file and check for a match
			   String^ userAccountFile = "user_accounts.txt";

			   if (File::Exists(userAccountFile)) {
				   array<String^>^ lines = File::ReadAllLines(userAccountFile);
				   for each (String ^ line in lines) {
					   array<String^>^ parts = line->Split(':');
					   if (parts->Length == 2 && parts[0]->Equals(username) && parts[1]->Equals(password)) {
						   return true; // Match found
					   }
				   }
			   }

			   return false; // No match found
		   }



		 

private: System::Void buttonLogin_Click(System::Object^ sender, System::EventArgs^ e) {

	VotingPanel VP;
	// Event handler for the login button click
	//void LoginButton_Click(Object ^ sender, EventArgs ^ e) {
		String^ username = textBoxUsername->Text;
		String^ password = textBoxPassword->Text;

		if (IsLoginValid(username, password)) {

			if (!HasUserAlreadyVoted(username)) {
				MessageBox::Show("Login successful!");
				MarkUserAsVoted(username);
				this->Hide();
				VP.ShowDialog();
			}
			else {
				MessageBox::Show("Already Voted!");
			}
			



			// Proceed to the main application
		}
		else {
			MessageBox::Show("Invalid username or password.");
		}
	/*}*/


}
};
}
