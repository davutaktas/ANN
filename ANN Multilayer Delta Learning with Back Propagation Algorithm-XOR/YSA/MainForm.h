#pragma once

#pragma comment(lib, "user32.lib") 
#define _WIN32_WINNT 0x0500
#include <windows.h> 
#include <cstdlib> 
#include <ctime>
#include <string>
#include <cmath>
#include "LinkedList.h"
#include "Network.h"
#using <system.drawing.dll>

using namespace std;

namespace YSA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	
	
	LinkedList Lperc, Ldelta;
	Network network;
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
	private: System::Windows::Forms::Button^  butPerceptron;
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
	private: System::Windows::Forms::RichTextBox^  richTxt;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  btnDelta;
	private: System::Windows::Forms::TextBox^  txtLamda;
	private: System::Windows::Forms::TextBox^  txtMomentum;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;


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
			this->butPerceptron = (gcnew System::Windows::Forms::Button());
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
			this->richTxt = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnDelta = (gcnew System::Windows::Forms::Button());
			this->txtLamda = (gcnew System::Windows::Forms::TextBox());
			this->txtMomentum = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
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
			// butPerceptron
			// 
			this->butPerceptron->Location = System::Drawing::Point(505, 88);
			this->butPerceptron->Name = L"butPerceptron";
			this->butPerceptron->Size = System::Drawing::Size(75, 23);
			this->butPerceptron->TabIndex = 1;
			this->butPerceptron->Text = L"Perceptron";
			this->butPerceptron->UseVisualStyleBackColor = true;
			this->butPerceptron->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::butPerceptron_MouseClick);
			// 
			// labW1
			// 
			this->labW1->AutoSize = true;
			this->labW1->Location = System::Drawing::Point(478, 16);
			this->labW1->Name = L"labW1";
			this->labW1->Size = System::Drawing::Size(21, 13);
			this->labW1->TabIndex = 2;
			this->labW1->Text = L"w1";
			// 
			// labW2
			// 
			this->labW2->AutoSize = true;
			this->labW2->Location = System::Drawing::Point(478, 42);
			this->labW2->Name = L"labW2";
			this->labW2->Size = System::Drawing::Size(21, 13);
			this->labW2->TabIndex = 3;
			this->labW2->Text = L"w2";
			// 
			// textW1
			// 
			this->textW1->Location = System::Drawing::Point(505, 9);
			this->textW1->Name = L"textW1";
			this->textW1->Size = System::Drawing::Size(100, 20);
			this->textW1->TabIndex = 4;
			this->textW1->Text = L"0,001";
			// 
			// textW2
			// 
			this->textW2->Location = System::Drawing::Point(505, 35);
			this->textW2->Name = L"textW2";
			this->textW2->Size = System::Drawing::Size(100, 20);
			this->textW2->TabIndex = 5;
			this->textW2->Text = L"0,001";
			// 
			// textW3
			// 
			this->textW3->Location = System::Drawing::Point(505, 62);
			this->textW3->Name = L"textW3";
			this->textW3->Size = System::Drawing::Size(100, 20);
			this->textW3->TabIndex = 6;
			this->textW3->Text = L"0,001";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(478, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"w3";
			// 
			// textClassNum
			// 
			this->textClassNum->Location = System::Drawing::Point(505, 139);
			this->textClassNum->Name = L"textClassNum";
			this->textClassNum->Size = System::Drawing::Size(100, 20);
			this->textClassNum->TabIndex = 18;
			this->textClassNum->Text = L"2";
			// 
			// labClassNum
			// 
			this->labClassNum->AutoSize = true;
			this->labClassNum->Location = System::Drawing::Point(502, 123);
			this->labClassNum->Name = L"labClassNum";
			this->labClassNum->Size = System::Drawing::Size(102, 13);
			this->labClassNum->TabIndex = 19;
			this->labClassNum->Text = L"Ayrýlacak sýnýf sayýsý:";
			// 
			// textClassLab
			// 
			this->textClassLab->Location = System::Drawing::Point(505, 188);
			this->textClassLab->Name = L"textClassLab";
			this->textClassLab->Size = System::Drawing::Size(100, 20);
			this->textClassLab->TabIndex = 20;
			this->textClassLab->Text = L"0";
			// 
			// labClassTag
			// 
			this->labClassTag->AutoSize = true;
			this->labClassTag->Location = System::Drawing::Point(502, 172);
			this->labClassTag->Name = L"labClassTag";
			this->labClassTag->Size = System::Drawing::Size(112, 13);
			this->labClassTag->TabIndex = 21;
			this->labClassTag->Text = L"Sýnýfýn etiket numarasý:";
			// 
			// richTxt
			// 
			this->richTxt->Location = System::Drawing::Point(505, 244);
			this->richTxt->Name = L"richTxt";
			this->richTxt->Size = System::Drawing::Size(100, 96);
			this->richTxt->TabIndex = 22;
			this->richTxt->Text = L"2\n1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(505, 225);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 13);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Layer-Neuron Num";
			// 
			// btnDelta
			// 
			this->btnDelta->Location = System::Drawing::Point(508, 363);
			this->btnDelta->Name = L"btnDelta";
			this->btnDelta->Size = System::Drawing::Size(75, 23);
			this->btnDelta->TabIndex = 24;
			this->btnDelta->Text = L"Delta";
			this->btnDelta->UseVisualStyleBackColor = true;
			this->btnDelta->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::btnDelta_MouseClick);
			// 
			// txtLamda
			// 
			this->txtLamda->Location = System::Drawing::Point(689, 9);
			this->txtLamda->Name = L"txtLamda";
			this->txtLamda->Size = System::Drawing::Size(100, 20);
			this->txtLamda->TabIndex = 25;
			this->txtLamda->Text = L"1";
			// 
			// txtMomentum
			// 
			this->txtMomentum->Location = System::Drawing::Point(689, 35);
			this->txtMomentum->Name = L"txtMomentum";
			this->txtMomentum->Size = System::Drawing::Size(100, 20);
			this->txtMomentum->TabIndex = 26;
			this->txtMomentum->Text = L"0,8";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(638, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(39, 13);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Lamda";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(624, 38);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 13);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Momentum";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(826, 432);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtMomentum);
			this->Controls->Add(this->txtLamda);
			this->Controls->Add(this->btnDelta);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->richTxt);
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
			this->Controls->Add(this->butPerceptron);
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
						double z = -1.00;
						int dist_size = Convert::ToInt32(textClassNum->Text);
						int class_lab = Convert::ToInt32(textClassLab->Text);


						Lperc.addValue(x, y, z, dist_size, class_lab);
						Ldelta.addValue(x, y, z, dist_size, class_lab);
					// MessageBox::Show("input x: " + x + "  input y: " + y + "  input z: " + z);
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

private: System::Void picPlane_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e)
	{
				 double x1, y1, *wPtr1;
				 Point PointX1;
				 Point PointY1;
				 Pen^ myPen1 = gcnew Pen(Color::Red);
				 int pX1, pY1;
	
				 double fw_buffer1[3] = { 1 };
				 while (Lperc.weightEmpty() != NULL)
				 {
					wPtr1 = Lperc.weightPop();
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
			

				 while (Ldelta.weightEmpty() != NULL)
				 {
						wPtr1 = Ldelta.weightPop();
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
						PointY1 = Point(200, pY1);

						e->Graphics->DrawLine(myPen1, PointX1, PointY1);
				 }


				 
}

private: System::Void btnDelta_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
			 double w1, w2, w3;
			 double Emax = 0.02, momentum_coef = 0.8, lamda = 1.00, fnet = 0;
			 double  *d_buffer, *inputPtr;

			 int P = 1;
			 int *d;
			 int dist;
			 int c_Num = Convert::ToInt32(textClassNum->Text);

			 //lamda = Convert::ToDouble(txtLamda->Text);
			 //momentum_coef = Convert::ToDouble(txtMomentum->Text);
			 w1 = Convert::ToDouble(textW1->Text);
			 w2 = Convert::ToDouble(textW2->Text);
			 w3 = Convert::ToDouble(textW3->Text);


			 /*network and layer neuron set*/

			 network.layerNum = Convert::ToInt32(richTxt->Lines->Length);

			 network.Layer_arr = new Layer[network.layerNum];
			 
			 for (int i = 0; i < richTxt->Lines->Length; i++)
			 {
				 network.Layer_arr[i].LayerErrorSum = 1.00;
				 network.Layer_arr[i].neuronNum = Convert::ToInt32(richTxt->Lines[i]);
				 network.Layer_arr[i].Neuron_arr = new Neuron[network.Layer_arr[i].neuronNum];
				// MessageBox::Show("n sayýsý:  " + network.Layer_arr[i].neuronNum +"**********"+ richTxt->Lines[i]);

				 for (int j = 0; j < network.Layer_arr[i].neuronNum; j++)
				 {
					 if (i==0)
						 network.Layer_arr[i].Neuron_arr[j].NeuronInputs = new double[4];	// neuron set input
					 else
					 {
						 network.Layer_arr[i].Neuron_arr[j].NeuronInputs = new double[3];
						 network.Layer_arr[i].Neuron_arr[j].NeuronDist = new double[c_Num];	// neuron set desired distance
					 }

					 network.Layer_arr[i].Neuron_arr[j].NeuronWeight = new double[3];
					 network.Layer_arr[i].Neuron_arr[j].NeuronWeight[0] = network.Layer_arr[i].Neuron_arr[j].activation.RandomFloat(0.0, 0.05);
					 network.Layer_arr[i].Neuron_arr[j].NeuronWeight[1] = network.Layer_arr[i].Neuron_arr[j].activation.RandomFloat(0.0, 0.05);
					 network.Layer_arr[i].Neuron_arr[j].NeuronWeight[2] = network.Layer_arr[i].Neuron_arr[j].activation.RandomFloat(0.0, 0.05);
				 }
			 }
			 

			 while (network.Layer_arr[1].LayerErrorSum > Emax)
			 {
				 network.Layer_arr[1].LayerErrorSum = 0.00; // sum error for output layer 
				 //MessageBox::Show("P sayýsý:  " + Ldelta.patternCount);
				 for (P = 1; P <= Ldelta.patternCount; P++)				// number of samples P
				 {
					 d = *Ldelta.popDist();
					 inputPtr = *Ldelta.noRemPopVal();
					

					//for (int t = 0; t < c_Num; t++)
					//{
						int k, m; // k value for layer index, m value for k. layer neuron index
						for (k = 0; k < network.layerNum; k++)  // Y and O compute. fnet and drvfnet
						{
							//MessageBox::Show("layer sayýsý:  " + network.layerNum);
							for (m = 0; m < network.Layer_arr[k].neuronNum; m++)
							{
								//MessageBox::Show("neuron sayýsý:  " + network.Layer_arr[k].neuronNum);

								if (k == 0) // input layer
								{								
									for (int i = 0; i < 4; i++)  
									{
										//MessageBox::Show("input:  " + *inputPtr);
										network.Layer_arr[k].Neuron_arr[m].NeuronInputs[i] = *inputPtr; // input layer set 
										inputPtr++;
									} 
									inputPtr -= 4;
									// compute the neurons fnet and drvfnet
									network.Layer_arr[k].Neuron_arr[m].n_fnet = network.Layer_arr[k].Neuron_arr[m].activation.UnipolarSigmoid(network.Layer_arr[k].Neuron_arr[m].NeuronInputs, network.Layer_arr[k].Neuron_arr[m].NeuronWeight, lamda);
									network.Layer_arr[k].Neuron_arr[m].n_drvfnet = network.Layer_arr[k].Neuron_arr[m].activation.DrvUnipolarSigmoid(network.Layer_arr[k].Neuron_arr[m].NeuronInputs, network.Layer_arr[k].Neuron_arr[m].NeuronWeight, lamda);
								}
								else // hidden layer or output layer
								{
									
									network.Layer_arr[k].Neuron_arr[m].NeuronInputs[0] = network.Layer_arr[k - 1].Neuron_arr[0].n_fnet;
									network.Layer_arr[k].Neuron_arr[m].NeuronInputs[1] = network.Layer_arr[k - 1].Neuron_arr[1].n_fnet;
									network.Layer_arr[k].Neuron_arr[m].NeuronInputs[2] = -1;
									//MessageBox::Show("input layer 1 :" + network.Layer_arr[k].Neuron_arr[m].NeuronInputs[0] + "   " + network.Layer_arr[k].Neuron_arr[m].NeuronInputs[1] + "   " + network.Layer_arr[k].Neuron_arr[m].NeuronInputs[2]);
									for (int j = 0; j < c_Num; j++)
									{
										network.Layer_arr[k].Neuron_arr[m].NeuronDist[j] = *d;
										d++;
									}
									d -= c_Num;

									network.Layer_arr[k].Neuron_arr[m].n_fnet = network.Layer_arr[k].Neuron_arr[m].activation.UnipolarSigmoid(network.Layer_arr[k].Neuron_arr[m].NeuronInputs, network.Layer_arr[k].Neuron_arr[m].NeuronWeight, lamda);
									network.Layer_arr[k].Neuron_arr[m].n_drvfnet = network.Layer_arr[k].Neuron_arr[m].activation.DrvUnipolarSigmoid(network.Layer_arr[k].Neuron_arr[m].NeuronInputs, network.Layer_arr[k].Neuron_arr[m].NeuronWeight, lamda);
									//double a = network.Layer_arr[k].Neuron_arr[m].NeuronDist[t];
									//MessageBox::Show("cikis katmaný input forward: " + network.Layer_arr[k].Neuron_arr[m].NeuronInputs[0]);
									//MessageBox::Show("a ve b: "+a+" - "+b);
									inputPtr += 3;
									//network.Layer_arr[1].LayerErrorSum += 0.5*sqrt(pow(abs(network.Layer_arr[k].Neuron_arr[m].NeuronDist[(int)(*inputPtr)] - network.Layer_arr[k].Neuron_arr[m].n_fnet), 2));
									
									network.Layer_arr[1].LayerErrorSum += 0.5*sqrt(pow(abs(*inputPtr - network.Layer_arr[k].Neuron_arr[m].n_fnet), 2));

									//double b = network.Layer_arr[1].LayerErrorSum;
									//MessageBox::Show("Error: " + b + " pattern: " + P + " dist: " + *inputPtr + " fnet: " + network.Layer_arr[k].Neuron_arr[m].n_fnet);
									inputPtr -= 3;
								}
							}
						}

						// back propagation
						for (k = network.layerNum - 1; k >= 0; k--)
						{
							for (m = 0; m < network.Layer_arr[k].neuronNum; m++)
							{
								if (k == 0)
								{
									network.Layer_arr[k].Neuron_arr[m].S = network.Layer_arr[k].Neuron_arr[m].n_drvfnet * network.Layer_arr[k + 1].Neuron_arr[0].S * network.Layer_arr[k + 1].Neuron_arr[0].NeuronWeight[m];
									for (int i = 0; i < 3; i++)
										network.Layer_arr[k].Neuron_arr[m].NeuronWeight[i] += momentum_coef*network.Layer_arr[k].Neuron_arr[m].S*network.Layer_arr[k].Neuron_arr[m].NeuronInputs[i];
								}
								else
								{
									//dist = network.Layer_arr[0].Neuron_arr[0].NeuronInputs[3];
									inputPtr += 3;
									network.Layer_arr[k].Neuron_arr[m].S = (*inputPtr - network.Layer_arr[k].Neuron_arr[m].n_fnet)*network.Layer_arr[k].Neuron_arr[m].n_drvfnet;
									inputPtr -= 3;
									//MessageBox::Show("cikis katmaný S: " + network.Layer_arr[k].Neuron_arr[m].S);
									//MessageBox::Show("cikis katmaný girisler: " + network.Layer_arr[k].Neuron_arr[m].NeuronInputs[0] + "  " + network.Layer_arr[k].Neuron_arr[m].NeuronInputs[1] + "  " + network.Layer_arr[k].Neuron_arr[m].NeuronInputs[2]);
									//MessageBox::Show("cikis katmaný input back: " + network.Layer_arr[k].Neuron_arr[m].NeuronInputs[0]);
									for (int i = 0; i < 3; i++)
									{
										network.Layer_arr[k].Neuron_arr[m].NeuronWeight[i] += momentum_coef*network.Layer_arr[k].Neuron_arr[m].S*network.Layer_arr[k].Neuron_arr[m].NeuronInputs[i];
									}	
								}		
							}
						}
					//}
				 }
			 }

			 MessageBox::Show("agirlik:    " + network.Layer_arr[0].Neuron_arr[0].NeuronWeight[0].ToString() + "  ****  " + network.Layer_arr[0].Neuron_arr[0].NeuronWeight[1].ToString() + "  ****  " + network.Layer_arr[0].Neuron_arr[0].NeuronWeight[2].ToString());
			 MessageBox::Show("agirlik:    " + network.Layer_arr[0].Neuron_arr[1].NeuronWeight[0].ToString() + "  ****  " + network.Layer_arr[0].Neuron_arr[1].NeuronWeight[1].ToString() + "  ****  " + network.Layer_arr[0].Neuron_arr[1].NeuronWeight[2].ToString());

			 Ldelta.addWeight(network.Layer_arr[0].Neuron_arr[0].NeuronWeight[0], network.Layer_arr[0].Neuron_arr[0].NeuronWeight[1], network.Layer_arr[0].Neuron_arr[0].NeuronWeight[2]);
			
			 Ldelta.addWeight(network.Layer_arr[0].Neuron_arr[1].NeuronWeight[0], network.Layer_arr[0].Neuron_arr[1].NeuronWeight[1], network.Layer_arr[0].Neuron_arr[1].NeuronWeight[2]);

			 picPlane->Refresh();
			
			 
			 
			 
			 
			 

}

private: System::Void butPerceptron_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{

			 int fnet = 0, P = 1, E = 1;
			 int c_Num = Convert::ToInt32(textClassNum->Text);
			 int *d;
			 double c = 0.5, w1, w2, w3, net = 0;


			 w1 = Convert::ToDouble(textW1->Text);
			 w2 = Convert::ToDouble(textW2->Text);
			 w3 = Convert::ToDouble(textW3->Text);

			 double w_initial[3] = { w1, w2, w3 };							// get the initial weight.
			 double **weight;
			 double w_buffer[3], buffer[4], *Valret, *d_buffer;// aðýrlýk, input bufferý ve input dizisinin adresi

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

				 for (P = 1; P <= Lperc.patternCount; P++)				// number of samples P
				 {



					 d_buffer = new double[c_Num];

					 d = *Lperc.popDist();								// input pop and dist_vec array set.

					 Valret = *Lperc.noRemPopVal();

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
						 if ((d_buffer[i] - fnet) != 0)					// update the weights
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
				 Lperc.addWeight(weight[0][i], weight[1][i], weight[2][i]);

			 picPlane->Refresh();
}


};
}
