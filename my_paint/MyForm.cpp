#include "MyForm.h"

#include <Windows.h>
#include <stdio.h>
#include <windef.h>
#include <algorithm>
#include <string>

#pragma comment(lib, "user32.lib")

using namespace System;
using namespace System::Windows::Forms;

int p_size;
int l_size;
int type1;

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	mypaint::MyForm form;
	Application::Run(% form);
}

struct Vector2D {
	int X,
		Y;
};
Vector2D mousePosition;


System::Void mypaint::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	p_size = 5; //ширина карандаша
	pen = gcnew Pen(Color::Black, p_size);

	sbrush = gcnew SolidBrush(Color::Black);
	l_size = 5; //ширина ластика
	type1 = 1; //тип рисовки
	points = gcnew List <Point>(); //создается список точек для рисования
	draw = false; // пока что рисовать нельзя(пока не будет маус даун)
	Bitmap^ Img = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height); //создается изображение
	canvas = Graphics::FromImage(Img); //создается канва
	pictureBox1->Image = Img;
	pictureBox1->BackColor = Color::White;//цвет фона

	filename = "openFileDialog1"; //имя файла

	return System::Void();
}

System::Void mypaint::MyForm::buttonSolid_Click(System::Object^ sender, System::EventArgs^ e) {
	type1 = 2;
	sbrush = gcnew SolidBrush(color);
	return System::Void();
}
System::Void mypaint::MyForm::buttonDiag_Click(System::Object^ sender, System::EventArgs^ e) {
	type1 = 6;
	hbrush = gcnew HatchBrush(HatchStyle::BackwardDiagonal, color);

	return System::Void();
}
System::Void mypaint::MyForm::buttonHorisontal_Click(System::Object^ sender, System::EventArgs^ e) {
	type1 = 6;
	hbrush = gcnew HatchBrush(HatchStyle::Horizontal, color);

	return System::Void();
}
System::Void mypaint::MyForm::buttonVertical_Click(System::Object^ sender, System::EventArgs^ e) {
	type1 = 6;
	hbrush = gcnew HatchBrush(HatchStyle::Vertical, color);

	return System::Void();
}
System::Void mypaint::MyForm::buttonDiagCross_Click(System::Object^ sender, System::EventArgs^ e) {
	type1 = 6;
	hbrush = gcnew HatchBrush(HatchStyle::DiagonalCross, color);

	return System::Void();
}
System::Void mypaint::MyForm::buttonCross_Click(System::Object^ sender, System::EventArgs^ e) {
	type1 = 6;
	hbrush = gcnew HatchBrush(HatchStyle::Cross, color);

	return System::Void();
}
System::Void mypaint::MyForm::buttonPencil_Click(System::Object^ sender, System::EventArgs^ e) {
	if (type1 != 1) {
		type1 = 1;
	}
}


System::Void mypaint::MyForm::buttonCircle_Click(System::Object^ sender, System::EventArgs^ e) {
	if (type1 != 3) {
		type1 = 3;
	}
}
System::Void mypaint::MyForm::buttonSquare_Click(System::Object^ sender, System::EventArgs^ e) {
	if (type1 != 4) {
		type1 = 4;
	}
}
System::Void mypaint::MyForm::buttonEraser_Click(System::Object^ sender, System::EventArgs^ e) {
	if (type1 != 5) {

		type1 = 5;

		pen = gcnew Pen(Color::White, l_size);
	}
}
System::Void mypaint::MyForm::buttonColor_Click(System::Object^ sender, System::EventArgs^ e) {
	colorDialog1->ShowDialog();
	color = colorDialog1->Color;

	buttonColor->BackColor = color;

	pen = gcnew Pen(color, size);
//	brush = gcnew Brush(Style, color);

	return System::Void();
}
System::Void mypaint::MyForm::buttonSave_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ fname;
	saveFileDialog1->ShowDialog();
	fname = saveFileDialog1->FileName;

	if (fname == "")
		return;

	Bitmap^ img = gcnew Bitmap(pictureBox1->Image);
	img->Save(fname);

	MessageBox::Show("Сохранено по адресу \"" + fname );

	return System::Void();
}

System::Void mypaint::MyForm::pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	switch (type1){
	case 1://карандаш
		if (points->Count >> 1) {
			canvas->DrawLines(pen, points->ToArray());
		}
		break;

	case 2://сплошной кистью рисуется эллипс
		if (mousePosition.X != -1 && mousePosition.Y != -1)
			canvas->FillEllipse(sbrush, mousePosition.X, mousePosition.Y, mousePosition.X + 200, mousePosition.Y + 200);
		break;

	case 3://эллипс
		if (mousePosition.X != -1 && mousePosition.Y != -1)
			canvas->DrawEllipse(pen, mousePosition.X, mousePosition.Y, mousePosition.X + 200, mousePosition.Y + 200);
		break;

	case 4://квадрат
		if (mousePosition.X != -1 && mousePosition.Y != -1)
			canvas->DrawRectangle(pen, mousePosition.X, mousePosition.Y, mousePosition.X + 200, mousePosition.Y + 200);
		break;

	case 5://ластик
		if (points->Count >> 1) {
			canvas->DrawLines(pen, points->ToArray());
		}
		break;
	case 6://несплошной кистью рисуется эллипс
		if (mousePosition.X != -1 && mousePosition.Y != -1)
			canvas->FillEllipse(hbrush, mousePosition.X, mousePosition.Y, mousePosition.X + 200, mousePosition.Y + 200);
		break;

	default:
		break;
	}
}


System::Void mypaint::MyForm::numericUpDownPencil_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	p_size = Convert::ToSingle(numericUpDownPencil->Value);
	pen = gcnew Pen(color, p_size);

	return System::Void();
}
System::Void mypaint::MyForm::numericUpDownEraser_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	l_size = Convert::ToSingle(numericUpDownEraser->Value);
	pen = gcnew Pen(Color::White, l_size);

	return System::Void();
}


System::Void mypaint::MyForm::pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	draw = false;
	pictureBox1->Invalidate();

	mousePosition.X = -1;
	mousePosition.Y = -1;
}
System::Void mypaint::MyForm::pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (draw && points->Contains(Point(e->X, e->Y)) == false) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {

			points->Add(e->Location);
		}

		pictureBox1->Invalidate();
	}
}
System::Void mypaint::MyForm::pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	points->Clear();
	points->Add(e->Location);
	draw = true;

	pictureBox1->Invalidate();

	mousePosition.X = e->Location.X;
	mousePosition.Y = e->Location.Y;
}