#pragma once

namespace VotingSystem {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Fresult
	/// </summary>
	public ref class Fresult : public System::Windows::Forms::Form
	{
	public:
		Fresult(void)
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
		~Fresult()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ ListBoxResults;
	protected:

	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Fresult::typeid));
			this->ListBoxResults = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ListBoxResults
			// 
			this->ListBoxResults->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ListBoxResults->FormattingEnabled = true;
			this->ListBoxResults->ItemHeight = 16;
			this->ListBoxResults->Location = System::Drawing::Point(117, 142);
			this->ListBoxResults->Name = L"ListBoxResults";
			this->ListBoxResults->Size = System::Drawing::Size(240, 288);
			this->ListBoxResults->TabIndex = 0;
			this->ListBoxResults->SelectedIndexChanged += gcnew System::EventHandler(this, &Fresult::ListBoxResults_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(117, 486);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(241, 43);
			this->button1->TabIndex = 1;
			this->button1->Text = L"RESULTS";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Fresult::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(117, 546);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(240, 51);
			this->button2->TabIndex = 2;
			this->button2->Text = L"CLEAR VOTES";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Fresult::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(63, 436);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(175, 38);
			this->button3->TabIndex = 3;
			this->button3->Text = L"PUBLISH";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Fresult::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(265, 436);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(175, 38);
			this->button4->TabIndex = 4;
			this->button4->Text = L"UNPUBLISH";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Fresult::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Red;
			this->button5->Location = System::Drawing::Point(117, 603);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(240, 52);
			this->button5->TabIndex = 5;
			this->button5->Text = L"CLEAR ALL DATA";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Fresult::button5_Click);
			// 
			// Fresult
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(497, 767);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->ListBoxResults);
			this->DoubleBuffered = true;
			this->Name = L"Fresult";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Fresult";
			this->Load += gcnew System::EventHandler(this, &Fresult::Fresult_Load);
			this->ResumeLayout(false);

		}

		// Function to display election results from the "vote_counts.txt" file
		void DisplayElectionResults() {
			String^ voteCountFile = "vote_counts.txt";

			// Create a Dictionary to store vote counts (candidate name -> vote count)
			Dictionary<String^, int>^ voteCounts = gcnew Dictionary<String^, int>();

			if (File::Exists(voteCountFile)) {
				// Read the vote counts from the file and update the Dictionary
				array<String^>^ lines = File::ReadAllLines(voteCountFile);
				for each (String ^ line in lines) {
					array<String^>^ parts = line->Split(':');
					if (parts->Length == 2) {
						String^ candidateName = parts[0];
						int voteCount;
						if (Int32::TryParse(parts[1], voteCount)) {
							voteCounts[candidateName] = voteCount;
						}
					}
				}
			}

			// Clear the ListBox and display the results
			ListBoxResults->Items->Clear();
			for each (KeyValuePair<String^, int> kvp in voteCounts) {
				String^ candidateName = kvp.Key;
				int voteCount = kvp.Value;
				String^ resultText = candidateName + ": " + voteCount.ToString();
				ListBoxResults->Items->Add(resultText);
			}
		}


#pragma endregion
	private: System::Void Fresult_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		DisplayElectionResults();
	}
	private: System::Void ListBoxResults_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}

		   void ClearVoteCountsFile()
		   {
			   String^ fileName = "vote_counts.txt";
			   StreamWriter^ writer = File::CreateText(fileName);
			   writer->Close();

		   }



	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		ClearVoteCountsFile();
	}



		   void storeOne() {
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




	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		storeOne();
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	storeZero();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ fileName = "alreadyvoted.txt";
	StreamWriter^ writer = File::CreateText(fileName);
	writer->Close();
	StreamWriter^ writer2 = File::CreateText("user_accounts.txt");
	writer2->Close();

}
};
}
