#pragma once

namespace DCSLiveryExpander {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GameSelect
	/// </summary>
	public ref class GameSelect : public System::Windows::Forms::Form
	{
	public:
		GameSelect(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		enum class ButtonSelection {steam = 1, ed = 2, beta = 3 };
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GameSelect()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ bEDBetaInstallation;
	protected:

	private: System::Windows::Forms::Button^ bSteamInstallation;
	private: System::Windows::Forms::Button^ bEDInstallation;
	protected:


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;

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
			this->bEDBetaInstallation = (gcnew System::Windows::Forms::Button());
			this->bSteamInstallation = (gcnew System::Windows::Forms::Button());
			this->bEDInstallation = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// bEDBetaInstallation
			// 
			this->bEDBetaInstallation->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bEDBetaInstallation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bEDBetaInstallation->Location = System::Drawing::Point(3, 252);
			this->bEDBetaInstallation->Name = L"bEDBetaInstallation";
			this->bEDBetaInstallation->Size = System::Drawing::Size(423, 75);
			this->bEDBetaInstallation->TabIndex = 0;
			this->bEDBetaInstallation->Text = L"Eagle Dynamics Beta Installation";
			this->bEDBetaInstallation->UseVisualStyleBackColor = true;
			this->bEDBetaInstallation->Click += gcnew System::EventHandler(this, &GameSelect::bEDBetaInstallation_Click);
			// 
			// bSteamInstallation
			// 
			this->bSteamInstallation->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bSteamInstallation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bSteamInstallation->Location = System::Drawing::Point(3, 51);
			this->bSteamInstallation->Name = L"bSteamInstallation";
			this->bSteamInstallation->Size = System::Drawing::Size(423, 75);
			this->bSteamInstallation->TabIndex = 1;
			this->bSteamInstallation->Text = L"Steam Installation";
			this->bSteamInstallation->UseVisualStyleBackColor = true;
			this->bSteamInstallation->Click += gcnew System::EventHandler(this, &GameSelect::bSteamInstallation_Click);
			// 
			// bEDInstallation
			// 
			this->bEDInstallation->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->bEDInstallation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bEDInstallation->Location = System::Drawing::Point(3, 151);
			this->bEDInstallation->Name = L"bEDInstallation";
			this->bEDInstallation->Size = System::Drawing::Size(423, 75);
			this->bEDInstallation->TabIndex = 2;
			this->bEDInstallation->Text = L"Eagle Dynamics Installation";
			this->bEDInstallation->UseVisualStyleBackColor = true;
			this->bEDInstallation->Click += gcnew System::EventHandler(this, &GameSelect::bEDInstallation_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(423, 24);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Select an installation to modify";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->bEDBetaInstallation, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->bEDInstallation, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->bSteamInstallation, 0, 1);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 31.70732F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 68.29269F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 120)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 88)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(429, 338);
			this->tableLayoutPanel1->TabIndex = 4;
			// 
			// GameSelect
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(429, 338);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"GameSelect";
			this->Text = L"GameSelect";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


	public:
		delegate void SendButtonSelectionHandler(ButtonSelection selection);
		SendButtonSelectionHandler^ OnButtonSelection;
		
	private:
		System::Void bSteamInstallation_Click(System::Object^ sender, System::EventArgs^ e)
		{
			SendButtonSelection(ButtonSelection::steam);
		}
		System::Void bEDInstallation_Click(System::Object^ sender, System::EventArgs^ e)
		{
			SendButtonSelection(ButtonSelection::ed);
		}
		System::Void bEDBetaInstallation_Click(System::Object^ sender, System::EventArgs^ e)
		{
			SendButtonSelection(ButtonSelection::beta);
		}

		void SendButtonSelection(ButtonSelection selection)
		{
			OnButtonSelection->Invoke(selection);
			Close();
		}

};
}
