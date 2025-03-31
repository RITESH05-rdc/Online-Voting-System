#pragma once

#include"exitpage.h"
namespace VotingSystem {
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace System::IO;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for VotingPanel
	/// </summary>
	public ref class VotingPanel : public System::Windows::Forms::Form
	{
	public:
		VotingPanel(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		//Function to change the candidate 1 text 
		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~VotingPanel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(VotingPanel::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(311, 232);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 58);
			this->button1->TabIndex = 0;
			this->button1->Text = L"VOTE";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &VotingPanel::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(311, 311);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(119, 58);
			this->button2->TabIndex = 1;
			this->button2->Text = L"VOTE";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &VotingPanel::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(311, 393);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(119, 58);
			this->button3->TabIndex = 2;
			this->button3->Text = L"VOTE";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &VotingPanel::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(311, 484);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(119, 58);
			this->button4->TabIndex = 3;
			this->button4->Text = L"VOTE";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &VotingPanel::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(311, 604);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(119, 58);
			this->button5->TabIndex = 4;
			this->button5->Text = L"VOTE";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &VotingPanel::button5_Click);
			// 
			// VotingPanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(515, 814);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Name = L"VotingPanel";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VotingPanel";
			this->Load += gcnew System::EventHandler(this, &VotingPanel::VotingPanel_Load);
			this->ResumeLayout(false);

		}


		void UpdateAndSaveVoteCount(String^ candidateName) {
			// Define the filename for storing vote counts
			String^ voteCountFile = "vote_counts.txt";

			// Create a dictionary to store vote counts (candidate name -> vote count)
			Dictionary<String^, int>^ voteCounts = gcnew Dictionary<String^, int>();

			// Check if the vote count file exists and load data from it
			if (File::Exists(voteCountFile)) {
				array<String^>^ lines = File::ReadAllLines(voteCountFile);
				for each (String ^ line in lines) {
					array<String^>^ parts = line->Split(':');
					if (parts->Length == 2) {
						String^ name = parts[0];
						int count;
						if (Int32::TryParse(parts[1], count)) {
							voteCounts[name] = count;
						}
					}
				}
			}

			// Update the vote count for the selected candidate
			if (voteCounts->ContainsKey(candidateName)) {
				voteCounts[candidateName]++;
			}
			else {
				voteCounts[candidateName] = 1;
			}

			// Save the updated vote counts to the file
			StreamWriter^ sw = gcnew StreamWriter(voteCountFile, false);
			for each (KeyValuePair<String^, int> kvp in voteCounts) {
				sw->WriteLine(kvp.Key + ":" + kvp.Value);
			}
			sw->Close();

			// Display a message indicating the vote has been cast
			MessageBox::Show("Vote for " + candidateName + " has been cast!");
		}




#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	
		String^ candidateName = "BJP";

		if (!String::IsNullOrEmpty(candidateName)) {
			// Call the function to update and save the vote count
			UpdateAndSaveVoteCount(candidateName);
		}
		else {
			// Handle the case where no candidate is selected
			MessageBox::Show("Please select a candidate before casting your vote.");
		}
		exitpage EX;
		this->Hide();
		EX.ShowDialog();


		/*addBjp();*/
	}
	private: System::Void VotingPanel_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ candidateName = "INC";




	if (!String::IsNullOrEmpty(candidateName)) {
		// Call the function to update and save the vote count
		UpdateAndSaveVoteCount(candidateName);
	}
	else {
		// Handle the case where no candidate is selected
		MessageBox::Show("Please select a candidate before casting your vote.");
	}
	exitpage EX;
	this->Hide();
	EX.ShowDialog();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ candidateName = "AAP";

	if (!String::IsNullOrEmpty(candidateName)) {
		// Call the function to update and save the vote count
		UpdateAndSaveVoteCount(candidateName);
	}
	else {
		// Handle the case where no candidate is selected
		MessageBox::Show("Please select a candidate before casting your vote.");

	}

	exitpage EX;
	this->Hide();
	EX.ShowDialog();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ candidateName = "CCP";

	if (!String::IsNullOrEmpty(candidateName)) {
		// Call the function to update and save the vote count
		UpdateAndSaveVoteCount(candidateName);
	}
	else {
		// Handle the case where no candidate is selected
		MessageBox::Show("Please select a candidate before casting your vote.");
	}
	exitpage EX;
	this->Hide();
	EX.ShowDialog();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ candidateName = "RNP";

	if (!String::IsNullOrEmpty(candidateName)) {
		// Call the function to update and save the vote count
		UpdateAndSaveVoteCount(candidateName);
	}
	else {
		// Handle the case where no candidate is selected
		MessageBox::Show("Please select a candidate before casting your vote.");
	}

	exitpage EX;
	this->Hide();
	EX.ShowDialog();
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
