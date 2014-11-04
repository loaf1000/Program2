#pragma once

namespace Program2 {

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
	private: System::Windows::Forms::Button^  buttonSubmit;
	protected:
	private: System::Windows::Forms::Button^  buttonQuit;
	private: System::Windows::Forms::RichTextBox^  richTextBoxIO;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  labelTitle;
	private: System::Windows::Forms::Label^  labelDescription;
	private: System::Windows::Forms::TextBox^  textBoxUserInput;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialogFilePath;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialogFilePath;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->buttonSubmit = (gcnew System::Windows::Forms::Button());
			this->buttonQuit = (gcnew System::Windows::Forms::Button());
			this->richTextBoxIO = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->labelTitle = (gcnew System::Windows::Forms::Label());
			this->labelDescription = (gcnew System::Windows::Forms::Label());
			this->textBoxUserInput = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialogFilePath = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialogFilePath = (gcnew System::Windows::Forms::SaveFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonSubmit
			// 
			this->buttonSubmit->BackColor = System::Drawing::Color::Black;
			this->buttonSubmit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSubmit->ForeColor = System::Drawing::Color::White;
			this->buttonSubmit->Location = System::Drawing::Point(152, 387);
			this->buttonSubmit->Name = L"buttonSubmit";
			this->buttonSubmit->Size = System::Drawing::Size(92, 44);
			this->buttonSubmit->TabIndex = 0;
			this->buttonSubmit->Text = L"Submit";
			this->buttonSubmit->UseVisualStyleBackColor = false;
			this->buttonSubmit->Click += gcnew System::EventHandler(this, &MyForm::buttonSubmit_Click);
			// 
			// buttonQuit
			// 
			this->buttonQuit->BackColor = System::Drawing::Color::Black;
			this->buttonQuit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonQuit->ForeColor = System::Drawing::Color::White;
			this->buttonQuit->Location = System::Drawing::Point(904, 692);
			this->buttonQuit->Name = L"buttonQuit";
			this->buttonQuit->Size = System::Drawing::Size(92, 44);
			this->buttonQuit->TabIndex = 1;
			this->buttonQuit->Text = L"Quit";
			this->buttonQuit->UseVisualStyleBackColor = false;
			// 
			// richTextBoxIO
			// 
			this->richTextBoxIO->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBoxIO->Location = System::Drawing::Point(354, 174);
			this->richTextBoxIO->MaximumSize = System::Drawing::Size(350, 400);
			this->richTextBoxIO->MinimumSize = System::Drawing::Size(350, 400);
			this->richTextBoxIO->Name = L"richTextBoxIO";
			this->richTextBoxIO->Size = System::Drawing::Size(350, 400);
			this->richTextBoxIO->TabIndex = 2;
			this->richTextBoxIO->Text = L"";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1008, 742);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// labelTitle
			// 
			this->labelTitle->AutoSize = true;
			this->labelTitle->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelTitle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTitle->ForeColor = System::Drawing::Color::White;
			this->labelTitle->Location = System::Drawing::Point(305, 9);
			this->labelTitle->Name = L"labelTitle";
			this->labelTitle->Size = System::Drawing::Size(399, 33);
			this->labelTitle->TabIndex = 4;
			this->labelTitle->Text = L"Welcome to Laithe\'s Text File I/O";
			this->labelTitle->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// labelDescription
			// 
			this->labelDescription->AutoSize = true;
			this->labelDescription->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelDescription->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDescription->ForeColor = System::Drawing::Color::White;
			this->labelDescription->Location = System::Drawing::Point(12, 110);
			this->labelDescription->Name = L"labelDescription";
			this->labelDescription->Size = System::Drawing::Size(372, 33);
			this->labelDescription->TabIndex = 5;
			this->labelDescription->Text = L"No Text file Opened or Created";
			this->labelDescription->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBoxUserInput
			// 
			this->textBoxUserInput->BackColor = System::Drawing::Color::Black;
			this->textBoxUserInput->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxUserInput->ForeColor = System::Drawing::Color::White;
			this->textBoxUserInput->Location = System::Drawing::Point(84, 282);
			this->textBoxUserInput->Name = L"textBoxUserInput";
			this->textBoxUserInput->Size = System::Drawing::Size(229, 26);
			this->textBoxUserInput->TabIndex = 6;
			this->textBoxUserInput->Text = L"Please enter a command here.";
			// 
			// openFileDialogFilePath
			// 
			this->openFileDialogFilePath->Filter = L"Text Files (.txt)| *.txt*";
			// 
			// saveFileDialogFilePath
			// 
			this->saveFileDialogFilePath->CreatePrompt = true;
			this->saveFileDialogFilePath->Filter = L"Text Files (.txt)| *.txt*";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 742);
			this->Controls->Add(this->textBoxUserInput);
			this->Controls->Add(this->labelDescription);
			this->Controls->Add(this->labelTitle);
			this->Controls->Add(this->richTextBoxIO);
			this->Controls->Add(this->buttonQuit);
			this->Controls->Add(this->buttonSubmit);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"Program II";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion

		////////////////////////////////////////////////////////////////////
		//
		//				DECLARE GLOBAL VARIABLES/OBJECTS
		//
		////////////////////////////////////////////////////////////////////

		StreamReader^ sr;
		StreamWriter^ sw;

		
		String^ filePath;
		String^ fileName;

		enum class Command { intial = -1, create, write, read, open, append, help };
		
		bool writeMode = false;

		////////////////////////////////////////////////////////////////////
	private: System::Void buttonSubmit_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		String^ readString;
		Command commandLetter = Command::intial;
		String^ userInput;

		userInput = textBoxUserInput->Text;

		if (writeMode)
		{

			sw = File::AppendText(filePath);
	
			if (userInput->ToLower() == "/end") // /end is the sentinal
			{
				writeMode = false;
				richTextBoxIO->Clear();
				richTextBoxIO->Text = "Writing to disk complete...";
			}
			else
			{
				sw->WriteLine(userInput);
				richTextBoxIO->Text += userInput + "\n";
			}

			sw->Close();
		}

		else
		{
			if (userInput->Length == 1)
			{
				if (userInput->ToLower() == "c")
				{
					commandLetter = Command::create;
				}

				if (userInput->ToLower() == "o")
				{
					commandLetter = Command::open;
				}

				if (userInput->ToLower() == "r")
				{
					commandLetter = Command::read;
				}

				if (userInput->ToLower() == "w")
				{
					commandLetter = Command::write;
				}
				if (userInput == "?")
				{
					commandLetter = Command::help;
				}
			}

			switch (commandLetter)
			{
			case Command::create:

				saveFileDialogFilePath->ShowDialog();
				filePath = saveFileDialogFilePath->FileName;
				if (filePath->IndexOf(".txt") > -1) // IndexOf will return a -1 if .txt is not in the string
				{
					sw = gcnew StreamWriter(filePath);
				}
				else
				{
					sw = gcnew StreamWriter(filePath + ".txt");
				}

				sw->Close();
				labelDescription->Text = Path::GetFileName(filePath) + " has been created.";

				break;
			case Command::open:

				openFileDialogFilePath->ShowDialog();
				filePath = openFileDialogFilePath->FileName;
				labelDescription->Text = Path::GetFileName(filePath) + " has been opened.";

				break;
			case Command::read:

				if (filePath == nullptr)
				{
					richTextBoxIO->Clear();
					richTextBoxIO->Text = "Please open or create a file before reading.";
				}

				else
				{
					sr = gcnew StreamReader(filePath);
					richTextBoxIO->Clear();

					while ((readString = sr->ReadLine()) != nullptr)
					{
						richTextBoxIO->Text += readString + "\n";
					}

					sr->Close();
				}

				break;
			case Command::write:

				if (filePath == nullptr)
				{
					richTextBoxIO->Clear();
					richTextBoxIO->Text = "Please open or create a file before writing.";
				}

				else
				{
					writeMode = true;
					richTextBoxIO->Clear();
					richTextBoxIO->Text = "Write Mode activated!\n"
						+ "Please enter a line of text to write.\n"
						+ "To end writing to disk enter the sentinal \"/end\" without quotes.";
					textBoxUserInput->Text = "Enter text here";
				}

				break;
			case Command::help:

				richTextBoxIO->Clear();
				richTextBoxIO->Text = "List of commands: \n"
									+ "C : Creates a new text file\n"
									+ "O : Opens an existing text file\n"
									+ "R : Reads a text file that has been opened\n"
									+ "W : Writes to a text file that has been opened\n"
									+ "? : Brings up this list of commands\n";
				richTextBoxIO->Text +="Other useful information:\n"
									+ "Write will automatically append the current textfile. If you want to overwrite a textfile "
									+ "use the C command to create a new text file and use the same name. It will overwrite the file "
									+ " and create a blank text file."; 

				break;
			default:

				richTextBoxIO->Clear();
				richTextBoxIO->Text = userInput + " is not a valid command in command mode. \nPlease enter ? for help." ;
				break;
			}
		}


	}
};
}
