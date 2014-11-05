

/**************************************************************
***************************************************************
***************************************************************

ID INFORMATION

Programmers		        :Laithe Marshall
Assignment #		    :Program 2
Assignment Name		    :File IO IO
Course # and Title		:CISC 192 - C++
Class Meeting Time		:MW 9:35 - 12:45
Instructor			    :Professor Forman
Hours			        :15
Difficulty			    :3
Completion Date		    :November/04/2014
Project Name		    :Program2

***************************************************************
***************************************************************
CUSTOM DEFINED FUNCTIONS

announceWriteMode
convertCommand
createTextFile
displayHelp
farewell
openTextFile
readTextFile
sortAlpha
stringComparison
writeTextFile

***************************************************************
***************************************************************
EVENT-DRIVEN FUNCTIONS

buttonSubmit_Click
buttonQuit_Click

***************************************************************
***************************************************************
PROGRAM DESCRIPTION
This program displays a brief welcome message
allows a user to read and write to text files that
they create or open. The program also allows a user to alphabetically
sort a text file and read the sorted file. When the user quits the 
program displays in a message box a farewell message,
followed by ID information, credits, media, and stars in their own
message box.


***************************************************************
***************************************************************

CREDITS

Acknowledge those who helped you and whom you helped
Remember the “triangle of learning”

Thanks for assistance and inspiration from:

Thanks to Professor Forman for creating TDHOs.

Thanks for the opportunity to assist and inspire:
Falamata with enumeration
Rafael with I/O

***************************************************************
***************************************************************

MEDIA

Music
None

Images
"World" by Leah Marshall Sun Background Image
http://fc01.deviantart.net/fs71/f/2012/033/f/1/world_by_0ryoku0-d4ogz1u.jpg

***************************************************************
***************************************************************
**************************************************************/




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
	private: System::Windows::Forms::PictureBox^  pictureBoxAlignment;

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
			this->pictureBoxAlignment = (gcnew System::Windows::Forms::PictureBox());
			this->labelTitle = (gcnew System::Windows::Forms::Label());
			this->labelDescription = (gcnew System::Windows::Forms::Label());
			this->textBoxUserInput = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialogFilePath = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialogFilePath = (gcnew System::Windows::Forms::SaveFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxAlignment))->BeginInit();
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
			this->buttonQuit->Click += gcnew System::EventHandler(this, &MyForm::buttonQuit_Click);
			// 
			// richTextBoxIO
			// 
			this->richTextBoxIO->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBoxIO->Location = System::Drawing::Point(354, 174);
			this->richTextBoxIO->MaximumSize = System::Drawing::Size(350, 400);
			this->richTextBoxIO->MinimumSize = System::Drawing::Size(350, 400);
			this->richTextBoxIO->Name = L"richTextBoxIO";
			this->richTextBoxIO->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->richTextBoxIO->Size = System::Drawing::Size(350, 400);
			this->richTextBoxIO->TabIndex = 2;
			this->richTextBoxIO->Text = resources->GetString(L"richTextBoxIO.Text");
			// 
			// pictureBoxAlignment
			// 
			this->pictureBoxAlignment->BackColor = System::Drawing::Color::Transparent;
			this->pictureBoxAlignment->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBoxAlignment->Location = System::Drawing::Point(0, 0);
			this->pictureBoxAlignment->Name = L"pictureBoxAlignment";
			this->pictureBoxAlignment->Size = System::Drawing::Size(1008, 742);
			this->pictureBoxAlignment->TabIndex = 3;
			this->pictureBoxAlignment->TabStop = false;
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
			this->labelDescription->Location = System::Drawing::Point(12, 99);
			this->labelDescription->Name = L"labelDescription";
			this->labelDescription->Size = System::Drawing::Size(359, 33);
			this->labelDescription->TabIndex = 5;
			this->labelDescription->Text = L"No text file opened or created.";
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
			this->Controls->Add(this->pictureBoxAlignment);
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"Program II";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxAlignment))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion

		////////////////////////////////////////////////////////////////////
		//
		//				DECLARE GLOBAL CONSTANTS
		//
		////////////////////////////////////////////////////////////////////

		const String^ MY_NAME = "Laithe";

		////////////////////////////////////////////////////////////////////

		////////////////////////////////////////////////////////////////////
		//
		//				DECLARE GLOBAL VARIABLES/OBJECTS
		//
		////////////////////////////////////////////////////////////////////

		StreamReader^ sr;
		StreamWriter^ sw;


		String^ filePath;
		String^ fileName;

		enum class Command { initial = -1, create, write, read, open, help, sort };

		bool songPlaying = false;
		bool writeMode = false;

		////////////////////////////////////////////////////////////////////

		////////////////////////////////////////////////////////////////////
		//
		//				START CUSTOM DEFINED FUNCTIONS
		//
		////////////////////////////////////////////////////////////////////



		/**************************************************************

		NAME: announceWriteMode

		DESCRIPTION: Displays to the user that write mode has begun

		PRECONDITIONS: None

		POSTCONDITIONS: None

		CALLED BY: buttonSubmit_click

		CALLS: None

		**************************************************************/

		void announceWriteMode()
		{
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
				labelDescription->Text = "Writing to " + Path::GetFileName(filePath) + ".";
			}
		}

		/**************************************************************

			NAME: convertCommand

			DESCRIPTION: converts a user inputted string to a Command

			PRECONDITIONS: the string is inputed by the user

			POSTCONDITIONS: returns a Command based on the string the user entered

			CALLED BY: buttonSubmit_click

			CALLS: None

		**************************************************************/

		Command convertCommand(String^ userInput)
		{
			if (userInput->ToLower() == "c")
			{
				return Command::create;
			}

			else if (userInput->ToLower() == "o")
			{
				return Command::open;
			}

			else if (userInput->ToLower() == "r")
			{
				return Command::read;
			}

			else if (userInput->ToLower() == "s")
			{
				return Command::sort;
			}

			else if (userInput->ToLower() == "w")
			{
				return Command::write;
			}
			else if (userInput == "?")
			{
				return Command::help;
			}
			else
			{
				return Command::initial;
			}
		}


		/**************************************************************

			NAME: createTextFile

			DESCRIPTION: creates an empty text file based on the path the user chooses

			PRECONDITIONS: The user chooses a valid path from the dialog box

			POSTCONDITIONS: see description

			CALLED BY: buttonSubmit_Click

			CALLS: None

		**************************************************************/


		void createTextFile()
		{
			saveFileDialogFilePath->ShowDialog();
			filePath = saveFileDialogFilePath->FileName;
			if (filePath->IndexOf(".txt") > -1) // IndexOf will return a -1 if .txt is not in the string
			{
				sw = gcnew StreamWriter(filePath);
			}
			else
			{
				filePath += ".txt";
				sw = gcnew StreamWriter(filePath);
			}

			sw->Close();
			if (filePath != nullptr)
			{
				labelDescription->Text = Path::GetFileName(filePath) + " has been created.";
			}
		}


		/**************************************************************

			NAME: displayHelp

			DESCRIPTION: Displays a list of commands for the program and 
			other helpful information

			PRECONDITIONS: None

			POSTCONDITIONS: None

			CALLED BY: buttonSubmit_Click

			CALLS: None

		**************************************************************/


		void displayHelp()
		{
			richTextBoxIO->Clear();
			richTextBoxIO->Text = "List of commands: \n"
				+ "C : Creates a new text file\n"
				+ "O : Opens an existing text file\n"
				+ "R : Reads a text file that has been opened\n"
				+ "S : Sorts a text file alphabetically and displays the alphabetized version\n"
				+ "W : Writes to a text file that has been opened\n"
				+ "? : Brings up this list of commands\n\n";
			richTextBoxIO->Text += "Other useful information:\n"
				+ "Write will automatically append the current textfile. If you want to overwrite a textfile "
				+ "use the C command to create a new text file and use the same name. It will overwrite the file "
				+ "and create a blank text file with the same name.\n\n"
				+ "When you open or create a file the previous file is closed.";
		}

		/**************************************************************

		NAME: farewell

		DESCRIPTION: Displays a farewell message, ID information, Credits, Media, and Stars in message boxes.
		farewell then closes the form.

		PRECONDITIONS: None

		POSTCONDITIONS: None

		CALLED BY: buttonQuit_Click

		CALLS: None

		**************************************************************/

		void farewell()
		{
			////////////////////////////////////////////////////////////////////
			//
			//				DECLARE LOCAL VARIABLES/OBJECTS
			//
			////////////////////////////////////////////////////////////////////

			String^ message;

			////////////////////////////////////////////////////////////////////


			MessageBox::Show(
				"Thank you for using " + MY_NAME + "'s Text File I/O!",
				"SEE YOU SOON!" // message box caption
				);

			sr = gcnew StreamReader("..//Farewell/ID_info.txt");
			message = sr->ReadToEnd();
			sr->Close();

			MessageBox::Show(
				message,
				"ID INFORMATION" // message box caption
				);

			sr = gcnew StreamReader("..//Farewell/Credits.txt");
			message = sr->ReadToEnd();
			sr->Close();

			MessageBox::Show(
				message,
				"CREDITS" // message box caption
				);

			sr = gcnew StreamReader("..//Farewell/Media.txt");
			message = sr->ReadToEnd();
			sr->Close();

			MessageBox::Show(
				message,
				"MEDIA" // message box caption
				);

			sr = gcnew StreamReader("..//Farewell/Stars.txt");
			message = sr->ReadToEnd();
			sr->Close();

			MessageBox::Show(

				message,
				"STARS" // message box caption
				);

			Close();

		}


		/**************************************************************

			NAME: openTextFile

			DESCRIPTION: opens a text file based on a user selected path

			PRECONDITIONS: The user chooses a valid path in the dialog box

			POSTCONDITIONS: None

			CALLED BY: buttonQuit_Click

			CALLS: None

		**************************************************************/

		void openTextFile()
		{
			openFileDialogFilePath->ShowDialog();
			filePath = openFileDialogFilePath->FileName;
			if (filePath != nullptr)
			{
				labelDescription->Text = Path::GetFileName(filePath) + " has been opened.";
			}

		}

		/**************************************************************

			NAME: readTextFile

			DESCRIPTION: reads and displays a text file line by line

			PRECONDITIONS: a valid file path has been choosen

			POSTCONDITIONS: see description

			CALLED BY: buttonSubmit_Click

			CALLS: None

		**************************************************************/

		void readTextFile()
		{
			////////////////////////////////////////////////////////////////////
			//
			//				DECLARE LOCAL VARIABLES/OBJECTS
			//
			////////////////////////////////////////////////////////////////////

			String^ readString;

			////////////////////////////////////////////////////////////////////

			if (filePath == nullptr)
			{
				richTextBoxIO->Clear();
				richTextBoxIO->Text = "Please open or create a file before reading.";
			}

			else
			{
				sr = gcnew StreamReader(filePath);
				richTextBoxIO->Clear();
				labelDescription->Text = "Reading " + Path::GetFileName(filePath) + ".";

				while ((readString = sr->ReadLine()) != nullptr)
				{
					richTextBoxIO->Text += readString + "\n";
				}

				sr->Close();
			}
		}

		/**************************************************************

			NAME: sortAlpha

			DESCRIPTION: reads a text file and displays the lines in 
			alphabetical order. If numbers are included it will sort them
			based on the numerical character codes and not the value of the
			number shown.

			PRECONDITIONS: A valid textfile path has been choosen

			POSTCONDITIONS: None

			CALLED BY: buttonSubmit_Click

			CALLS: None

			**************************************************************/

		void sortAlpha()
		{
			////////////////////////////////////////////////////////////////////
			//
			//				DECLARE LOCAL VARIABLES/OBJECTS
			//
			////////////////////////////////////////////////////////////////////

			ArrayList stringArray; // Dynamically creates a list objects similiar to an array but can dynamically change in size
			String^ tempString = "you should not see this";

			////////////////////////////////////////////////////////////////////
			int index = 0;
			if (filePath == nullptr)
			{
				richTextBoxIO->Clear();
				richTextBoxIO->Text = "Please open or create a file before sorting alphabetically.";
			}
			else
			{
				sr = gcnew StreamReader(filePath);
				richTextBoxIO->Clear();
				labelDescription->Text = "Sorting " + Path::GetFileName(filePath) + ".";

				while ((tempString =sr->ReadLine()) != nullptr)
				{
					stringArray.Add(tempString);
					index++;
				}
				if (stringArray.Count != 0)
				{
					stringArray.Sort();
					for each (String^ str in stringArray)
					{
						richTextBoxIO->Text += str + "\n";
					}
				}
				else
				{
					richTextBoxIO->Text = "There is nothing in this file!";
				}
			}

			sr->Close();

		}

		/**************************************************************

			NAME: stringComparison

			DESCRIPTION: compares two strings to see if they are the same
			and returns the bool true if they are the same and false if they are not.

			PRECONDITIONS: a string is sent to the function

			POSTCONDITIONS: See description
			 
			CALLED BY: writeTextFile

			CALLS: None

		**************************************************************/


		bool stringComparison(String^ dynamicString)
		{
			////////////////////////////////////////////////////////////////////
			//
			//				DECLARE LOCAL VARIABLES/OBJECTS
			//
			////////////////////////////////////////////////////////////////////

			String^ staticString = "Write Mode activated!\n"
				+ "Please enter a line of text to write.\n"
				+ "To end writing to disk enter the sentinal \"/end\" without quotes.";

			////////////////////////////////////////////////////////////////////

			return dynamicString->Equals(staticString);
		}

		/**************************************************************

			NAME: writeTextFile

			DESCRIPTION: writes a user inputted string to a textfile
			on a single line until the sentinal /end is entered in which
			the function will close the file.

			PRECONDITIONS: function requires a string entered by a user

			POSTCONDITIONS: file is written

			CALLED BY: buttonSubmit_Click

			CALLS: stringComparison

		**************************************************************/



		void writeTextFile(String^ userInput)
		{
			if (stringComparison(richTextBoxIO->Text))
			{
				richTextBoxIO->Clear();
			}

			sw = File::AppendText(filePath);

			if (userInput->ToLower() == "/end") // /end is the sentinal
			{
				writeMode = false;

				richTextBoxIO->Clear();
				richTextBoxIO->Text = "Writing to disk complete...";

				labelDescription->Text = Path::GetFileName(filePath) + " is open.";
			}
			else
			{
				sw->WriteLine(userInput);
				richTextBoxIO->Text += userInput + "\n";
			}

			sw->Close();
		}

		////////////////////////////////////////////////////////////////////
		//
		//				END CUSTOM DEFINED FUNCTIONS
		//
		////////////////////////////////////////////////////////////////////

		////////////////////////////////////////////////////////////////////
		//
		//				START EVENT DRIVEN FUNCTIONS
		//
		////////////////////////////////////////////////////////////////////


		/**************************************************************

			NAME: buttonSubmit_Click

			DESCRIPTION: Gets a string input from the user and performs a function
			based on the string input

		**************************************************************/


	private: System::Void buttonSubmit_Click(System::Object^  sender, System::EventArgs^  e)
	{

		////////////////////////////////////////////////////////////////////
		//
		//				DECLARE LOCAL VARIABLES/OBJECTS
		//
		////////////////////////////////////////////////////////////////////

		System::Media::SoundPlayer sndPlayer("..//Media/Music/Senju Akira - Crime and Punishment.wav");

		Command commandLetter = Command::initial;
		String^ userInput;

		////////////////////////////////////////////////////////////////////

		userInput = textBoxUserInput->Text;

		if (!songPlaying)
		{
			sndPlayer.PlayLooping();
			songPlaying = true;
		}

		if (writeMode)
		{
			writeTextFile(userInput);
		}

		else
		{
			if (userInput->Length == 1)
			{
				commandLetter = convertCommand(userInput);
			}

			switch (commandLetter)
			{
			case Command::create:

				createTextFile();

				break;
			case Command::open:

				openTextFile();

				break;
			case Command::read:

				readTextFile();

				break;
			case Command::sort:
				
				sortAlpha();

				break;
			case Command::write:

				announceWriteMode();

				break;
			case Command::help:

				displayHelp();

				break;
			default:

				if (filePath != nullptr)
				{
					labelDescription->Text = Path::GetFileName(filePath) + " is open.";
				}

				richTextBoxIO->Clear();
				richTextBoxIO->Text = userInput + " is not a valid command in command mode. \nPlease enter ? for help.";
				break;
			}
		}


	}


			 /**************************************************************

				 NAME: buttonQuit_Click

				 DESCRIPTION: runs the farewell function

			**************************************************************/

	private: System::Void buttonQuit_Click(System::Object^  sender, System::EventArgs^  e)
	{
		farewell();
	}
			 ////////////////////////////////////////////////////////////////////
			 //
			 //				END EVENT DRIVEN FUNCTIONS
			 //
			 ////////////////////////////////////////////////////////////////////
	};
}
