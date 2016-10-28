#pragma once

#pragma comment(lib, "user32.lib") 
#define _WIN32_WINNT 0x0500
#include <windows.h> 
#include <cstdlib> 
#include <ctime>
#include <string>
#include <cmath>
#include"LinkedList.h"
#using <system.drawing.dll>

using namespace std;

namespace YSA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	
	
	LinkedList valObj;

	

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  picPlane;
	private: System::Windows::Forms::Button^  butTrain;
	private: System::Windows::Forms::Label^  labW1;
	private: System::Windows::Forms::Label^  labW2;
	private: System::Windows::Forms::TextBox^  textW1;
	private: System::Windows::Forms::TextBox^  textW2;
	private: System::Windows::Forms::TextBox^  textW3;
	private: System::Windows::Forms::Label^  label1;


	private: System::Windows::Forms::TextBox^  textClassNum;
	private: System::Windows::Forms::Label^  labClassNum;
	private: System::Windows::Forms::TextBox^  textClassLab;

	private: System::Windows::Forms::Label^  labClassTag;


	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->picPlane = (gcnew System::Windows::Forms::PictureBox());
			this->butTrain = (gcnew System::Windows::Forms::Button());
			this->labW1 = (gcnew System::Windows::Forms::Label());
			this->labW2 = (gcnew System::Windows::Forms::Label());
			this->textW1 = (gcnew System::Windows::Forms::TextBox());
			this->textW2 = (gcnew System::Windows::Forms::TextBox());
			this->textW3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textClassNum = (gcnew System::Windows::Forms::TextBox());
			this->labClassNum = (gcnew System::Windows::Forms::Label());
			this->textClassLab = (gcnew System::Windows::Forms::TextBox());
			this->labClassTag = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picPlane))->BeginInit();
			this->SuspendLayout();
			// 
			// picPlane
			// 
			this->picPlane->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picPlane.Image")));
			this->picPlane->ImageLocation = L"";
			this->picPlane->Location = System::Drawing::Point(0, 0);
			this->picPlane->Name = L"picPlane";
			this->picPlane->Size = System::Drawing::Size(400, 400);
			this->picPlane->TabIndex = 0;
			this->picPlane->TabStop = false;
			this->picPlane->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::picPlane_Paint);
			this->picPlane->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::picPlane_MouseClick);
			// 
			// butTrain
			// 
			this->butTrain->Location = System::Drawing::Point(447, 85);
			this->butTrain->Name = L"butTrain";
			this->butTrain->Size = System::Drawing::Size(75, 23);
			this->butTrain->TabIndex = 1;
			this->butTrain->Text = L"Train";
			this->butTrain->UseVisualStyleBackColor = true;
			this->butTrain->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::butTrain_MouseClick);
			// 
			// labW1
			// 
			this->labW1->AutoSize = true;
			this->labW1->Location = System::Drawing::Point(420, 13);
			this->labW1->Name = L"labW1";
			this->labW1->Size = System::Drawing::Size(24, 13);
			this->labW1->TabIndex = 2;
			this->labW1->Text = L"W1";
			// 
			// labW2
			// 
			this->labW2->AutoSize = true;
			this->labW2->Location = System::Drawing::Point(420, 39);
			this->labW2->Name = L"labW2";
			this->labW2->Size = System::Drawing::Size(24, 13);
			this->labW2->TabIndex = 3;
			this->labW2->Text = L"W2";
			// 
			// textW1
			// 
			this->textW1->Location = System::Drawing::Point(447, 6);
			this->textW1->Name = L"textW1";
			this->textW1->Size = System::Drawing::Size(100, 20);
			this->textW1->TabIndex = 4;
			// 
			// textW2
			// 
			this->textW2->Location = System::Drawing::Point(447, 32);
			this->textW2->Name = L"textW2";
			this->textW2->Size = System::Drawing::Size(100, 20);
			this->textW2->TabIndex = 5;
			// 
			// textW3
			// 
			this->textW3->Location = System::Drawing::Point(447, 59);
			this->textW3->Name = L"textW3";
			this->textW3->Size = System::Drawing::Size(100, 20);
			this->textW3->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(420, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(24, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"W3";
			// 
			// textClassNum
			// 
			this->textClassNum->Location = System::Drawing::Point(447, 147);
			this->textClassNum->Name = L"textClassNum";
			this->textClassNum->Size = System::Drawing::Size(100, 20);
			this->textClassNum->TabIndex = 18;
			// 
			// labClassNum
			// 
			this->labClassNum->AutoSize = true;
			this->labClassNum->Location = System::Drawing::Point(444, 131);
			this->labClassNum->Name = L"labClassNum";
			this->labClassNum->Size = System::Drawing::Size(102, 13);
			this->labClassNum->TabIndex = 19;
			this->labClassNum->Text = L"Ayrýlacak sýnýf sayýsý:";
			// 
			// textClassLab
			// 
			this->textClassLab->Location = System::Drawing::Point(447, 196);
			this->textClassLab->Name = L"textClassLab";
			this->textClassLab->Size = System::Drawing::Size(100, 20);
			this->textClassLab->TabIndex = 20;
			// 
			// labClassTag
			// 
			this->labClassTag->AutoSize = true;
			this->labClassTag->Location = System::Drawing::Point(444, 180);
			this->labClassTag->Name = L"labClassTag";
			this->labClassTag->Size = System::Drawing::Size(112, 13);
			this->labClassTag->TabIndex = 21;
			this->labClassTag->Text = L"Sýnýfýn etiket numarasý:";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(684, 432);
			this->Controls->Add(this->labClassTag);
			this->Controls->Add(this->textClassLab);
			this->Controls->Add(this->labClassNum);
			this->Controls->Add(this->textClassNum);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textW3);
			this->Controls->Add(this->textW2);
			this->Controls->Add(this->textW1);
			this->Controls->Add(this->labW2);
			this->Controls->Add(this->labW1);
			this->Controls->Add(this->butTrain);
			this->Controls->Add(this->picPlane);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picPlane))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



	private: System::Void picPlane_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
				 
				 
				 double CurX = Convert::ToDouble(e->X);
				 double CurY = Convert::ToDouble(e->Y);
				


				 if (textClassNum->Text != "" && textClassLab->Text != "")
				 {
					 double x = ((8 * CurX) / 399) - 4;
					 double y = 4 - ((8 * CurY) / 399);
					 int dist_size = Convert::ToInt32(textClassNum->Text);
					 int class_lab = Convert::ToInt32(textClassLab->Text);


					 valObj.addValue(x, y, dist_size, class_lab);

					 Bitmap^ bmp = (Bitmap^)picPlane->Image;
					 Color pColor;
					 //valObj.patternCount++;   // counting the pattern
					 for (int i = 0; i < 3; i++)
					 {
					 	 bmp->SetPixel(CurX+i, CurY, pColor.Red);
						 bmp->SetPixel(CurX + i, CurY + i, pColor.Red);
						 bmp->SetPixel(CurX, CurY + i, pColor.Red);
						 bmp->SetPixel(CurX - i, CurY + i, pColor.Red);
						 bmp->SetPixel(CurX - i, CurY, pColor.Red);
						 bmp->SetPixel(CurX - i, CurY - i, pColor.Red);
						 bmp->SetPixel(CurX, CurY - i, pColor.Red);
						 bmp->SetPixel(CurX + i, CurY - i, pColor.Red);
						 picPlane->Image = bmp;
					 }
				 }
	}

	private: System::Void butTrain_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
	{

				 int fnet = 0, P = 1, E = 1;
				 int c_Num = Convert::ToInt32(textClassNum->Text);
				 int *d;
				 double c = 0.5, w1, w2, w3,net=0;
				

				 w1 = Convert::ToDouble(textW1->Text);
				 w2 = Convert::ToDouble(textW2->Text);
				 w3 = Convert::ToDouble(textW3->Text);
				 
				 double w_initial[3] = { w1, w2, w3 };							// get the initial weight.
				 double **weight;

				 weight = new double*[3];
				 for (int i = 0; i < 3; i++)
				 {
					 weight[i] = new double[c_Num];

				 }

				 for (int i = 0; i < c_Num; i++)
				 for (int j = 0; j < 3; j++)
				 {
					 weight[j][i] = w_initial[j];								// setting the initial weight value of each class
				 }
					 
				 while (E != 0)
				 {
						E = 0;													// Cyle Error
						
						for (P = 1; P <= valObj.patternCount; P++)				// number of samples P
						{

							double w_buffer[3], buffer[4], *Valret, *d_buffer;// aðýrlýk, input bufferý ve input dizisinin adresi
							
							d_buffer = new double[c_Num];

							d = valObj.popDist();								// input pop and dist_vec array set.

							Valret = valObj.noRemPopVal();						
							
							for (int a = 0; a < 4; a++)							// inputs and distance buffering.
							{
								buffer[a] = *Valret;							// there are labels in the buffer[3]. replace the 1 value in the dist_vec(d_buffer) array.
								Valret++;
							}
							for (int b = 0; b < c_Num; b++)
							{
								d_buffer[b] = *d;
								d++;
							}


							for (int i = 0; i < c_Num; i++)						// it updates all of the weight class for the current sample.
							{
								for (int k = 0; k < 3; k++)						// i. class of weight takes the buffer.
								{
									w_buffer[k] = weight[k][i];	
								}

								for (int j = 0; j<3; j++)						// i. weight class and then calculate net the current input.
									net += w_buffer[j] * buffer[j];

								if (net > 0)									// f(net) computed.
									fnet = 1;
								else if (net < 0)
									fnet = -1;
								else
									fnet = 0;
								net = 0;										// net reset
																				// buffer[3] te classýn etiketi var buffer[3] ile dist_vec adresinde öteleme yapýp 1 in yerþnþ buluyoruz.
																				// dist_vec ise olmasý gereke uzaklýk vektörü
								if (( d_buffer[i] - fnet) != 0)					// update the weights
								{
									E++;										// error inc.
									for (int n = 0; n < 3; n++)
									{
										weight[n][i] = w_buffer[n] + c*(d_buffer[i] - fnet)*buffer[n];  // wk+1= wk + c*(d-fnet)*Xk	
									}
								}		
							}
					    }
				 }
				 for (int i = 0; i < c_Num; i++)
					 valObj.addWeight(weight[0][i], weight[1][i], weight[2][i]);
				 
				 picPlane->Refresh();
	}

	private: System::Void picPlane_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e)
	{
				 double x1, y1, *wPtr1;
				 Point PointX1;
				 Point PointY1;
				 Pen^ myPen1 = gcnew Pen(Color::Red);
				 int pX1, pY1;
	
				 double fw_buffer1[3] = { 1 };

				 while (valObj.weightEmpty()!=NULL)
				 {
					 wPtr1 = valObj.weightPop();
						 for (int k = 0; k < 3; k++)
						 {
							 fw_buffer1[k] = *wPtr1;
							 wPtr1++;
						 }
					x1 = (fw_buffer1[2]) / fw_buffer1[0]; // y = 0
					y1 = (fw_buffer1[2]) / fw_buffer1[1]; // x = 0
	 
					pX1 = (int)(((x1 + 4) * 399) / 8);		// (x,0)
					pY1 = (int)(((4 - y1) * 399) / 8);		// (0,y)

					PointX1 = Point(pX1, 200);
					PointY1= Point(200, pY1);

				   e->Graphics->DrawLine(myPen1, PointX1, PointY1);
				 }		
}

};
}
