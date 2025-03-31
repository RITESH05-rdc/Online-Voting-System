#pragma once
#include"Fresult.h"
namespace VotingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminLogin
	/// </summary>
	public ref class AdminLogin : public System::Windows::Forms::Form
	{
	public:
		AdminLogin(void)
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
		~AdminLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ adminUser;
	private: System::Windows::Forms::TextBox^ AdminPass;


	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminLogin::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->adminUser = (gcnew System::Windows::Forms::TextBox());
			this->AdminPass = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(107, 146);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Admin";
			this->label1->Click += gcnew System::EventHandler(this, &AdminLogin::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(107, 285);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(146, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password";
			// 
			// adminUser
			// 
			this->adminUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adminUser->Location = System::Drawing::Point(113, 210);
			this->adminUser->Name = L"adminUser";
			this->adminUser->Size = System::Drawing::Size(275, 38);
			this->adminUser->TabIndex = 2;
			// 
			// AdminPass
			// 
			this->AdminPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AdminPass->Location = System::Drawing::Point(113, 320);
			this->AdminPass->Name = L"AdminPass";
			this->AdminPass->PasswordChar = '$';
			this->AdminPass->Size = System::Drawing::Size(275, 38);
			this->AdminPass->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(129, 444);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(250, 45);
			this->button1->TabIndex = 4;
			this->button1->Text = L"ADMIN LOGIN";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AdminLogin::button1_Click);
			// 
			// AdminLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(497, 767);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->AdminPass);
			this->Controls->Add(this->adminUser);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AdminLogin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminLogin";
			this->Load += gcnew System::EventHandler(this, &AdminLogin::AdminLogin_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ enteredUsername = adminUser->Text;
		String^ enteredPassword = AdminPass->Text;
		String^ username = "PRRS";
		String^ password = "1234";
		// Replace 'desiredUsername' and 'desiredPassword' with the actual username and password you're checking against
		String^ desiredUsername = username;
		String^ desiredPassword = password;

		if (enteredUsername == desiredUsername && enteredPassword == desiredPassword) {
			// Successful login
			MessageBox::Show("Login successful!");
			Fresult VR;
			this->Hide();
			VR.ShowDialog();
			// Proceed to the main application
		}
		else {
			// Invalid login
			MessageBox::Show("Invalid username or password.");
		}

	}
private: System::Void AdminLogin_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
