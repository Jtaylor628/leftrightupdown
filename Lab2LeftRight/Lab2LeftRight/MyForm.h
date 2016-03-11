#pragma once

namespace Lab2LeftRight {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	
	struct PicLocation {
		int lc1;
		int lc2;
		int lc3;
		int lc4;

	};

	
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

	private:

		System::Drawing::Brush^ yelloBrush;		//Do not need brush
		System::Drawing::Brush^ whiteBrush;
		System::Drawing::Graphics^ g;			//creates graphics.

		
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(127, 50);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(300, 190);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(25, 317);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Left";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(136, 317);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Right";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(390, 317);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Down";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(238, 317);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Up";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(590, 406);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}

		
#pragma endregion

		
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		g = pictureBox1->CreateGraphics();
		
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		PicLocation location;
		location.lc1 = 24;
		location.lc2 = 50;
		Bitmap^ bmp = gcnew Bitmap(L"DWCeagle.bmp");
		g->DrawImage(bmp, 0, 0);

		//int x = 100, y = 0;
		pictureBox1->Location = Point(location.lc1, location.lc2);
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

		PicLocation location;
		location.lc1 = 450;
		location.lc2 = 24;
		
		Bitmap^ bmp = gcnew Bitmap(L"DWCeagle.bmp");
		g->DrawImage(bmp, 0, 0);

		//int x = 100, y = 0;
		pictureBox1->Location = Point(location.lc1, location.lc2);




	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	PicLocation location;
	location.lc1 = 243;
	location.lc2 = 240;

	Bitmap^ bmp = gcnew Bitmap(L"DWCeagle.bmp");
	g->DrawImage(bmp, 0, 0);

	//int x = 100, y = 0;
	pictureBox1->Location = Point(location.lc1, location.lc2);

}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

	PicLocation location;
	location.lc1 = 234;
	location.lc2 = 15;

	Bitmap^ bmp = gcnew Bitmap(L"DWCeagle.bmp");
	g->DrawImage(bmp, 0, 0);

	//int x = 100, y = 0;
	pictureBox1->Location = Point(location.lc1, location.lc2);
}
};
}
