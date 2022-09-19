#pragma once

namespace mypaint {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;

	using namespace System::Collections::Generic;


	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

			saveFileDialog1->Filter = "Файлы изображения (*.bmp)|*.bmp";
		}

	protected:

		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:

	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Button^ buttonPencil;
	private: System::Windows::Forms::Button^ buttonCircle;
	private: System::Windows::Forms::Button^ buttonSave;
	private: System::Windows::Forms::Button^ buttonEraser;
	private: System::Windows::Forms::Button^ buttonSquare;
	private: System::Windows::Forms::Button^ buttonColor;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownEraser;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownPencil;
	private: System::Windows::Forms::Button^ buttonCross;
	private: System::Windows::Forms::Button^ buttonVertical;
	private: System::Windows::Forms::Button^ buttonDiagCross;
	private: System::Windows::Forms::Button^ buttonHorisontal;
	private: System::Windows::Forms::Button^ buttonDiag;
	private: System::Windows::Forms::Button^ buttonSolid;
	private: System::Windows::Forms::Label^ label1;





	private: System::Windows::Forms::GroupBox^ groupBox_ToolBar;

	private:

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->buttonPencil = (gcnew System::Windows::Forms::Button());
			this->buttonCircle = (gcnew System::Windows::Forms::Button());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->buttonEraser = (gcnew System::Windows::Forms::Button());
			this->buttonSquare = (gcnew System::Windows::Forms::Button());
			this->buttonColor = (gcnew System::Windows::Forms::Button());
			this->numericUpDownEraser = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownPencil = (gcnew System::Windows::Forms::NumericUpDown());
			this->buttonCross = (gcnew System::Windows::Forms::Button());
			this->buttonVertical = (gcnew System::Windows::Forms::Button());
			this->buttonDiagCross = (gcnew System::Windows::Forms::Button());
			this->buttonHorisontal = (gcnew System::Windows::Forms::Button());
			this->buttonDiag = (gcnew System::Windows::Forms::Button());
			this->buttonSolid = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox_ToolBar = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownEraser))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPencil))->BeginInit();
			this->groupBox_ToolBar->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(309, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(916, 656);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseUp);
			// 
			// buttonPencil
			// 
			this->buttonPencil->Location = System::Drawing::Point(7, 21);
			this->buttonPencil->Name = L"buttonPencil";
			this->buttonPencil->Size = System::Drawing::Size(88, 28);
			this->buttonPencil->TabIndex = 0;
			this->buttonPencil->Text = L"Карандаш";
			this->buttonPencil->UseVisualStyleBackColor = true;
			this->buttonPencil->Click += gcnew System::EventHandler(this, &MyForm::buttonPencil_Click);
			// 
			// buttonCircle
			// 
			this->buttonCircle->Location = System::Drawing::Point(7, 176);
			this->buttonCircle->Name = L"buttonCircle";
			this->buttonCircle->Size = System::Drawing::Size(94, 28);
			this->buttonCircle->TabIndex = 5;
			this->buttonCircle->Text = L"Круг";
			this->buttonCircle->UseVisualStyleBackColor = true;
			this->buttonCircle->Click += gcnew System::EventHandler(this, &MyForm::buttonCircle_Click);
			// 
			// buttonSave
			// 
			this->buttonSave->Location = System::Drawing::Point(44, 614);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(140, 36);
			this->buttonSave->TabIndex = 7;
			this->buttonSave->Text = L"Сохранить";
			this->buttonSave->UseVisualStyleBackColor = true;
			this->buttonSave->Click += gcnew System::EventHandler(this, &MyForm::buttonSave_Click);
			// 
			// buttonEraser
			// 
			this->buttonEraser->Location = System::Drawing::Point(7, 210);
			this->buttonEraser->Name = L"buttonEraser";
			this->buttonEraser->Size = System::Drawing::Size(98, 28);
			this->buttonEraser->TabIndex = 9;
			this->buttonEraser->Text = L"Ластик";
			this->buttonEraser->UseVisualStyleBackColor = true;
			this->buttonEraser->Click += gcnew System::EventHandler(this, &MyForm::buttonEraser_Click);
			// 
			// buttonSquare
			// 
			this->buttonSquare->Location = System::Drawing::Point(107, 176);
			this->buttonSquare->Name = L"buttonSquare";
			this->buttonSquare->Size = System::Drawing::Size(156, 28);
			this->buttonSquare->TabIndex = 10;
			this->buttonSquare->Text = L"Прямоугольник";
			this->buttonSquare->UseVisualStyleBackColor = true;
			this->buttonSquare->Click += gcnew System::EventHandler(this, &MyForm::buttonSquare_Click);
			// 
			// buttonColor
			// 
			this->buttonColor->Location = System::Drawing::Point(7, 244);
			this->buttonColor->Name = L"buttonColor";
			this->buttonColor->Size = System::Drawing::Size(107, 28);
			this->buttonColor->TabIndex = 11;
			this->buttonColor->Text = L"Цвет";
			this->buttonColor->UseVisualStyleBackColor = true;
			this->buttonColor->Click += gcnew System::EventHandler(this, &MyForm::buttonColor_Click);
			// 
			// numericUpDownEraser
			// 
			this->numericUpDownEraser->Location = System::Drawing::Point(111, 214);
			this->numericUpDownEraser->Name = L"numericUpDownEraser";
			this->numericUpDownEraser->Size = System::Drawing::Size(152, 22);
			this->numericUpDownEraser->TabIndex = 14;
			this->numericUpDownEraser->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDownEraser_ValueChanged);
			// 
			// numericUpDownPencil
			// 
			this->numericUpDownPencil->Location = System::Drawing::Point(101, 27);
			this->numericUpDownPencil->Name = L"numericUpDownPencil";
			this->numericUpDownPencil->Size = System::Drawing::Size(162, 22);
			this->numericUpDownPencil->TabIndex = 15;
			this->numericUpDownPencil->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDownPencil_ValueChanged);
			// 
			// buttonCross
			// 
			this->buttonCross->Location = System::Drawing::Point(173, 144);
			this->buttonCross->Name = L"buttonCross";
			this->buttonCross->Size = System::Drawing::Size(90, 26);
			this->buttonCross->TabIndex = 16;
			this->buttonCross->Text = L"В клетку";
			this->buttonCross->UseVisualStyleBackColor = true;
			this->buttonCross->Click += gcnew System::EventHandler(this, &MyForm::buttonCross_Click);
			// 
			// buttonVertical
			// 
			this->buttonVertical->Location = System::Drawing::Point(150, 112);
			this->buttonVertical->Name = L"buttonVertical";
			this->buttonVertical->Size = System::Drawing::Size(113, 26);
			this->buttonVertical->TabIndex = 17;
			this->buttonVertical->Text = L"Вертикальная";
			this->buttonVertical->UseVisualStyleBackColor = true;
			this->buttonVertical->Click += gcnew System::EventHandler(this, &MyForm::buttonVertical_Click);
			// 
			// buttonDiagCross
			// 
			this->buttonDiagCross->Location = System::Drawing::Point(7, 144);
			this->buttonDiagCross->Name = L"buttonDiagCross";
			this->buttonDiagCross->Size = System::Drawing::Size(160, 26);
			this->buttonDiagCross->TabIndex = 18;
			this->buttonDiagCross->Text = L"Диагональная клетка";
			this->buttonDiagCross->UseVisualStyleBackColor = true;
			this->buttonDiagCross->Click += gcnew System::EventHandler(this, &MyForm::buttonDiagCross_Click);
			// 
			// buttonHorisontal
			// 
			this->buttonHorisontal->Location = System::Drawing::Point(7, 112);
			this->buttonHorisontal->Name = L"buttonHorisontal";
			this->buttonHorisontal->Size = System::Drawing::Size(137, 26);
			this->buttonHorisontal->TabIndex = 19;
			this->buttonHorisontal->Text = L"Горизонтальная";
			this->buttonHorisontal->UseVisualStyleBackColor = true;
			this->buttonHorisontal->Click += gcnew System::EventHandler(this, &MyForm::buttonHorisontal_Click);
			// 
			// buttonDiag
			// 
			this->buttonDiag->Location = System::Drawing::Point(107, 80);
			this->buttonDiag->Name = L"buttonDiag";
			this->buttonDiag->Size = System::Drawing::Size(156, 26);
			this->buttonDiag->TabIndex = 20;
			this->buttonDiag->Text = L"Диагональная";
			this->buttonDiag->UseVisualStyleBackColor = true;
			this->buttonDiag->Click += gcnew System::EventHandler(this, &MyForm::buttonDiag_Click);
			// 
			// buttonSolid
			// 
			this->buttonSolid->Location = System::Drawing::Point(7, 80);
			this->buttonSolid->Name = L"buttonSolid";
			this->buttonSolid->Size = System::Drawing::Size(94, 26);
			this->buttonSolid->TabIndex = 21;
			this->buttonSolid->Text = L"Сплошная";
			this->buttonSolid->UseVisualStyleBackColor = true;
			this->buttonSolid->Click += gcnew System::EventHandler(this, &MyForm::buttonSolid_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 17);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Кисть";
			// 
			// groupBox_ToolBar
			// 
			this->groupBox_ToolBar->Controls->Add(this->label1);
			this->groupBox_ToolBar->Controls->Add(this->buttonSolid);
			this->groupBox_ToolBar->Controls->Add(this->buttonDiag);
			this->groupBox_ToolBar->Controls->Add(this->buttonHorisontal);
			this->groupBox_ToolBar->Controls->Add(this->buttonDiagCross);
			this->groupBox_ToolBar->Controls->Add(this->buttonVertical);
			this->groupBox_ToolBar->Controls->Add(this->buttonCross);
			this->groupBox_ToolBar->Controls->Add(this->numericUpDownPencil);
			this->groupBox_ToolBar->Controls->Add(this->numericUpDownEraser);
			this->groupBox_ToolBar->Controls->Add(this->buttonColor);
			this->groupBox_ToolBar->Controls->Add(this->buttonSquare);
			this->groupBox_ToolBar->Controls->Add(this->buttonEraser);
			this->groupBox_ToolBar->Controls->Add(this->buttonSave);
			this->groupBox_ToolBar->Controls->Add(this->buttonCircle);
			this->groupBox_ToolBar->Controls->Add(this->buttonPencil);
			this->groupBox_ToolBar->Location = System::Drawing::Point(12, 12);
			this->groupBox_ToolBar->Name = L"groupBox_ToolBar";
			this->groupBox_ToolBar->Size = System::Drawing::Size(291, 656);
			this->groupBox_ToolBar->TabIndex = 1;
			this->groupBox_ToolBar->TabStop = false;
			this->groupBox_ToolBar->Text = L"Панель инструментов";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1237, 680);
			this->Controls->Add(this->groupBox_ToolBar);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"Графическое приложение";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownEraser))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPencil))->EndInit();
			this->groupBox_ToolBar->ResumeLayout(false);
			this->groupBox_ToolBar->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		Graphics^ canvas;
		List <Point>^ points;
		Pen^ pen;
		bool draw;
		Bitmap^ background;
		Color color;
		Bitmap^ texture;
		float size;
		bool clearAll;
		String^ filename;
		int statePen;
		HatchBrush^ hbrush;
		SolidBrush^ sbrush = gcnew SolidBrush(Color::Black);
		int x1_pr, y1_pr, x1_el1, y1_el1, x1_el2, y1_el2, x2_pr, x1_el3, y1_el3, y2_pr, x2_el1, y2_el1, x2_el2, y2_el2, x2_el3, y2_el3;

private: System::Void buttonPencil_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonCircle_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonSquare_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonEraser_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonColor_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void buttonSave_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void numericUpDownPencil_ValueChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void numericUpDownEraser_ValueChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
private: System::Void pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
private: System::Void pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
private: System::Void pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);

private: System::Void buttonSolid_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonDiag_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonHorisontal_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonVertical_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonDiagCross_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonCross_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
