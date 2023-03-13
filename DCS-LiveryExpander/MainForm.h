#pragma once
namespace DCSLiveryExpander
{

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;
	using namespace Microsoft::Win32;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
		public:
			MainForm(void)
			{
				InitializeComponent();
			}

		protected:
			/// <summary>
			/// Clean up any resources being used.
			/// </summary>
			~MainForm()
			{
				if (components)
				{
					delete components;
				}
			}
		private:
			const int dcsSteamID = 223750;
			System::Windows::Forms::Button^ bSelectFolder;
			System::Windows::Forms::Button^ bMakeChanges;
			System::Windows::Forms::ListBox^ listFiles;


			System::Windows::Forms::TextBox^ tbFolder;


			System::Windows::Forms::Label^ label1;
			System::Windows::Forms::Label^ label2;
			System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
			String^ folderName;
			System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ bSelectGameFolder;

			System::Windows::Forms::Button^ bSelectModFolder;
			System::Windows::Forms::Button^ bBackupFiles;
			System::Windows::Forms::Button^ bRestoreBackups;



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
				this->bSelectFolder = (gcnew System::Windows::Forms::Button());
				this->bMakeChanges = (gcnew System::Windows::Forms::Button());
				this->listFiles = (gcnew System::Windows::Forms::ListBox());
				this->tbFolder = (gcnew System::Windows::Forms::TextBox());
				this->label1 = (gcnew System::Windows::Forms::Label());
				this->label2 = (gcnew System::Windows::Forms::Label());
				this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
				this->label3 = (gcnew System::Windows::Forms::Label());
				this->bSelectGameFolder = (gcnew System::Windows::Forms::Button());
				this->bSelectModFolder = (gcnew System::Windows::Forms::Button());
				this->bBackupFiles = (gcnew System::Windows::Forms::Button());
				this->bRestoreBackups = (gcnew System::Windows::Forms::Button());
				this->SuspendLayout();
				// 
				// bSelectFolder
				// 
				this->bSelectFolder->Location = System::Drawing::Point(344, 12);
				this->bSelectFolder->Name = L"bSelectFolder";
				this->bSelectFolder->Size = System::Drawing::Size(160, 60);
				this->bSelectFolder->TabIndex = 0;
				this->bSelectFolder->Text = L"Select Custom Folder";
				this->bSelectFolder->UseVisualStyleBackColor = true;
				this->bSelectFolder->Click += gcnew System::EventHandler(this, &MainForm::bSelectFolder_Click);
				// 
				// bMakeChanges
				// 
				this->bMakeChanges->Enabled = false;
				this->bMakeChanges->Location = System::Drawing::Point(178, 621);
				this->bMakeChanges->Name = L"bMakeChanges";
				this->bMakeChanges->Size = System::Drawing::Size(160, 60);
				this->bMakeChanges->TabIndex = 2;
				this->bMakeChanges->Text = L"Make Changes";
				this->bMakeChanges->UseVisualStyleBackColor = true;
				this->bMakeChanges->Click += gcnew System::EventHandler(this, &MainForm::bMakeChanges_Click);
				// 
				// listFiles
				// 
				this->listFiles->FormattingEnabled = true;
				this->listFiles->Location = System::Drawing::Point(12, 143);
				this->listFiles->Name = L"listFiles";
				this->listFiles->Size = System::Drawing::Size(492, 472);
				this->listFiles->TabIndex = 1;
				// 
				// tbFolder
				// 
				this->tbFolder->Enabled = false;
				this->tbFolder->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->tbFolder->Location = System::Drawing::Point(12, 108);
				this->tbFolder->Name = L"tbFolder";
				this->tbFolder->Size = System::Drawing::Size(492, 29);
				this->tbFolder->TabIndex = 4;
				this->tbFolder->TabStop = false;
				// 
				// label1
				// 
				this->label1->AutoSize = true;
				this->label1->Location = System::Drawing::Point(12, 406);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(0, 13);
				this->label1->TabIndex = 5;
				// 
				// label2
				// 
				this->label2->AutoSize = true;
				this->label2->Location = System::Drawing::Point(41, 430);
				this->label2->Name = L"label2";
				this->label2->Size = System::Drawing::Size(0, 13);
				this->label2->TabIndex = 6;
				// 
				// label3
				// 
				this->label3->AutoSize = true;
				this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label3->Location = System::Drawing::Point(12, 81);
				this->label3->Name = L"label3";
				this->label3->Size = System::Drawing::Size(144, 24);
				this->label3->TabIndex = 7;
				this->label3->Text = L"Selected Folder";
				// 
				// bSelectGameFolder
				// 
				this->bSelectGameFolder->Location = System::Drawing::Point(12, 12);
				this->bSelectGameFolder->Name = L"bSelectGameFolder";
				this->bSelectGameFolder->Size = System::Drawing::Size(160, 60);
				this->bSelectGameFolder->TabIndex = 8;
				this->bSelectGameFolder->Text = L"Select Base Liveries";
				this->bSelectGameFolder->UseVisualStyleBackColor = true;
				this->bSelectGameFolder->Click += gcnew System::EventHandler(this, &MainForm::bSelectGameFolder_Click);
				// 
				// bSelectModFolder
				// 
				this->bSelectModFolder->Location = System::Drawing::Point(178, 12);
				this->bSelectModFolder->Name = L"bSelectModFolder";
				this->bSelectModFolder->Size = System::Drawing::Size(160, 60);
				this->bSelectModFolder->TabIndex = 9;
				this->bSelectModFolder->Text = L"Select Mod Folder";
				this->bSelectModFolder->UseVisualStyleBackColor = true;
				this->bSelectModFolder->Click += gcnew System::EventHandler(this, &MainForm::bSelectModFolder_Click);
				// 
				// bBackupFiles
				// 
				this->bBackupFiles->Enabled = false;
				this->bBackupFiles->Location = System::Drawing::Point(12, 621);
				this->bBackupFiles->Name = L"bBackupFiles";
				this->bBackupFiles->Size = System::Drawing::Size(160, 60);
				this->bBackupFiles->TabIndex = 10;
				this->bBackupFiles->Text = L"Backup Files";
				this->bBackupFiles->UseVisualStyleBackColor = true;
				this->bBackupFiles->Click += gcnew System::EventHandler(this, &MainForm::bBackupFiles_Click);
				// 
				// bRestoreBackups
				// 
				this->bRestoreBackups->Enabled = false;
				this->bRestoreBackups->Location = System::Drawing::Point(344, 621);
				this->bRestoreBackups->Name = L"bRestoreBackups";
				this->bRestoreBackups->Size = System::Drawing::Size(160, 60);
				this->bRestoreBackups->TabIndex = 11;
				this->bRestoreBackups->Text = L"Restore Backups";
				this->bRestoreBackups->UseVisualStyleBackColor = true;
				this->bRestoreBackups->Click += gcnew System::EventHandler(this, &MainForm::bRestoreBackups_Click);
				// 
				// MainForm
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(516, 693);
				this->Controls->Add(this->bRestoreBackups);
				this->Controls->Add(this->bBackupFiles);
				this->Controls->Add(this->bSelectModFolder);
				this->Controls->Add(this->bSelectGameFolder);
				this->Controls->Add(this->label3);
				this->Controls->Add(this->label2);
				this->Controls->Add(this->label1);
				this->Controls->Add(this->tbFolder);
				this->Controls->Add(this->listFiles);
				this->Controls->Add(this->bMakeChanges);
				this->Controls->Add(this->bSelectFolder);
				this->Name = L"MainForm";
				this->Text = L"MainForm";
				this->ResumeLayout(false);
				this->PerformLayout();

			}
		#pragma endregion
	
			bool SearchDirectory()
			{
				try
				{
					if (System::IO::Directory::Exists(folderName))
					{
						tbFolder->Text = folderName;

						array<System::String^>^ fileList = System::IO::Directory::GetFiles(folderName, "description.lua", IO::SearchOption::AllDirectories);

						for (int i = 0; i < fileList->Length; i++)
						{
							listFiles->Items->Add(fileList[i]->ToString());
						}
						return true;
						/*
							TODO:
							1. Since the folder exists we need to grab the list of description.lua files
							2. If no files found, let user know
						*/
					}
					else
					{
						return false;
					}
				}
				catch (Exception^ ex)
				{
					//TODO: Fill out this exception. I'm not sure how anyone would ever get here
					MessageBox::Show(ex->ToString());
					return false;
				}
			}

			bool BackupOriginalFiles()
			{
				//Take the file list and copy them to descriptionBak.luaBak
				return false;
			}

			bool ModifyFiles()
			{
				return false;
			}

			bool RemoveCountry(System::String^ file)
			{
				return false;
			}

			/// <summary>
			/// This function is used to enable the buttons
			/// </summary>
			void EnableButtons()
			{
				bBackupFiles->Enabled = true;
				bMakeChanges->Enabled = true;
				bRestoreBackups->Enabled = true;
			}
			/// <summary>
			/// This function is used to reset the form back to start
			/// </summary>
			void ResetForm()
			{
				tbFolder->Clear();
				listFiles->Items->Clear();
				bBackupFiles->Enabled = false;
				bMakeChanges->Enabled = false;
				bRestoreBackups->Enabled = false;
			}


			bool TestLocation(String^ location)
			{
				//TODO:fill this out
				return false;
			}


			String^ GetDCSSteamLocation(String^ steamPath)
			{
				try
				{
					String^ libraryFolderText = File::ReadAllText(steamPath + "/steamapps/libraryfolder.vdf");					
					
					//Regex to find the drive that the steam library is located
					String^ steamDriveRegex = "\"\\d\"[\\s]*{[\\s\\r\\n\\w\\:\\\\\\\"\\s\\(\\)\\{]*\"223750\"[\\s]*\"[0-9]*\"[\\s\\r\\n\\w\\:\\\\\\\"\\s\\(\\)\\{]*}";

					RegularExpressions::Match^ drive = RegularExpressions::Regex::Match(libraryFolderText, steamDriveRegex);

					//Regex to get the path line of the steam library
					String^ steamLibraryRegex = "\"path\"[\\s]*[\\s\\r\\n\\w\\:\\\\\\\"\\s\\(\\)\\{]*(Steam|SteamLibrary)\"";
					
					RegularExpressions::Match^ path = RegularExpressions::Regex::Match(drive->Value, steamLibraryRegex);

					//Regex to extract out the actual path
					String^ libraryLocationRegex = "\"\\w:[\\w\\d\\\\\\s\\(\\)\\\"]*\"";

					RegularExpressions::Match^ folderLocation = RegularExpressions::Regex::Match(path->Value, libraryLocationRegex);

					String^ gameLocation = folderLocation->Value->Trim('\"') + "steamapps/common/DCSWorld/Config/";
					


					/*
						After getting the game location we need to check to make sure that the folder actually exists
					
						call TestLocation to determine if the file exists
					
					*/
















				}
				catch (Exception^ ex)
				{

				}
			}

			System::Void bSelectGameFolder_Click(System::Object^ sender, System::EventArgs^ e)
			{
				try
				{
					//We will want to read the registry keys to get the steam/DCS folder

					//Look for standalone DCS installation

					String^ steamInstallLocation = Registry::GetValue("HKEY_CURRENT_USER\\SOFTWARE\\Valve\\Steam", "SteamPath", "")->ToString();
					String^ steamDCSLocation = GetDCSSteamLocation(steamInstallLocation);
					
					String^ dcsInstallLocation = Registry::GetValue("HKEY_CURRENT_USER\\SOFTWARE\\Eagle Dynamics\\DCS World", "Path", "")->ToString();
					String^ dcsBetaInstallLocation = Registry::GetValue("HKEY_CURRENT_USER\\SOFTWARE\\Eagle Dynamics\\DCS World OpenBeta", "Path", "")->ToString();
					

					/*
						check if (library + "steamapps/common/DCSWorld") exists;
					
						

						Should a button or checkbox be added to ask if the coremods aircraft should be modified?
							- would only affect the install location files





					
					
					*/



					//Error handling will need to be improved
					if (String::IsNullOrWhiteSpace(dcsInstallLocation) || String::IsNullOrWhiteSpace(dcsBetaInstallLocation) || String::IsNullOrWhiteSpace(steamInstallLocation))
					{

					}
					else
					{
						//Report that no paths could be found
					}

					//if(installLocation)
					int test = 1;



					//Game ID is 223750


					ResetForm();
				}
				catch (Exception^ ex)
				{
					MessageBox::Show("There was an exception when reading the registry key: " + ex->ToString());
					ResetForm();
				}
			}
			System::Void bSelectModFolder_Click(System::Object^ sender, System::EventArgs^ e)
			{
				//This will get the userprofiles/Saved Games/DCS/Liveries folder
				ResetForm();
			}

			//Should verify to ensure that this is functioning
			System::Void bSelectFolder_Click(System::Object^ sender, System::EventArgs^ e)
			{
				ResetForm();
				System::Windows::Forms::DialogResult result = folderBrowserDialog1->ShowDialog();

				if (result == System::Windows::Forms::DialogResult::OK)
				{
					folderName = folderBrowserDialog1->SelectedPath;

					if (SearchDirectory())
					{
						EnableButtons();
					}
				}
			}
			System::Void bBackupFiles_Click(System::Object^ sender, System::EventArgs^ e)
			{
				if (BackupOriginalFiles())
				{
					//Display Success Message
				}
				else
				{
					//Display Error Message
				}
			}
			System::Void bMakeChanges_Click(System::Object^ sender, System::EventArgs^ e)
			{
				//Comment out the countries section from the description.lua files
				/*
					1. Check if there are any backups
					2. If not, ask user if they want to continue even without backups. If they say no reset form
					3. If they continue/backups exist, continue
					4. Comment out the countries section form the description.lua files
					5. Success message and Reset form
				*/


				ResetForm();
			}
			System::Void bRestoreBackups_Click(System::Object^ sender, System::EventArgs^ e)
			{
				/*
					1. Delete the description.lua files
					2. Copy the backups to description.lua
					3. Reset Form
				*/
				ResetForm();
			}
	};
}
