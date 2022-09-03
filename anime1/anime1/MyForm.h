#pragma once
#include "Operations.h"
#include <cmath>
#include<iostream>
namespace anime1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			pbImg->Image = gcnew Bitmap(pbImg->Width, pbImg->Height);
			br = gcnew SolidBrush(Color::Black);
			pn = gcnew Pen(Color::Green, 3);
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pbImg;
	protected:

	private: System::Windows::Forms::Timer^ tmclock;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;


	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// \]
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pbImg = (gcnew System::Windows::Forms::PictureBox());
			this->tmclock = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbImg))->BeginInit();
			this->SuspendLayout();
			// 
			// pbImg
			// 
			this->pbImg->Location = System::Drawing::Point(-121, -216);
			this->pbImg->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pbImg->Name = L"pbImg";
			this->pbImg->Size = System::Drawing::Size(2200, 1200);
			this->pbImg->TabIndex = 0;
			this->pbImg->TabStop = false;
			this->pbImg->Click += gcnew System::EventHandler(this, &MyForm::pbImg_Click);
			// 
			// tmclock
			// 
			this->tmclock->Interval = 5;
			this->tmclock->Tick += gcnew System::EventHandler(this, &MyForm::tmclock_Tick);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Aqua;
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(1311, 68);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(69, 40);
			this->button1->TabIndex = 1;
			this->button1->Text = L"start";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Aqua;
			this->button2->Location = System::Drawing::Point(1311, 112);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(69, 40);
			this->button2->TabIndex = 2;
			this->button2->Text = L"stop";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1582, 1055);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pbImg);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbImg))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		SolidBrush^ br;
		Pen^ pn;
		
		
		
		array<PointF>^ noga1 = gcnew array<PointF>(3);
		array<PointF>^ noga2 = gcnew array<PointF>(3);
		array<PointF>^ noga3 = gcnew array<PointF>(3);
		array<PointF>^ fl_left = gcnew array<PointF>(7);
		array<PointF>^ fl_right = gcnew array<PointF>(9);
		array<PointF>^ dfl_left = gcnew array<PointF>(7);
		array<PointF>^ dfl_right = gcnew array<PointF>(9);
		array<float, 2>^ MPfl = gcnew array<float, 2>(3, 3);
		array<PointF>^ golova = gcnew array<PointF>(11);
		array<PointF>^ telo = gcnew array<PointF>(10);
		array<PointF>^ ruka1 = gcnew array<PointF>(7);
		array<PointF>^ ruka2 = gcnew array<PointF>(7);
		array<PointF>^ shorts = gcnew array<PointF>(12);
		array<PointF>^ golen1 = gcnew array<PointF>(7);
		array<PointF>^ golen2 = gcnew array<PointF>(5);
		array<PointF>^ pedal1 = gcnew array<PointF>(6);
		array<PointF>^ pedal2 = gcnew array<PointF>(6);
		array<PointF>^ ballkarkas = gcnew array<PointF>(8);
		array<PointF>^ ballpyat1 = gcnew array<PointF>(5);
		array<PointF>^ ballpyat2 = gcnew array<PointF>(5);
		array<PointF>^ ballpyat3 = gcnew array<PointF>(5);
		array<PointF>^ ballpyat4 = gcnew array<PointF>(5);
		array<PointF>^ obl1 = gcnew array<PointF>(20);
		array<PointF>^ obl2 = gcnew array<PointF>(20);
		array<PointF>^ obl3 = gcnew array<PointF>(20);
		array<PointF>^ shorts1 = gcnew array<PointF>(7);
		array<PointF>^ shorts2 = gcnew array<PointF>(7);

		array<PointF>^ bigkar = gcnew array<PointF>(5);
		array<PointF>^ smallkar = gcnew array<PointF>(5);
		void setObjects()
		{
			SetFile("Bigkarkas.txt", bigkar);
			SetFile("Smallkarkas.txt", smallkar);
			SetFile("oblako.txt", obl1);
			SetFile("oblako.txt", obl2);
			SetFile("oblako.txt", obl3);
			SetFile("golova.txt", golova);
			SetFile("telo.txt", telo);
			SetFile("ruka1.txt", ruka1);
			SetFile("ruka_2.txt", ruka2);
			SetFile("shorts.txt", shorts);
			SetFile("shorts1.txt", shorts1);
			SetFile("shorts2.txt", shorts2);
			SetFile("golen1.txt", golen1);
			SetFile("golen2.txt", golen2);
			SetFile("pedal1.txt", pedal1);
			SetFile("pedal2.txt", pedal2);
			SetFile("ballkarkas.txt", ballkarkas);
			SetFile("ballpyat1.txt", ballpyat1);
			SetFile("ballpyat2.txt", ballpyat2);
			SetFile("ballpyat3.txt", ballpyat3);
			SetFile("ballpyat4.txt", ballpyat4);

		}
		void setbigkarkas()
		{
			
			array<float, 2>^ temp = gcnew array<float, 2>(3, 3);
			identify_mat(temp);
			move_mat(800, 400, temp);
			/*array<float, 2>^ temp2 = gcnew array<float, 2>(3, 3);
			identify_mat(temp2);
			move_mat(479, 45, temp2);
			array<float, 2>^ temp3 = gcnew array<float, 2>(3, 3);
			identify_mat(temp3);
			move_mat(1, 10, temp3);*/
			for (int i = 0; i < 5; i++)
			{
			/*	obl1[i] = apply(obl1[i], temp2);
				obl2[i] = apply(obl2[i], temp3);*/
				bigkar[i] = apply(bigkar[i], temp);
			}

			PointF Center;
			Center.X = (bigkar[0].X + bigkar[3].X) / 2;
			Center.Y = (bigkar[0].Y + bigkar[4].Y) / 2;
			array<float, 2>^ tempy = gcnew array<float, 2>(3, 3);
			identify_mat(tempy);
			scale_mat(Center, 5, 5, tempy);
			for (int i = 0; i < 5; i++)
			{

				bigkar[i] = apply(bigkar[i], tempy);
			}

			Graphics^ gr = Graphics::FromImage(pbImg->Image);
			br->Color = Color::White;
			gr->FillPolygon(br, bigkar);
		}
		void setsmallkarkas()
		{
			array<float, 2>^ temp = gcnew array<float, 2>(3, 3);
			identify_mat(temp);
			move_mat(800, 400, temp);
			
			for (int i = 0; i < 5; i++)
			{
				
				smallkar[i] = apply(smallkar[i], temp);
			}

			PointF Center;
			Center.X = (smallkar[0].X + smallkar[3].X) / 2;
			Center.Y = (smallkar[0].Y + smallkar[4].Y) / 2;
			array<float, 2>^ tempy = gcnew array<float, 2>(3, 3);
			identify_mat(tempy);
			scale_mat(Center, 5, 5, tempy);
			for (int i = 0; i < 5; i++)
			{

				smallkar[i] = apply(smallkar[i], tempy);
			}

			Graphics^ gr = Graphics::FromImage(pbImg->Image);
			br->Color = Color::ForestGreen;
			gr->FillPolygon(br, smallkar);
		}
		void setball()
		{
			array<float, 2>^ temp = gcnew array<float, 2>(3, 3);//каркас м€ча
			identify_mat(temp);
			move_mat(-50, 595, temp);
			for (int i = 0; i < 8; i++)
			{
				ballkarkas[i] = apply(ballkarkas[i], temp);
			}
			PointF Center;
			Center.X = (ballkarkas[0].X + ballkarkas[3].X) / 2;
			Center.Y = (ballkarkas[1].Y + ballkarkas[5].Y) / 2;
			array<float, 2>^ tempy = gcnew array<float, 2>(3, 3);
			identify_mat(tempy);
			scale_mat(Center, 2, 2, tempy);
			for (int i = 0; i < 8; i++)
			{
				ballkarkas[i] = apply(ballkarkas[i], tempy);
			}

			array<float, 2>^ temp1 = gcnew array<float, 2>(3, 3);//п€тиугольник1  м€ча
			identify_mat(temp1);
			move_mat(-43, 593, temp1);
			for (int i = 0; i < 5; i++)
			{
				ballpyat1[i] = apply(ballpyat1[i], temp1);
			}
			PointF Center1;
			Center1.X = (ballpyat1[4].X + ballpyat1[2].X) / 2;
			Center1.Y = (ballpyat1[0].Y + ballpyat1[3].Y) / 2;
			array<float, 2>^ tempy1 = gcnew array<float, 2>(3, 3);
			identify_mat(tempy1);
			scale_mat(Center1, 2, 2, tempy1);
			for (int i = 0; i < 5; i++)
			{
				ballpyat1[i] = apply(ballpyat1[i], tempy1);
			}

			array<float, 2>^ temp2 = gcnew array<float, 2>(3, 3);//п€тиугольник2  м€ча
			identify_mat(temp2);
			move_mat(-43, 611, temp2);
			for (int i = 0; i < 5; i++)
			{
				ballpyat2[i] = apply(ballpyat2[i], temp2);
			}
			PointF Center2;
			Center2.X = (ballpyat2[4].X + ballpyat2[2].X) / 2;
			Center2.Y = (ballpyat2[1].Y + ballpyat2[4].Y) / 2;
			array<float, 2>^ tempy2 = gcnew array<float, 2>(3, 3);
			identify_mat(tempy2);
			scale_mat(Center2, 2, 2, tempy2);
			for (int i = 0; i < 5; i++)
			{
				ballpyat2[i] = apply(ballpyat2[i], tempy2);
			}

			array<float, 2>^ temp3 = gcnew array<float, 2>(3, 3);//п€тиугольник3  м€ча
			identify_mat(temp3);
			move_mat(-31, 601, temp3);
			for (int i = 0; i < 5; i++)
			{
				ballpyat3[i] = apply(ballpyat3[i], temp3);
			}
			PointF Center3;
			Center3.X = (ballpyat3[0].X + ballpyat3[2].X) / 2;
			Center3.Y = (ballpyat3[1].Y + ballpyat3[4].Y) / 2;
			array<float, 2>^ tempy3 = gcnew array<float, 2>(3, 3);
			identify_mat(tempy3);
			scale_mat(Center3, 2, 2, tempy3);
			for (int i = 0; i < 5; i++)
			{
				ballpyat3[i] = apply(ballpyat3[i], tempy3);
			}

			array<float, 2>^ temp4 = gcnew array<float, 2>(3, 3);//п€тиугольник4  м€ча
			identify_mat(temp4);
			move_mat(-55, 601, temp4);
			for (int i = 0; i < 5; i++)
			{
				ballpyat4[i] = apply(ballpyat4[i], temp4);
			}
			PointF Center4;
			Center4.X = (ballpyat4[0].X + ballpyat4[2].X) / 2;
			Center4.Y = (ballpyat4[1].Y + ballpyat4[3].Y) / 2;
			array<float, 2>^ tempy4 = gcnew array<float, 2>(3, 3);
			identify_mat(tempy4);
			scale_mat(Center4, 2, 2, tempy4);
			for (int i = 0; i < 5; i++)
			{
				ballpyat4[i] = apply(ballpyat4[i], tempy4);
			}


			Graphics^ gr = Graphics::FromImage(pbImg->Image);//каркас м€ча
			br->Color = Color::White;
			gr->FillClosedCurve(br, ballkarkas);

			br->Color = Color::Black;//п€тиугольник1 м€ча
			gr->FillPolygon(br, ballpyat1);

			br->Color = Color::Black;//п€тиугольник2 м€ча
			gr->FillPolygon(br, ballpyat2);

			br->Color = Color::Black;//п€тиугольник3 м€ча
			gr->FillPolygon(br, ballpyat3);

			br->Color = Color::Black;//п€тиугольник4 м€ча
			gr->FillPolygon(br, ballpyat4);

		}
		void setOblaka()
		{
			array<float, 2>^ temp = gcnew array<float, 2>(3, 3);
			identify_mat(temp);
			move_mat(279, 200, temp);
			array<float, 2>^ temp2 = gcnew array<float, 2>(3, 3);
			identify_mat(temp2);
			move_mat(479, 300, temp2);
			array<float, 2>^ temp3 = gcnew array<float, 2>(3, 3);
			identify_mat(temp3);
			move_mat(1, 300, temp3);
			for (int i = 0; i < 20; i++)
			{
				obl1[i] = apply(obl1[i], temp2);
				obl2[i] = apply(obl2[i], temp3);
				obl3[i] = apply(obl3[i], temp);
			}

			Graphics^ gr = Graphics::FromImage(pbImg->Image);
			br->Color = Color::White;
			gr->FillClosedCurve(br, obl1);
			gr->FillClosedCurve(br, obl2);
			gr->FillClosedCurve(br, obl3);
		}
		void setChel() {
			array<float, 2>^ temp = gcnew array<float, 2>(3, 3);//голова
			identify_mat(temp);
			move_mat(900, 420, temp);
			for (int i = 0; i < 11; i++)
			{
				golova[i] = apply(golova[i], temp);
			}
			PointF Center;
			Center.X = (golova[9].X + golova[2].X) / 2;
			Center.Y = (golova[0].Y + golova[6].Y) / 2;
			array<float, 2>^ tempy = gcnew array<float, 2>(3, 3);
			identify_mat(tempy);
			scale_mat(Center, 5, 5, tempy);
			for (int i = 0; i < 11; i++)
			{
				golova[i] = apply(golova[i], tempy);
			}


			array<float, 2>^ temp1 = gcnew array<float, 2>(3, 3);//тело
			identify_mat(temp1);
			move_mat(910, 480, temp1);
			for (int i = 0; i < 10; i++)
			{
				telo[i] = apply(telo[i], temp1);
			}
			PointF Center1;
			Center1.X = (telo[9].X + telo[4].X) / 2;
			Center1.Y = (telo[7].Y + telo[0].Y) / 2;
			array<float, 2>^ tempy1 = gcnew array<float, 2>(3, 3);
			identify_mat(tempy1);
			scale_mat(Center1, 5, 5, tempy1);
			for (int i = 0; i < 10; i++)
			{
				telo[i] = apply(telo[i], tempy1);
			}


			array<float, 2>^ temp2 = gcnew array<float, 2>(3, 3);//рука1
			identify_mat(temp2);
			move_mat(939, 500, temp2);
			for (int i = 0; i < 7; i++)
			{
				ruka1[i] = apply(ruka1[i], temp2);
			}
			PointF Center2;
			Center2.X = (ruka1[6].X + ruka1[1].X) / 2;
			Center2.Y = (ruka1[0].Y + ruka1[3].Y) / 2;
			array<float, 2>^ tempy2 = gcnew array<float, 2>(3, 3);
			identify_mat(tempy2);
			scale_mat(Center2, 5, 5, tempy2);
			for (int i = 0; i < 7; i++)
			{
				ruka1[i] = apply(ruka1[i], tempy2);
			}

			array<float, 2>^ temp3 = gcnew array<float, 2>(3, 3);//рука2
			identify_mat(temp3);
			move_mat(875, 500, temp3);
			for (int i = 0; i < 7; i++)
			{
				ruka2[i] = apply(ruka2[i], temp3);
			}
			PointF Center3;
			Center3.X = (ruka2[4].X + ruka2[0].X) / 2;
			Center3.Y = (ruka2[0].Y + ruka2[2].Y) / 2;
			array<float, 2>^ tempy3 = gcnew array<float, 2>(3, 3);
			identify_mat(tempy3);
			scale_mat(Center3, 5, 5, tempy3);
			for (int i = 0; i < 7; i++)
			{
				ruka2[i] = apply(ruka2[i], tempy3);
			}

			array<float, 2>^ temp9 = gcnew array<float, 2>(3, 3);//шорты1
			identify_mat(temp9);
			move_mat(895, 540, temp9);
			for (int i = 0; i < 7; i++)
			{
				shorts1[i] = apply(shorts1[i], temp9);
			}
			PointF Center9;
			Center9.X = (shorts1[6].X + shorts1[4].X) / 2;
			Center9.Y = (shorts1[2].Y + shorts1[6].Y) / 2;
			array<float, 2>^ tempy9 = gcnew array<float, 2>(3, 3);
			identify_mat(tempy9);
			scale_mat(Center9, 3, 3, tempy9);
			for (int i = 0; i < 7; i++)
			{
				shorts1[i] = apply(shorts1[i], tempy9);
			}

			array<float, 2>^ temp10 = gcnew array<float, 2>(3, 3);//шорты2
			identify_mat(temp10);
			move_mat(917, 540, temp10);
			for (int i = 0; i < 7; i++)
			{
				shorts2[i] = apply(shorts2[i], temp10);
			}
			PointF Center10;
			Center10.X = (shorts2[6].X + shorts2[4].X) / 2;
			Center10.Y = (shorts2[2].Y + shorts2[6].Y) / 2;
			array<float, 2>^ tempy10 = gcnew array<float, 2>(3, 3);
			identify_mat(tempy10);
			scale_mat(Center10, 3, 3, tempy10);
			for (int i = 0; i < 7; i++)
			{
				shorts2[i] = apply(shorts2[i], tempy10);
			}



			//array<float, 2>^ temp4 = gcnew array<float, 2>(3, 3);//шорты
			//identify_mat(temp4);
			//move_mat(905, 542, temp4);
			//for (int i = 0; i < 12; i++)
			//{
			//	shorts[i] = apply(shorts[i], temp4);
			//}
			//PointF Center4;
			//Center4.X = (shorts[11].X + shorts[6].X) / 2;
			//Center4.Y = (shorts[2].Y + shorts[7].Y) / 2;
			//array<float, 2>^ tempy4 = gcnew array<float, 2>(3, 3);
			//identify_mat(tempy4);
			//scale_mat(Center4, 5, 5, tempy4);
			//for (int i = 0; i < 12; i++)
			//{
			//	shorts[i] = apply(shorts[i], tempy4);
			//}

			array<float, 2>^ temp5 = gcnew array<float, 2>(3, 3);//голень1
			identify_mat(temp5);
			move_mat(890, 578, temp5);
			for (int i = 0; i < 7; i++)
			{
				golen1[i] = apply(golen1[i], temp5);
			}
			PointF Center5;
			Center5.X = (golen1[0].X + golen1[4].X) / 2;
			Center5.Y = (golen1[2].Y + golen1[6].Y) / 2;
			array<float, 2>^ tempy5 = gcnew array<float, 2>(3, 3);
			identify_mat(tempy5);
			scale_mat(Center5, 1.6, 1.6, tempy5);
			for (int i = 0; i < 7; i++)
			{
				golen1[i] = apply(golen1[i], tempy5);
			}

			array<float, 2>^ temp6 = gcnew array<float, 2>(3, 3);//голень2
			identify_mat(temp6);
			move_mat(923, 573, temp6);
			for (int i = 0; i < 5; i++)
			{
				golen2[i] = apply(golen2[i], temp6);
			}
			PointF Center6;
			Center6.X = (golen2[0].X + golen2[1].X) / 2;
			Center6.Y = (golen2[1].Y + golen2[3].Y) / 2;
			array<float, 2>^ tempy6 = gcnew array<float, 2>(3, 3);
			identify_mat(tempy6);
			scale_mat(Center6, 5, 5, tempy6);
			for (int i = 0; i < 5; i++)
			{
				golen2[i] = apply(golen2[i], tempy6);
			}

			array<float, 2>^ temp7 = gcnew array<float, 2>(3, 3);//педаль1
			identify_mat(temp7);
			move_mat(890, 610, temp7);
			for (int i = 0; i < 6; i++)
			{
				pedal1[i] = apply(pedal1[i], temp7);
			}
			PointF Center7;
			Center7.X = (pedal1[3].X + pedal1[2].X) / 2;
			Center7.Y = (pedal1[0].Y + pedal1[2].Y) / 2;
			array<float, 2>^ tempy7 = gcnew array<float, 2>(3, 3);
			identify_mat(tempy7);
			scale_mat(Center7, 5, 5, tempy7);
			for (int i = 0; i < 6; i++)
			{
				pedal1[i] = apply(pedal1[i], tempy7);
			}

			array<float, 2>^ temp8 = gcnew array<float, 2>(3, 3);//педаль2
			identify_mat(temp8);
			move_mat(922, 605, temp8);
			for (int i = 0; i < 6; i++)
			{
				pedal2[i] = apply(pedal2[i], temp8);
			}
			PointF Center8;
			Center8.X = (pedal2[3].X + pedal2[2].X) / 2;
			Center8.Y = (pedal2[0].Y + pedal2[2].Y) / 2;
			array<float, 2>^ tempy8 = gcnew array<float, 2>(3, 3);
			identify_mat(tempy8);
			scale_mat(Center8, 5, 5, tempy8);
			for (int i = 0; i < 6; i++)
			{
				pedal2[i] = apply(pedal2[i], tempy8);
			}



			Graphics^ gr = Graphics::FromImage(pbImg->Image);//голова
			br->Color = Color::Pink;
			gr->FillPolygon(br, golova);

			br->Color = Color::Pink;//рука2
			gr->FillPolygon(br, ruka2);

			//тело
			br->Color = Color::Yellow;
			gr->FillPolygon(br, telo);

			br->Color = Color::Pink;//рука1
			gr->FillPolygon(br, ruka1);

			br->Color = Color::White;//голень1
			gr->FillPolygon(br, golen1);

			br->Color = Color::Red;//педаль1
			gr->FillClosedCurve(br, pedal1);

			br->Color = Color::White;//голень2
			gr->FillPolygon(br, golen2);

			br->Color = Color::Red;//педаль2
			gr->FillClosedCurve(br, pedal2);

			//br->Color = Color::Black;//шорты
			//gr->FillPolygon(br, shorts);

			br->Color = Color::Black;//шорты1
			gr->FillPolygon(br, shorts1);

			br->Color = Color::Black;//шорты2
			gr->FillPolygon(br, shorts2);
		}

		void moveoblaka()
		{
			array<float, 2>^ temp = gcnew array<float, 2>(3, 3);
			identify_mat(temp);
			move_mat(0.1, 0, temp);
			array<float, 2>^ temp2 = gcnew array<float, 2>(3, 3);
			identify_mat(temp2);
			move_mat(0.1, 0, temp2);
			array<float, 2>^ temp3 = gcnew array<float, 2>(3, 3);
			identify_mat(temp3);
			move_mat(0.1, 0, temp3);
			for (int i = 0; i < 20; i++)
			{
				obl1[i] = apply(obl1[i], temp2);
				obl2[i] = apply(obl2[i], temp3);
				obl3[i] = apply(obl3[i], temp);
			}

			Graphics^ gr = Graphics::FromImage(pbImg->Image);
			br->Color = Color::White;
			gr->FillClosedCurve(br, obl1);
			gr->FillClosedCurve(br, obl2);
			gr->FillClosedCurve(br, obl3);
		}
		void moveball1()
		{
			
			array<float, 2>^ temp = gcnew array<float, 2>(3, 3);
			array<float, 2>^ temp1 = gcnew array<float, 2>(3, 3);
			

			identify_mat(temp);
			move_mat(4, 0, temp);
			Graphics^ gr = Graphics::FromImage(pbImg->Image);
			for (int i = 0; i < 8; i++)
			{
				ballkarkas[i] = apply(ballkarkas[i], temp);
				
				
			}
			
			for (int i = 0; i < 5; i++)
			{
				
				ballpyat1[i] = apply(ballpyat1[i], temp);
				ballpyat4[i] = apply(ballpyat4[i], temp);
				ballpyat2[i] = apply(ballpyat2[i], temp);
				ballpyat3[i] = apply(ballpyat3[i], temp);
			}	
			PointF Center;
			Center.X = (ballkarkas[0].X + ballkarkas[3].X) / 2;
			Center.Y = (ballkarkas[1].Y + ballkarkas[5].Y) / 2;
			identify_mat(temp1);
			rotate_mat(Center,-0.1,temp1);
			for (int i = 0; i < 5; i++)
			{

				ballpyat1[i] = apply(ballpyat1[i], temp1);
				ballpyat4[i] = apply(ballpyat4[i], temp1);
				ballpyat2[i] = apply(ballpyat2[i], temp1);
				ballpyat3[i] = apply(ballpyat3[i], temp1);
			}

			
			br->Color = Color::White;
			gr->FillClosedCurve(br, ballkarkas);
			br->Color = Color::Black;
			gr->FillPolygon(br, ballpyat1);
			
			gr->FillPolygon(br, ballpyat2);
			gr->FillPolygon(br, ballpyat3);
			gr->FillPolygon(br, ballpyat4);
		}
		void moveball2()
		{
			array<float, 2>^ temp = gcnew array<float, 2>(3, 3);
			array<float, 2>^ temp1 = gcnew array<float, 2>(3, 3);
			array<float, 2>^ temp2 = gcnew array<float, 2>(3, 3);
			array<float, 2>^ temp3 = gcnew array<float, 2>(3, 3);
			identify_mat(temp);
			move_mat(-3.25, -3, temp);
			Graphics^ gr = Graphics::FromImage(pbImg->Image);
			for (int i = 0; i < 8; i++)
			{
				ballkarkas[i] = apply(ballkarkas[i], temp);


			}

			for (int i = 0; i < 5; i++)
			{

				ballpyat1[i] = apply(ballpyat1[i], temp);
				ballpyat4[i] = apply(ballpyat4[i], temp);
				ballpyat2[i] = apply(ballpyat2[i], temp);
				ballpyat3[i] = apply(ballpyat3[i], temp);
			}
			PointF Center;
			Center.X = (ballkarkas[0].X + ballkarkas[3].X) / 2;
			Center.Y = (ballkarkas[1].Y + ballkarkas[5].Y) / 2;
			identify_mat(temp1);
			rotate_mat(Center, 0.1, temp1);
			for (int i = 0; i < 5; i++)
			{

				ballpyat1[i] = apply(ballpyat1[i], temp1);
				ballpyat4[i] = apply(ballpyat4[i], temp1);
				ballpyat2[i] = apply(ballpyat2[i], temp1);
				ballpyat3[i] = apply(ballpyat3[i], temp1);
			}
			identify_mat(temp2);
			scale_mat(Center, 0.995, 0.995, temp2);
			for (int i = 0; i < 8; i++)
			{
				(ballkarkas[i] = apply(ballkarkas[i], temp2));
			}
			identify_mat(temp3);
			scale_mat(Center, 0.995, 0.995, temp3);
			for (int i = 0; i < 5; i++)
			{
				ballpyat1[i] = apply(ballpyat1[i], temp3);
				ballpyat4[i] = apply(ballpyat4[i], temp3);
				ballpyat2[i] = apply(ballpyat2[i], temp3);
				ballpyat3[i] = apply(ballpyat3[i], temp3);
			}

			br->Color = Color::White;
			gr->FillClosedCurve(br, ballkarkas);
			br->Color = Color::Black;
			gr->FillPolygon(br, ballpyat1);

			gr->FillPolygon(br, ballpyat2);
			gr->FillPolygon(br, ballpyat3);
			gr->FillPolygon(br, ballpyat4);
		}
		void moveball3()
		{
			array<float, 2>^ temp = gcnew array<float, 2>(3, 3);
			array<float, 2>^ temp1 = gcnew array<float, 2>(3, 3);
			array<float, 2>^ temp2 = gcnew array<float, 2>(3, 3);
			array<float, 2>^ temp3 = gcnew array<float, 2>(3, 3);
			identify_mat(temp);
			move_mat(-3, -2, temp);
			Graphics^ gr = Graphics::FromImage(pbImg->Image);
			for (int i = 0; i < 8; i++)
			{
				ballkarkas[i] = apply(ballkarkas[i], temp);


			}

			for (int i = 0; i < 5; i++)
			{

				ballpyat1[i] = apply(ballpyat1[i], temp);
				ballpyat4[i] = apply(ballpyat4[i], temp);
				ballpyat2[i] = apply(ballpyat2[i], temp);
				ballpyat3[i] = apply(ballpyat3[i], temp);
			}
			PointF Center;
			Center.X = (ballkarkas[0].X + ballkarkas[3].X) / 2;
			Center.Y = (ballkarkas[1].Y + ballkarkas[5].Y) / 2;
			identify_mat(temp1);
			rotate_mat(Center, 0.1, temp1);
			for (int i = 0; i < 5; i++)
			{

				ballpyat1[i] = apply(ballpyat1[i], temp1);
				ballpyat4[i] = apply(ballpyat4[i], temp1);
				ballpyat2[i] = apply(ballpyat2[i], temp1);
				ballpyat3[i] = apply(ballpyat3[i], temp1);
			}
			identify_mat(temp2);
			scale_mat(Center, 0.997, 0.997, temp2);
			for (int i = 0; i < 8; i++)
			{
				(ballkarkas[i] = apply(ballkarkas[i], temp2));
			}
			identify_mat(temp3);
			scale_mat(Center, 0.997, 0.997, temp3);
			for (int i = 0; i < 5; i++)
			{
				ballpyat1[i] = apply(ballpyat1[i], temp3);
				ballpyat4[i] = apply(ballpyat4[i], temp3);
				ballpyat2[i] = apply(ballpyat2[i], temp3);
				ballpyat3[i] = apply(ballpyat3[i], temp3);
			}

			br->Color = Color::White;
			gr->FillClosedCurve(br, ballkarkas);
			br->Color = Color::Black;
			gr->FillPolygon(br, ballpyat1);

			gr->FillPolygon(br, ballpyat2);
			gr->FillPolygon(br, ballpyat3);
			gr->FillPolygon(br, ballpyat4);
		}
		void moveChel1()
		{
			array<float, 2>^ temp = gcnew array<float, 2>(3, 3);
			array<float, 2>^ temp1 = gcnew array<float, 2>(3, 3);
			array<float, 2>^ temp2 = gcnew array<float, 2>(3, 3);
			array<float, 2>^ temp3 = gcnew array<float, 2>(3, 3);
			array<float, 2>^ temp4 = gcnew array<float, 2>(3, 3);
			array<float, 2>^ temp5 = gcnew array<float, 2>(3, 3);
			array<float, 2>^ temp6 = gcnew array<float, 2>(3, 3);
			array<float, 2>^ temp7 = gcnew array<float, 2>(3, 3);
			array<float, 2>^ temp8 = gcnew array<float, 2>(3, 3);
			Graphics^ gr = Graphics::FromImage(pbImg->Image);
			PointF Center;
			PointF Center1;
			PointF Center2;
			PointF Center3;
			Center.X = telo[0].X;
			Center.Y = telo[0].Y;
			Center1.X = (shorts[11].X + shorts[10].X) / 2;
			Center1.Y = shorts[11].Y;
			Center2.X = shorts1[2].X;
			Center2.Y = shorts1[2].Y;
			Center3.X = shorts1[2].X;
			Center3.Y = shorts1[2].Y;

			identify_mat(temp);
			rotate_mat(Center, 0.001, temp);
			for (int i = 0; i < 10; i++)
			{

				telo[i] = apply(telo[i], temp);
				
			}
			identify_mat(temp1);
			rotate_mat(Center, 0.001, temp1);
			for (int i = 0; i < 7; i++)
			{

				ruka1[i] = apply(ruka1[i], temp1);

			}
			identify_mat(temp2);
			rotate_mat(Center, 0.001, temp2);
			for (int i = 0; i < 7; i++)
			{

				ruka2[i] = apply(ruka2[i], temp2);

			}
			identify_mat(temp3);
			rotate_mat(Center, 0.001, temp3);
			for (int i = 0; i < 11; i++)
			{

				golova[i] = apply(golova[i], temp3);

			}

			identify_mat(temp4);
			rotate_mat(Center2, 0.012, temp4);
			for (int i = 0; i < 7; i++)
			{

				shorts1[i] = apply(shorts1[i], temp4);

			}
			/*identify_mat(temp4);
			rotate_mat(Center, 0.001, temp4);
			for (int i = 0; i < 12; i++)
			{

				shorts[i] = apply(shorts[i], temp4);

			}*/
			/*identify_mat(temp5);
			rotate_mat(Center, 0.001, temp5);
			for (int i = 0; i < 5; i++)
			{

				golen2[i] = apply(golen2[i], temp5);

			}*/
			identify_mat(temp7);
			rotate_mat(Center3, 0.02, temp7);
			for (int i = 0; i < 7; i++)
			{

				golen1[i] = apply(golen1[i], temp7);

			}

			identify_mat(temp6);
			rotate_mat(Center3, 0.02, temp8);
			for (int i = 0; i < 6; i++)
			{

				pedal1[i] = apply(pedal1[i], temp8);

			}

			/*identify_mat(temp6);
			rotate_mat(Center, 0.001, temp6);
			for (int i = 0; i < 6; i++)
			{

				pedal2[i] = apply(pedal2[i], temp6);

			}*/

			br->Color = Color::Yellow;
			gr->FillPolygon(br, telo);

			br->Color = Color::Pink;
			gr->FillPolygon(br, ruka2);

			br->Color = Color::Pink;
			gr->FillPolygon(br, ruka1);

			br->Color = Color::Pink;
			gr->FillPolygon(br, golova);

			/*br->Color = Color::Black;
			gr->FillPolygon(br, shorts);*/

			br->Color = Color::Black;
			gr->FillPolygon(br, shorts1);

			br->Color = Color::Pink;
			gr->FillPolygon(br, golen2);
			br->Color = Color::Pink;
			gr->FillPolygon(br, golen1);

			br->Color = Color::Red;
			gr->FillPolygon(br, pedal2);

			br->Color = Color::Red;
			gr->FillPolygon(br, pedal1);
		}
		void moveChel2()
		{
			array<float, 2>^ temp = gcnew array<float, 2>(3, 3);
			array<float, 2>^ temp1 = gcnew array<float, 2>(3, 3);
			array<float, 2>^ temp2 = gcnew array<float, 2>(3, 3);
			array<float, 2>^ temp3 = gcnew array<float, 2>(3, 3);
			array<float, 2>^ temp4 = gcnew array<float, 2>(3, 3);
			array<float, 2>^ temp5 = gcnew array<float, 2>(3, 3);
			array<float, 2>^ temp6 = gcnew array<float, 2>(3, 3);
			array<float, 2>^ temp7 = gcnew array<float, 2>(3, 3);
			array<float, 2>^ temp8 = gcnew array<float, 2>(3, 3);
			Graphics^ gr = Graphics::FromImage(pbImg->Image);
			PointF Center;
			PointF Center2;
			PointF Center3;
			Center2.X = shorts1[2].X;
			Center2.Y = shorts1[2].Y;
			Center3.X = shorts1[2].X;
			Center3.Y = shorts1[2].Y;
			Center.X = telo[0].X;
			Center.Y = telo[0].Y;
			identify_mat(temp);
			rotate_mat(Center, -0.001, temp);
			for (int i = 0; i < 10; i++)
			{

				telo[i] = apply(telo[i], temp);

			}
			identify_mat(temp1);
			rotate_mat(Center, -0.001, temp1);
			for (int i = 0; i < 7; i++)
			{

				ruka1[i] = apply(ruka1[i], temp1);

			}
			identify_mat(temp2);
			rotate_mat(Center, -0.001, temp2);
			for (int i = 0; i < 7; i++)
			{

				ruka2[i] = apply(ruka2[i], temp2);

			}
			identify_mat(temp3);
			rotate_mat(Center, -0.001, temp3);
			for (int i = 0; i < 11; i++)
			{

				golova[i] = apply(golova[i], temp3);

			}
			/*identify_mat(temp4);
			rotate_mat(Center, -0.001, temp4);
			for (int i = 0; i < 12; i++)
			{

				shorts[i] = apply(shorts[i], temp4);

			}*/
			/*identify_mat(temp5);
			rotate_mat(Center, -0.001, temp5);
			for (int i = 0; i < 5; i++)
			{

				golen2[i] = apply(golen2[i], temp5);

			}*/
			identify_mat(temp4);
			rotate_mat(Center2, -0.012, temp4);
			for (int i = 0; i < 7; i++)
			{

				shorts1[i] = apply(shorts1[i], temp4);

			}

			identify_mat(temp7);
			rotate_mat(Center3, -0.02, temp7);
			for (int i = 0; i < 7; i++)
			{

				golen1[i] = apply(golen1[i], temp7);

			}

			

			identify_mat(temp6);
			rotate_mat(Center3, -0.02, temp8);
			for (int i = 0; i < 6; i++)
			{

				pedal1[i] = apply(pedal1[i], temp8);

			}

			/*identify_mat(temp6);
			rotate_mat(Center, -0.001, temp6);
			for (int i = 0; i < 6; i++)
			{

				pedal2[i] = apply(pedal2[i], temp6);

			}*/

			br->Color = Color::Yellow;
			gr->FillPolygon(br, telo);

			br->Color = Color::Pink;
			gr->FillPolygon(br, ruka2);

			br->Color = Color::Pink;
			gr->FillPolygon(br, ruka1);

			br->Color = Color::Pink;
			gr->FillPolygon(br, golova);

			/*br->Color = Color::Black;
			gr->FillPolygon(br, shorts);*/

			br->Color = Color::Black;
			gr->FillPolygon(br, shorts1);

			br->Color = Color::Pink;
			gr->FillPolygon(br, golen2);
			br->Color = Color::Pink;
			gr->FillPolygon(br, golen1);

			br->Color = Color::Red;
			gr->FillPolygon(br, pedal2);

			br->Color = Color::Red;
			gr->FillPolygon(br, pedal1);
		}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		drawBackGround();
		setObjects();
		setOblaka();
		setbigkarkas();
		setsmallkarkas();
		Drawline();
		setChel();
		setball();
	}

		   void SetFile(String^ data, array<PointF>^ ar)
		   {
			   StreamReader^ sw = File::OpenText(data);
			   for (int i = 0; i < ar->Length; i++)
			   {
				   float z = Convert::ToDouble(sw->ReadLine());
				   ar[i].X = z;
				   z = Convert::ToInt32(sw->ReadLine());
				   ar[i].Y = z;
			   }
			   sw->Close();
		   }
		   void Drawline()
		   {
			   pn->Color = Color::Black;
			   pn->Width = 3;
			   Graphics^ gr = Graphics::FromImage(pbImg->Image);
			   gr->DrawLine(pn, 1080, 425, 1080, 608);
			   gr->DrawLine(pn, 1060, 404, 1060, 608);
			   gr->DrawLine(pn, 1040, 384, 1040, 608);
			   gr->DrawLine(pn, 1020, 375, 1020, 608);
			   gr->DrawLine(pn, 1000, 375, 1000, 608);
			   gr->DrawLine(pn, 980, 375, 980, 608);
			   gr->DrawLine(pn, 976, 380, 1036.5, 380);
			   gr->DrawLine(pn, 976, 400, 1056.5, 400);
			   gr->DrawLine(pn, 976, 420, 1076, 420);
			   gr->DrawLine(pn, 976, 440, 1080, 440);
			   gr->DrawLine(pn, 976, 460, 1080, 460);
			   gr->DrawLine(pn, 976, 480, 1080, 480);
			   gr->DrawLine(pn, 976, 500, 1080, 500);
			   gr->DrawLine(pn, 976, 520, 1080, 520);
			   gr->DrawLine(pn, 976, 500, 1080, 500);
			   gr->DrawLine(pn, 976, 520, 1080, 520);
			   gr->DrawLine(pn, 976, 540, 1080, 540);
			   gr->DrawLine(pn, 976, 560, 1080, 560); 
			   gr->DrawLine(pn, 976, 580, 1080, 580);
			   gr->DrawLine(pn, 976, 600, 1080, 600);


		   }
		   void drawBackGround()
		   {
			   float gor = pbImg->Height / 2.25; //горизонт
			   array<Point>^ grace = gcnew array<Point>(4);
			   grace[0].X = 0; grace[0].Y = 0; grace[1].X = pbImg->Width - 1; grace[1].Y = 0;
			   grace[2].X = pbImg->Width - 1; grace[2].Y = pbImg->Height - 1; grace[3].X = 0; grace[3].Y = pbImg->Height - 1;
			   /*array<Point>^ road = gcnew array<Point>(4);
			   road[0].X = pbImg->Width / 2 - 10; road[0].Y = gor; road[1].X = pbImg->Width / 2 + 10; road[1].Y = gor;
			   road[2].X = pbImg->Width - 100; road[2].Y = pbImg->Height - 1; road[3].X = 100; road[3].Y = pbImg->Height - 1;*/
			   array<Point>^ sky = gcnew array<Point>(4);
			   sky[0].X = 0; sky[0].Y = 0; sky[1].X = pbImg->Width - 1; sky[1].Y = 0; sky[2].X = pbImg->Width - 1;
			   sky[2].Y = gor; sky[3].X = 0; sky[3].Y = gor;
			   array<Point>^ bigkar = gcnew array<Point>(5);
			   
			  
			   
			   
			  

			   Graphics^ gr = Graphics::FromImage(pbImg->Image);
			   br->Color = Color::ForestGreen;
			   gr->FillPolygon(br, grace);
			   br->Color = Color::Aqua;
			   gr->FillPolygon(br, sky);
			  
			  /* br->Color = Color::DarkSlateGray;
			   gr->FillPolygon(br, road);*/
		   }
		   void drawOblaka()
		   {
			   array<float, 2>^ temp = gcnew array<float, 2>(3, 3);
			   identify_mat(temp);
			   move_mat(0.002, -0.01, temp);
			   array<float, 2>^ temp2 = gcnew array<float, 2>(3, 3);
			   identify_mat(temp2);
			   move_mat(0.003, -0.01, temp2);
			   array<float, 2>^ temp3 = gcnew array<float, 2>(3, 3);
			   identify_mat(temp3);
			   move_mat(0.001, 0.01, temp3);
			   for (int i = 0; i < 20; i++)
			   {
				   obl1[i] = apply(obl1[i], temp2);
				   obl2[i] = apply(obl2[i], temp3);
				   obl3[i] = apply(obl3[i], temp);
			   }
		   }
		   void drawBigkarkas()
		   {
			   Graphics^ gr = Graphics::FromImage(pbImg->Image);
			   br->Color = Color::White;
			   /*gr->FillClosedCurve(br, obl1);
			   gr->FillClosedCurve(br, obl2);*/
			   gr->FillPolygon(br, bigkar);

		   }
		   void drawSmallkarkas()
		   {
			   Graphics^ gr = Graphics::FromImage(pbImg->Image);
			   br->Color = Color::ForestGreen;
			   gr->FillPolygon(br, smallkar);
		   }
		   void drawBall()
		   {
			   Graphics^ gr = Graphics::FromImage(pbImg->Image);//каркас м€ча
			   br->Color = Color::White;
			   gr->FillClosedCurve(br, ballkarkas);

			   br->Color = Color::Black;// п€тиугольник1 м€ча
			   gr->FillPolygon(br, ballpyat1);

			   br->Color = Color::Black;// п€тиугольник2 м€ча
			   gr->FillPolygon(br, ballpyat2);

			   br->Color = Color::Black;// п€тиугольник3 м€ча
			   gr->FillPolygon(br, ballpyat3);

			   br->Color = Color::Black;// п€тиугольник4 м€ча
			   gr->FillPolygon(br, ballpyat4);
		   }
		   void drawChel() {
			   Graphics^ gr = Graphics::FromImage(pbImg->Image);//голова
			   br->Color = Color::Pink;
			   gr->FillPolygon(br, golova);

			   br->Color = Color::Pink;//рука2
			   gr->FillPolygon(br, ruka2);

			  

			   br->Color = Color::Pink;//рука1
			   gr->FillPolygon(br, ruka1);

			   br->Color = Color::White;//голень1
			   gr->FillPolygon(br, golen1);

			   br->Color = Color::Red;//педаль1
			   gr->FillClosedCurve(br, pedal1);

			   br->Color = Color::White;//голень2
			   gr->FillPolygon(br, golen2);

			   br->Color = Color::Red;//педаль2
			   gr->FillClosedCurve(br, pedal2);

			  
			   br->Color = Color::Yellow;//тело
			   gr->FillPolygon(br, telo);
			   //br->Color = Color::Black;//шорты
			   //gr->FillPolygon(br, shorts);

			   br->Color = Color::Black;//шорты1
			   gr->FillPolygon(br, shorts1);

			   br->Color = Color::Black;//шорты2
			   gr->FillPolygon(br, shorts2);

		   }

		  
	private: System::Void tmclock_Tick(System::Object^ sender, System::EventArgs^ e) {
		static int count = 0;
		count++;
		Graphics^ gr = Graphics::FromImage(pbImg->Image);
		drawBackGround();
		
		if (count < 900) {
			moveoblaka();
			if (count < 222)
			{
				moveball1();

			}

			if ((count > 250) && (count < 270))
			{

				moveChel1();
			}

			if ((count > 285) && (count < 315))
			{

				moveChel2();
			}
			if ((count > 315) && (count < 425))
			{

				moveball2();
			}
			if ((count > 425) && (count < 800))
			{
				
				moveball3();
			}
		}
		drawBigkarkas();
		drawSmallkarkas();
		Drawline();
		drawChel();
		drawBall();
		pbImg->Refresh();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		tmclock->Start();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		tmclock->Stop();
	}
	private: System::Void pbImg_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}