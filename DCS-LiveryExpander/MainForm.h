#pragma once
#include <cliext/vector>
#include "RegistryInfo.h"
#include "MainForm.h"
#include "GameSelect.h"

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
			String^ folderName;
			DateTime^ currentDate = DateTime::Now;
			String^ logFileName = "DCSLE_Log" + (currentDate->ToString("yyyyMMdd")) + ".log";
			System::Windows::Forms::Button^ bSelectFolder;
			System::Windows::Forms::Button^ bMakeChanges;
			System::Windows::Forms::ListBox^ listFiles;
			System::Windows::Forms::TextBox^ tbFolder;
			System::Windows::Forms::Label^ label1;
			System::Windows::Forms::Label^ label2;
			System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
			System::Windows::Forms::Label^ label3;
			System::Windows::Forms::Button^ bSelectGameFolder;
			System::Windows::Forms::Button^ bSelectModFolder;
			System::Windows::Forms::Button^ bBackupFiles;
			System::Windows::Forms::Button^ bRestoreBackups;
			System::Windows::Forms::CheckBox^ cbOverride;
			System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
			System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
			System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;

			//This will subscribe the main form to the event in GameSelect
			//GameSelect::OnButtonSelection += 


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
				this->cbOverride = (gcnew System::Windows::Forms::CheckBox());
				this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
				this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
				this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
				this->tableLayoutPanel1->SuspendLayout();
				this->tableLayoutPanel3->SuspendLayout();
				this->tableLayoutPanel2->SuspendLayout();
				this->SuspendLayout();
				// 
				// bSelectFolder
				// 
				this->bSelectFolder->Dock = System::Windows::Forms::DockStyle::Fill;
				this->bSelectFolder->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->bSelectFolder->Location = System::Drawing::Point(794, 3);
				this->bSelectFolder->Name = L"bSelectFolder";
				this->bSelectFolder->Size = System::Drawing::Size(391, 48);
				this->bSelectFolder->TabIndex = 2;
				this->bSelectFolder->Text = L"Select Custom Folder";
				this->bSelectFolder->UseVisualStyleBackColor = true;
				this->bSelectFolder->Click += gcnew System::EventHandler(this, &MainForm::bSelectFolder_Click);
				// 
				// bMakeChanges
				// 
				this->bMakeChanges->Dock = System::Windows::Forms::DockStyle::Fill;
				this->bMakeChanges->Enabled = false;
				this->bMakeChanges->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->bMakeChanges->Location = System::Drawing::Point(398, 3);
				this->bMakeChanges->Name = L"bMakeChanges";
				this->bMakeChanges->Size = System::Drawing::Size(389, 48);
				this->bMakeChanges->TabIndex = 6;
				this->bMakeChanges->Text = L"Make Changes";
				this->bMakeChanges->UseVisualStyleBackColor = true;
				this->bMakeChanges->Click += gcnew System::EventHandler(this, &MainForm::bMakeChanges_Click);
				// 
				// listFiles
				// 
				this->listFiles->Dock = System::Windows::Forms::DockStyle::Fill;
				this->listFiles->FormattingEnabled = true;
				this->listFiles->Location = System::Drawing::Point(3, 121);
				this->listFiles->Name = L"listFiles";
				this->listFiles->SelectionMode = System::Windows::Forms::SelectionMode::None;
				this->listFiles->Size = System::Drawing::Size(1188, 753);
				this->listFiles->TabIndex = 99;
				// 
				// tbFolder
				// 
				this->tbFolder->Dock = System::Windows::Forms::DockStyle::Fill;
				this->tbFolder->Enabled = false;
				this->tbFolder->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->tbFolder->Location = System::Drawing::Point(3, 87);
				this->tbFolder->Name = L"tbFolder";
				this->tbFolder->ReadOnly = true;
				this->tbFolder->Size = System::Drawing::Size(1188, 29);
				this->tbFolder->TabIndex = 99;
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
				this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
				this->label3->AutoSize = true;
				this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label3->Location = System::Drawing::Point(3, 54);
				this->label3->Name = L"label3";
				this->label3->Size = System::Drawing::Size(144, 24);
				this->label3->TabIndex = 7;
				this->label3->Text = L"Selected Folder";
				// 
				// bSelectGameFolder
				// 
				this->bSelectGameFolder->Dock = System::Windows::Forms::DockStyle::Fill;
				this->bSelectGameFolder->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				this->bSelectGameFolder->Location = System::Drawing::Point(3, 3);
				this->bSelectGameFolder->Name = L"bSelectGameFolder";
				this->bSelectGameFolder->Size = System::Drawing::Size(389, 48);
				this->bSelectGameFolder->TabIndex = 0;
				this->bSelectGameFolder->Text = L"Select Base Liveries";
				this->bSelectGameFolder->UseVisualStyleBackColor = true;
				this->bSelectGameFolder->Click += gcnew System::EventHandler(this, &MainForm::bSelectGameFolder_Click);
				// 
				// bSelectModFolder
				// 
				this->bSelectModFolder->Dock = System::Windows::Forms::DockStyle::Fill;
				this->bSelectModFolder->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				this->bSelectModFolder->Location = System::Drawing::Point(398, 3);
				this->bSelectModFolder->Name = L"bSelectModFolder";
				this->bSelectModFolder->Size = System::Drawing::Size(390, 48);
				this->bSelectModFolder->TabIndex = 1;
				this->bSelectModFolder->Text = L"Select Mod Folder";
				this->bSelectModFolder->UseVisualStyleBackColor = true;
				this->bSelectModFolder->Click += gcnew System::EventHandler(this, &MainForm::bSelectModFolder_Click);
				// 
				// bBackupFiles
				// 
				this->bBackupFiles->Dock = System::Windows::Forms::DockStyle::Fill;
				this->bBackupFiles->Enabled = false;
				this->bBackupFiles->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->bBackupFiles->Location = System::Drawing::Point(3, 3);
				this->bBackupFiles->Name = L"bBackupFiles";
				this->bBackupFiles->Size = System::Drawing::Size(389, 48);
				this->bBackupFiles->TabIndex = 5;
				this->bBackupFiles->Text = L"Backup Files";
				this->bBackupFiles->UseVisualStyleBackColor = true;
				this->bBackupFiles->Click += gcnew System::EventHandler(this, &MainForm::bBackupFiles_Click);
				// 
				// bRestoreBackups
				// 
				this->bRestoreBackups->Dock = System::Windows::Forms::DockStyle::Fill;
				this->bRestoreBackups->Enabled = false;
				this->bRestoreBackups->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				this->bRestoreBackups->Location = System::Drawing::Point(793, 3);
				this->bRestoreBackups->Name = L"bRestoreBackups";
				this->bRestoreBackups->Size = System::Drawing::Size(392, 48);
				this->bRestoreBackups->TabIndex = 7;
				this->bRestoreBackups->Text = L"Restore Backups";
				this->bRestoreBackups->UseVisualStyleBackColor = true;
				this->bRestoreBackups->Click += gcnew System::EventHandler(this, &MainForm::bRestoreBackups_Click);
				// 
				// cbOverride
				// 
				this->cbOverride->AutoSize = true;
				this->cbOverride->Enabled = false;
				this->cbOverride->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->cbOverride->Location = System::Drawing::Point(3, 880);
				this->cbOverride->Name = L"cbOverride";
				this->cbOverride->Size = System::Drawing::Size(270, 28);
				this->cbOverride->TabIndex = 4;
				this->cbOverride->Text = L"Override DCS Core Liveries\?";
				this->cbOverride->UseVisualStyleBackColor = true;
				this->cbOverride->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbOverride_CheckedChanged);
				// 
				// tableLayoutPanel1
				// 
				this->tableLayoutPanel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
				this->tableLayoutPanel1->ColumnCount = 1;
				this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					100)));
				this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 0, 4);
				this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 0);
				this->tableLayoutPanel1->Controls->Add(this->cbOverride, 0, 3);
				this->tableLayoutPanel1->Controls->Add(this->listFiles, 0, 2);
				this->tableLayoutPanel1->Controls->Add(this->tbFolder, 0, 1);
				this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
				this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
				this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
				this->tableLayoutPanel1->RowCount = 5;
				this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 84)));
				this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 34)));
				this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
				this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 36)));
				this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
				this->tableLayoutPanel1->Size = System::Drawing::Size(1194, 973);
				this->tableLayoutPanel1->TabIndex = 100;
				// 
				// tableLayoutPanel3
				// 
				this->tableLayoutPanel3->ColumnCount = 3;
				this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					33.33333F)));
				this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					33.33333F)));
				this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					33.33333F)));
				this->tableLayoutPanel3->Controls->Add(this->bBackupFiles, 0, 0);
				this->tableLayoutPanel3->Controls->Add(this->bMakeChanges, 1, 0);
				this->tableLayoutPanel3->Controls->Add(this->bRestoreBackups, 2, 0);
				this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
				this->tableLayoutPanel3->Location = System::Drawing::Point(3, 916);
				this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
				this->tableLayoutPanel3->RowCount = 1;
				this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
				this->tableLayoutPanel3->Size = System::Drawing::Size(1188, 54);
				this->tableLayoutPanel3->TabIndex = 101;
				// 
				// tableLayoutPanel2
				// 
				this->tableLayoutPanel2->ColumnCount = 3;
				this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					33.33333F)));
				this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					33.33334F)));
				this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					33.33334F)));
				this->tableLayoutPanel2->Controls->Add(this->bSelectGameFolder, 0, 0);
				this->tableLayoutPanel2->Controls->Add(this->bSelectFolder, 2, 0);
				this->tableLayoutPanel2->Controls->Add(this->bSelectModFolder, 1, 0);
				this->tableLayoutPanel2->Controls->Add(this->label3, 0, 1);
				this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
				this->tableLayoutPanel2->Location = System::Drawing::Point(3, 3);
				this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
				this->tableLayoutPanel2->RowCount = 2;
				this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 54)));
				this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
				this->tableLayoutPanel2->Size = System::Drawing::Size(1188, 78);
				this->tableLayoutPanel2->TabIndex = 101;
				// 
				// MainForm
				// 
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
				this->ClientSize = System::Drawing::Size(1194, 973);
				this->Controls->Add(this->tableLayoutPanel1);
				this->Controls->Add(this->label2);
				this->Controls->Add(this->label1);
				this->MinimumSize = System::Drawing::Size(700, 400);
				this->Name = L"MainForm";
				this->Text = L"MainForm";
				this->tableLayoutPanel1->ResumeLayout(false);
				this->tableLayoutPanel1->PerformLayout();
				this->tableLayoutPanel3->ResumeLayout(false);
				this->tableLayoutPanel2->ResumeLayout(false);
				this->tableLayoutPanel2->PerformLayout();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
		#pragma endregion
	
		#pragma region Helper Functions (come up with better name for the region)

			//This function should be used during exception messages
			void LogException(Exception^ ex, String^ message)
			{
				try
				{
					StreamWriter^ sw = File::AppendText(logFileName);
					sw->WriteLine("---------------Error---------------");
					sw->WriteLine(message);
					sw->WriteLine("*************Exception*************");
					sw->WriteLine(ex->ToString());
					sw->WriteLine("-----------------------------------");
					sw->Close();

					MessageBox::Show("An error occured! Please view " + logFileName + " for more information.");
				}
				catch (Exception^ ex)
				{
					MessageBox::Show("An error occured while logging an error! \n" + ex->ToString());
				}
			}

			bool CountryLineExists(String^ filePath)
			{
				try
				{
					String^ libraryFolderText = File::ReadAllText(filePath);

					//Regex to find the countries line
					String^ countryRegex = "countries\\s?=\\s?{[\"a-zA-Z,\\s]*}";

					RegularExpressions::Match^ countryLine = RegularExpressions::Regex::Match(libraryFolderText, countryRegex);

					if (countryLine->Success)
						return true;

					return false;
				}
				catch (Exception^ ex)
				{
					LogException(ex, "An error occured while attempting to search for the country line in the following file: " + filePath);
				}
			}
			
			bool SearchDirectory()
			{
				try
				{
					if (Directory::Exists(folderName))
					{
						int i = 0;
						tbFolder->Text = folderName;

						array<String^>^ fileList = Directory::GetFiles(folderName, "description.lua", IO::SearchOption::AllDirectories);

						for (i = 0; i < fileList->Length; i++)
						{
							if(CountryLineExists(fileList[i]->ToString()))
								listFiles->Items->Add(fileList[i]->ToString());
						}

						if (i > 0)
							return true;
						else
							MessageBox::Show("No description.lua files were found!");
						return false;
					}
					else
					{
						//TODO: Display message that directory doesn't exist?
						return false;
					}
				}
				catch (Exception^ ex)
				{
					LogException(ex, "An error occured while attempting to search the following directory: " + folderName);
					return false;
				}
			}

			//This function will be used to determine if backups exist.
			bool DoBackupsExist()
			{
				try
				{
					for (int i = 0; i < listFiles->Items->Count; i++)
					{
						String^ luaFile = listFiles->Items[i]->ToString();
						FileInfo^ filePath = gcnew FileInfo(luaFile);

						if (!File::Exists(filePath->Directory + "\\descriptionBAK.luaBAK"))
							return false;

					}
					return true;
				}
				catch (Exception^ ex)
				{
					LogException(ex, "An error occured while attempting to search for backups.");
					return false;
				}
			}

			bool BackupOriginalFiles()
			{
				try
				{
					//Take the file list and copy them to descriptionBak.luaBak
					for (int i = 0; i < listFiles->Items->Count; i++)
					{
						String^ luaFile = listFiles->Items[i]->ToString();
						FileInfo^ filePath = gcnew FileInfo(luaFile);

						//TODO: we will want more validation prior to copying
						//TODO: Check for existing backups first
						File::Copy(luaFile, filePath->Directory + "\\descriptionBAK.luaBAK");

					}

					return DoBackupsExist();

				}
				catch (Exception^ ex)
				{
					LogException(ex, "An error occured while attempting to create backups for the description.lua files.");
					return false;
				}
			}

			bool DeleteOldBackups()
			{
				try
				{
					String^ tester = "";
					Generic::IEnumerable<String^>^ fileList = Directory::EnumerateFiles(folderName, "*.luaBAK", SearchOption::AllDirectories);

					for each (String ^ fileName in fileList)
					{
						File::Delete(fileName);
					}

					return true;
				}
				catch (Exception^ ex)
				{
					LogException(ex, "An error occured while attempting to delete the old backups.");
					return false;
				}
			}

			cliext::vector<String^> WhichBackupsFailed()
			{
				cliext::vector<String^> faledBackups;
				try
				{

					for (int i = 0; i < listFiles->Items->Count; i++)
					{
						String^ luaFile = listFiles->Items[i]->ToString();
						FileInfo^ filePath = gcnew FileInfo(luaFile);

						if (!File::Exists(filePath->Directory + "\\descriptionBAK.luaBAK"))
							faledBackups.push_back(filePath->Directory + "\\descriptionBAK.luaBAK");
					}

					return faledBackups;
				}
				catch (Exception^ ex)
				{
					//TODO:Maybe we want to clear stuff out if it fails at this step?
					LogException(ex, "An error occured while attempting to determine which files failed to be backed up.");
					return faledBackups;
				}
			}

			//do I still need this?
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
				cbOverride->Enabled = true;
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


			String^ VerifyLocation(String^ locationPath)
			{
				try
				{
					//Now we check to ensure that the location we retrieved actually exists
					if (!String::IsNullOrWhiteSpace(locationPath))
					{
						if (Directory::Exists(locationPath))
							return locationPath;
					}

					return "";
				}
				catch (Exception^ ex)
				{
					LogException(ex, "An error occured while attempting to verify the following location: " + locationPath);
					return "";
				}
			}



		#pragma endregion

		#pragma region Windows Forms Event Handlers


			System::Void bSelectGameFolder_Click(System::Object^ sender, System::EventArgs^ e)
			{
				try
				{
					SteamInfo^ steamInfo = gcnew SteamInfo;
					DCSInfo^ dcsInfo = gcnew DCSInfo;
					DCSBetaInfo^ dcsBetaInfo = gcnew DCSBetaInfo;

					


					//TODO WE ARE HERE AND THIS IS WHAT YOU ARE WORKING ON
					



					//TODO Error handling will need to be improved
					if (steamInfo->GetLocationExists() || dcsInfo->GetLocationExists() || dcsBetaInfo->GetLocationExists())
					{
						GameSelect gameSelectForm;
						gameSelectForm.Show();
					}
					else
					{
						MessageBox::Show("No DCS installations were found in registry, use the Custom Folder to navigate to the DCS folder");
						ResetForm();
						//Report that no paths could be found
					}


				}
				catch (Exception^ ex)
				{
					LogException(ex, "An error occured while attempting to retreive the game install information");
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
				try
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
						else
						{
							ResetForm();
						}
					}
				}
				catch (Exception^ ex)
				{
					LogException(ex, "An error occured during the selection of the custom folder");
					ResetForm();
				}
			}
			System::Void bBackupFiles_Click(System::Object^ sender, System::EventArgs^ e)
			{
				//TODO: try catch
				//TODO: DoBackupsExist? Do we want to overwrite?

				try
				{
					if (DoBackupsExist())
					{

						Windows::Forms::DialogResult result = MessageBox::Show(this,
							"Existing Backups were found, remove them?",
							"Remove Existing Backups?",
							MessageBoxButtons::YesNo
						);

						if (result == Windows::Forms::DialogResult::Yes)
						{
							//if we failed deleting some of the backups we want to back out
							if (!DeleteOldBackups())
							{
								return;
							}
						}
						else
						{
							return;
						}
					}

					if (BackupOriginalFiles())
					{
						//Display Success Message
						MessageBox::Show("The files have been successfully backed up!");
					}
					else
					{
						cliext::vector<String^> problemBackups = WhichBackupsFailed();

						//TODO: Ask if they want to continue, if so remove the items from the list that are bad
						//Display Error Message
					}
				}
				catch (Exception^ ex)
				{
					LogException(ex, "An error occured in the logic for the backup button.");
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
			System::Void cbOverride_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
			{
				/*
				Do we want to keep this function and associated checkbox?

				TODO:
				1. Check if there are two different folders in the DCS install location for core vs user mods
				2. If there is, keep this check box and implement it at some point. Otherwise remove
				*/
			}
			
		#pragma endregion
};
}
