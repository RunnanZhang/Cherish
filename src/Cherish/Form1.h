#pragma once


namespace Cherish {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;

	/// <summary>
	/// Form1 ժҪ
	///
	/// ����: ������Ĵ�������ƣ�����Ҫ����
	///          ����������������� .resx �ļ��������й���Դ���������ߵ�
	///          ����Դ�ļ��������ԡ�����
	///          �������������˴���Ĺ���
	///          ���ػ���Դ��ȷ������
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^  components;
	protected: 

	private:
		/// <summary>
		/// ����������������
		/// </summary>

private:
		String^ str;
		Random^ random;
		System::Drawing::Font^ font;
		SolidBrush^ brush;
		PointF point;
		bool Writed;
	private: System::Windows::Forms::Timer^  timer1;
			 Graphics^ g;
			 float a,b,x,y;
			  int mouseX;//��¼����һ������
			 int NumSum1;
			 int NumSum2;
			 int NumSum3;
			 int NumSum4;
			 int NumSum5;
			 int NumSum6;
			 int NumSum7;
			 int NumSum8;
			 int NumSum9;
			 int NumSum10;
			 int NumSum11;
			 int NumSum12;
			 int NumSum13;
			 int NumSum14;
			 int NumSum15;
			 int NumSum16;
			 int NumSum17;
			 int NumSum18;
			 int NumSum19;
			 int NumSum20;
			 int NumSum21;
			 int NumSum22; 
			 int NumSum23;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Timer^  timer3;
	private: System::Windows::Forms::Timer^  timer4;
	private: System::Windows::Forms::Timer^  timer5;
	private: System::Windows::Forms::Timer^  timer6;
	private: System::Windows::Forms::Timer^  timer7;
	private: System::Windows::Forms::Timer^  timer8;
	private: System::Windows::Forms::Timer^  timer9;
	private: System::Windows::Forms::Timer^  timer10;
	private: System::Windows::Forms::Timer^  timer11;
	private: System::Windows::Forms::Timer^  timer12;
	private: System::Windows::Forms::Timer^  timer13;
	private: System::Windows::Forms::Timer^  timer14;
	private: System::Windows::Forms::Timer^  timer15;
	private: System::Windows::Forms::Timer^  timer16;
	private: System::Windows::Forms::Timer^  timer17;
	private: System::Windows::Forms::Timer^  timer18;
	private: System::Windows::Forms::Timer^  timer19;
	private: System::Windows::Forms::Timer^  timer20;
	private: System::Windows::Forms::Timer^  timer21;
	private: System::Windows::Forms::Timer^  timer22;
	private: System::Windows::Forms::Timer^  timer24;
	private: System::Windows::Forms::Timer^  timer23;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer5 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer6 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer7 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer8 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer9 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer10 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer11 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer12 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer13 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer14 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer15 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer16 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer17 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer18 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer19 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer20 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer21 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer22 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer23 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer24 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 25;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 25;
			this->timer2->Tick += gcnew System::EventHandler(this, &Form1::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Interval = 25;
			this->timer3->Tick += gcnew System::EventHandler(this, &Form1::timer3_Tick);
			// 
			// timer4
			// 
			this->timer4->Interval = 25;
			this->timer4->Tick += gcnew System::EventHandler(this, &Form1::timer4_Tick);
			// 
			// timer5
			// 
			this->timer5->Interval = 25;
			this->timer5->Tick += gcnew System::EventHandler(this, &Form1::timer5_Tick);
			// 
			// timer6
			// 
			this->timer6->Interval = 25;
			this->timer6->Tick += gcnew System::EventHandler(this, &Form1::timer6_Tick);
			// 
			// timer7
			// 
			this->timer7->Interval = 25;
			this->timer7->Tick += gcnew System::EventHandler(this, &Form1::timer7_Tick);
			// 
			// timer8
			// 
			this->timer8->Interval = 25;
			this->timer8->Tick += gcnew System::EventHandler(this, &Form1::timer8_Tick);
			// 
			// timer9
			// 
			this->timer9->Interval = 25;
			this->timer9->Tick += gcnew System::EventHandler(this, &Form1::timer9_Tick);
			// 
			// timer10
			// 
			this->timer10->Interval = 25;
			this->timer10->Tick += gcnew System::EventHandler(this, &Form1::timer10_Tick);
			// 
			// timer11
			// 
			this->timer11->Interval = 25;
			this->timer11->Tick += gcnew System::EventHandler(this, &Form1::timer11_Tick);
			// 
			// timer12
			// 
			this->timer12->Interval = 25;
			this->timer12->Tick += gcnew System::EventHandler(this, &Form1::timer12_Tick);
			// 
			// timer13
			// 
			this->timer13->Interval = 25;
			this->timer13->Tick += gcnew System::EventHandler(this, &Form1::timer13_Tick);
			// 
			// timer14
			// 
			this->timer14->Interval = 25;
			this->timer14->Tick += gcnew System::EventHandler(this, &Form1::timer14_Tick);
			// 
			// timer15
			// 
			this->timer15->Interval = 25;
			this->timer15->Tick += gcnew System::EventHandler(this, &Form1::timer15_Tick);
			// 
			// timer16
			// 
			this->timer16->Interval = 25;
			this->timer16->Tick += gcnew System::EventHandler(this, &Form1::timer16_Tick);
			// 
			// timer17
			// 
			this->timer17->Interval = 25;
			this->timer17->Tick += gcnew System::EventHandler(this, &Form1::timer17_Tick);
			// 
			// timer18
			// 
			this->timer18->Interval = 25;
			this->timer18->Tick += gcnew System::EventHandler(this, &Form1::timer18_Tick);
			// 
			// timer19
			// 
			this->timer19->Interval = 25;
			this->timer19->Tick += gcnew System::EventHandler(this, &Form1::timer19_Tick);
			// 
			// timer20
			// 
			this->timer20->Interval = 25;
			this->timer20->Tick += gcnew System::EventHandler(this, &Form1::timer20_Tick);
			// 
			// timer21
			// 
			this->timer21->Interval = 25;
			this->timer21->Tick += gcnew System::EventHandler(this, &Form1::timer21_Tick);
			// 
			// timer22
			// 
			this->timer22->Interval = 25;
			this->timer22->Tick += gcnew System::EventHandler(this, &Form1::timer22_Tick);
			// 
			// timer23
			// 
			this->timer23->Interval = 25;
			this->timer23->Tick += gcnew System::EventHandler(this, &Form1::timer23_Tick);
			// 
			// timer24
			// 
			this->timer24->Enabled = true;
			this->timer24->Tick += gcnew System::EventHandler(this, &Form1::timer24_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Red;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form1";
			this->TransparencyKey = System::Drawing::Color::Red;
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::Form1_Paint);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseDown);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Form1_KeyPress);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseMove_1);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 g=this->CreateGraphics();
				 random=gcnew Random();
				 brush=gcnew SolidBrush(Color::Green);
				 str="ͮ";
				 font=gcnew System::Drawing::Font(FontFamily::GenericSansSerif,8.0f,FontStyle::Italic);
				  x=Screen::AllScreens[0]->Bounds.Size.Width;
				  y=Screen::AllScreens[0]->Bounds.Size.Height;
				  this->Writed=false;//д�ļ����������
				  NumSum1=0;NumSum2=0;NumSum3=0;
				  NumSum4=0; NumSum5=0;NumSum6=0;
				  NumSum7=0;NumSum8=0;NumSum9=0;
				  NumSum10=0;NumSum11=0;NumSum12=0;
				  NumSum13=0;NumSum14=0;NumSum15=0;
				  NumSum16=0;NumSum17=0;NumSum18=0;
				  NumSum19=0;NumSum20=0;NumSum21=0;
				  NumSum22=0;NumSum23=0;
			 }
	private: System::Void Form1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 Application::Exit();
			 }
	private: System::Void Form1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 Application::Exit();
			 }
	private:Void Draw(float a,float b){}
	private: System::Void Form1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 this->NumSum1++;
				 a=0.98*x/2;b=1.1*y/5;
				 if(this->NumSum1==50)
				 {	 
					 NumSum1=1;NumSum2=0;NumSum3=0;
		     		 NumSum4=0; NumSum5=0;NumSum6=0;
				     NumSum7=0;NumSum8=0;NumSum9=0;
				     NumSum10=0;NumSum11=0;NumSum12=0;
				     NumSum13=0;NumSum14=0;NumSum15=0;
				     NumSum16=0;NumSum17=0;NumSum18=0;
				     NumSum19=0;NumSum20=0;NumSum21=0;
				     NumSum22=0;NumSum23=0;
					 g->Clear(Color::Red);
					 this->timer1->Enabled=true;
				 }			 
				 if(this->NumSum1==1 && this->Writed==true)
				 {
					 FileStream^ fs;
					 StreamWriter^sw;
					 String^ Filename=System::Environment::GetFolderPath(System::Environment::SpecialFolder::Desktop)+"\\Cherish.txt";
					 fs=gcnew FileStream(Filename,FileMode::Create,FileAccess::Write);
					 sw=gcnew StreamWriter(fs,Encoding::UTF8);
					 String^ str="ͮ��\r\n��������绰�����кö໰Ҫ˵������һ������˵�����ƺ���ʲô��������\r\n���ˡ��þ�֮ǰ�Ҿ���д������򣬵���һֱû��ɣ�����ǰ�����㻹������\r\n���Ѿ�������һ���˹¹µ����ġ���ʱ���Ҳ�Ӧ���ٴ����㡣��������������\r\n���Ժ���˵˵������ˡ�\r\n���������˵���ѵ�Ҳ����д����ĳ����ˣ�������4466�У�ÿ���ֵ���\r\n�궼����һ��һ���Գ����ġ�ϣ�����������������֪�������Ҷ��������һ\r\n�㶼���˽⣬����Ҳ����û�н����������һ������ǲ��ˡ����Ҵ�һʱ��д��\r\n�ռǣ�����һ�ж�����ô���ɣ������¼������Һ��㷢�����£��ҷ��ֵ�ȷ\r\nԵ�ֲ���ǿ����ǰ����Ҳ��û���������ɡ������ҷ��ָо�����������\r\n�������ˣ���������Ҳ��Ϊ���������ʹ�����Ϊʲôϲ���㣬����Ϊ�ÿ�Ư��\r\n�����Ƕ��Һã��ҵĻش��Ƕ����ǣ���˵���㲻�Ϸǳ��ÿ�������Ҳ���Ǻܺ�\r\n�����Ǻ�����һ��ǳ����ģ��������ָо��޷��Ա������ָо�һֱ������\r\n�����ǣ������ͻ���\r\n��֪���кܶ���׷�㣬��Ҳ���Ժͺܶ����ĵ绰�����㲻������ϵ��Ҳһ��Ҳ\r\n�����į�������Ҳ��ǣ�ÿ�ص�������ʲô��ظ��ҵĶ������Ǿ�����������\r\n��ʵ������Ҳ���ù�������ֵ�ʱ����ᷢ���Ÿ����ң���������û�뵽��\r\n�������������ﻹ�ǻ��뵽�ҵģ�����ֻ����ôһ��� ����Ȼ��������һ��\r\n���ˣ���ϣ������Ҹ����ᣬ����˵��Ҫʱ�䣬���ⲻ�Ǹ������⡣ϲ��һ��\r\n����Ĳ��ף�����������˵���������Ժ��ڡ�������ԵĻ���ϣ�������\r\n�绰���߶��ţ�������ʲô�������ϣ����̹���ܸ����ң���Ҫ����Ķ���һ\r\n��о�û�����˵�����ɣ���Ȼ�Ҿ���������ϵ����������Ĳ�֪����������\r\nô��ģ������Ǹ��и������ʱ���ˣ��������ʲô����ͽ�ͣ���Ҳ����ϲ��\r\n�ң���Ҳ������Ե�ɣ�����ϲ�������Ҵ�û��ڹ���\r\n���۽������Ҷ�ϣ�����Ҹ�����";
					 sw->Write(str);
					 this->Writed=true;
					 sw->Close();
				 }
				 switch (this->NumSum1)
				 {
					 case 1:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-12,b);			  
						 break;
					 case 2:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
					 g->DrawString(str,font,brush,a-24,b);
						 break;
					 case 3:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+12,b);
						 break;
					 case 4:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b);				  			
						 break;
					 case 5:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+12);
						 break;
					 case 6:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+24);
						 break;
					 case 7:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+36);		  
						 break;
					 case 8:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+60);
					 case 9:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 a=0.98*x/2;b=1.1*y/5;g->DrawString(str,font,brush,a+24,b+72);
						 break;
					 case 10:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+84);		  			 
						 break;
						 case 11:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+96);
						 break;
						 case 12:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+12,b+84);
						 break;
						 case 13:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-26,b+12);	  
						 break;
						 case 14:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-27,b+24);
						 break;
						 case 15:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-29,b+36);
						 break;
						 case 16:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-31,b+48);
						 break;
						 case 17:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-43,b+48);
						 break;
						 case 18:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-55,b+48);
						 break;
						 case 19:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));				
						 g->DrawString(str,font,brush,a-17,b+48);
						 break;
						 case 20:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-3,b+48);
						 break;
						 case 21:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+11,b+48);
						 break;
						 case 22:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+48);		  
						 break;
						 case 23:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+36,b+48);
						 break;
						 case 24:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-33,b+60);
						 break;
						 case 25:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-36,b+72);
						 break;
						 case 26:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-40,b+84);
						 break;
						 case 27:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-46,b+96);
						 break;
						 case 28:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-8,b+16);  
						 break;
						 case 29:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a,b+24);
						 break;
						 case 30:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+8,b+32);
						 break;
						 case 31:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+70,b);	  
						 break;
						 case 32:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+62,b+10);
						 break;
						 case 33:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+20);
						 break;
						 case 34:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+46,b+30);
						 break;
						 case 35:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+58,b+50);//�м��
						 break;
						 case 36:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+68,b+40);
						 break;
						 case 37:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+48,b+60);
						 break;
						 case 38:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+78,b+30);
						 break;
						 case 39:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+44,b+96);
						 break;
						 case 40:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+86);	 
						 break;
						 case 41:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+64,b+76);
						 break;
						 case 42:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+74,b+66);
						 break;
						 case 43:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a,b);
						 break;
						 }
						 this->timer1->Enabled=false;
						 this->timer2->Enabled=true;
			 }
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
			 this->NumSum2++;
			 a=6.5*x/16;b=y/9;
				 switch (this->NumSum2) 
				 {
					 case 1:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-12,b);			  
						 break;
					 case 41:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
					 g->DrawString(str,font,brush,a-24,b);
						 break;
					 case 13:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+12,b);
						 break;
					 case 34:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b);				  			
						 break;
					 case 15:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+12);
						 break;
					 case 16:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+24);
						 break;
					 case 7:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+36);		  
						 break;
					 case 31:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+60);
					 case 9:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 a=0.98*x/2;b=1.1*y/5;g->DrawString(str,font,brush,a+24,b+72);
						 break;
					 case 43:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+84);		  			 
						 break;
						 case 11:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+96);
						 break;
						 case 12:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+12,b+84);
						 break;
						 case 3:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-26,b+12);	  
						 break;
						 case 4:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-27,b+24);
						 break;
						 case 5:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-29,b+36);
						 break;
						 case 6:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-31,b+48);
						 break;
						 case 17:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-43,b+48);
						 break;
						 case 14:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-55,b+48);
						 break;
						 case 19:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));				
						 g->DrawString(str,font,brush,a-17,b+48);
						 break;
						 case 29:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-3,b+48);
						 break;
						 case 10:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+11,b+48);
						 break;
						 case 22:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+48);		  
						 break;
						 case 23:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+36,b+48);
						 break;
						 case 39:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-33,b+60);
						 break;
						 case 25:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-36,b+72);
						 break;
						 case 26:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-40,b+84);
						 break;
						 case 37:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-46,b+96);
						 break;
						 case 28:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-8,b+16);  
						 break;
						 case 20:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a,b+24);
						 break;
						 case 30:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+8,b+32);
						 break;
						 case 8:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+70,b);	  
						 break;
						 case 42:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+62,b+10);
						 break;
						 case 33:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+20);
						 break;
						 case 18:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+46,b+30);
						 break;
						 case 35:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+58,b+50);//�м��
						 break;
						 case 40:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+68,b+40);
						 break;
						 case 27:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+48,b+60);
						 break;
						 case 38:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+78,b+30);
						 break;
						 case 24:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+44,b+96);
						 break;
						 case 36:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+86);	 
						 break;
						 case 21:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+64,b+76);
						 break;
						 case 32:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+74,b+66);
						 break;
						 case 2:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a,b);
						 break;
						 }
						 this->timer2->Enabled=false;
						 this->timer3->Enabled=true;					 
		 }
private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) {
			 			 this->NumSum3++;
			 a=x-6.47*x/16;b=13.0*y/16;
				 switch (this->NumSum3)
				 {
					 case 1:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-12,b);			  
						 break;
					 case 2:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
					 g->DrawString(str,font,brush,a-24,b);
						 break;
					 case 3:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+12,b);
						 break;
					 case 4:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b);				  			
						 break;
					 case 5:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+12);
						 break;
					 case 6:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+24);
						 break;
					 case 7:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+36);		  
						 break;
					 case 8:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+60);
					 case 9:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 a=0.98*x/2;b=1.1*y/5;g->DrawString(str,font,brush,a+24,b+72);
						 break;
					 case 10:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+84);		  			 
						 break;
						 case 11:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+96);
						 break;
						 case 12:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+12,b+84);
						 break;
						 case 13:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-26,b+12);	  
						 break;
						 case 14:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-27,b+24);
						 break;
						 case 15:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-29,b+36);
						 break;
						 case 16:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-31,b+48);
						 break;
						 case 17:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-43,b+48);
						 break;
						 case 18:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-55,b+48);
						 break;
						 case 19:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));				
						 g->DrawString(str,font,brush,a-17,b+48);
						 break;
						 case 20:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-3,b+48);
						 break;
						 case 21:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+11,b+48);
						 break;
						 case 22:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+48);		  
						 break;
						 case 23:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+36,b+48);
						 break;
						 case 24:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-33,b+60);
						 break;
						 case 25:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-36,b+72);
						 break;
						 case 26:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-40,b+84);
						 break;
						 case 27:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-46,b+96);
						 break;
						 case 28:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-8,b+16);  
						 break;
						 case 29:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a,b+24);
						 break;
						 case 30:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+8,b+32);
						 break;
						 case 31:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+70,b);	  
						 break;
						 case 32:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+62,b+10);
						 break;
						 case 33:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+20);
						 break;
						 case 34:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+46,b+30);
						 break;
						 case 35:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+58,b+50);//�м��
						 break;
						 case 36:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+68,b+40);
						 break;
						 case 37:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+48,b+60);
						 break;
						 case 38:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+78,b+30);
						 break;
						 case 39:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+44,b+96);
						 break;
						 case 40:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+86);	 
						 break;
						 case 41:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+64,b+76);
						 break;
						 case 42:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+74,b+66);
						 break;
						 case 43:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a,b);
						 break;
						 }
						 this->timer3->Enabled=false;
						 this->timer4->Enabled=true;	

		 }
private: System::Void timer4_Tick(System::Object^  sender, System::EventArgs^  e) {
			  			 this->NumSum4++;
						 a=x-3.8*x/16;b=10.3*y/16;
				 switch (this->NumSum4)
				 {
					 case 1:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-12,b);			  
						 break;
					 case 2:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
					 g->DrawString(str,font,brush,a-24,b);
						 break;
					 case 3:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+12,b);
						 break;
					 case 4:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b);				  			
						 break;
					 case 5:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+12);
						 break;
					 case 6:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+24);
						 break;
					 case 7:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+36);		  
						 break;
					 case 8:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+60);
					 case 9:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 a=0.98*x/2;b=1.1*y/5;g->DrawString(str,font,brush,a+24,b+72);
						 break;
					 case 10:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+84);		  			 
						 break;
						 case 11:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+96);
						 break;
						 case 12:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+12,b+84);
						 break;
						 case 13:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-26,b+12);	  
						 break;
						 case 14:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-27,b+24);
						 break;
						 case 15:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-29,b+36);
						 break;
						 case 16:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-31,b+48);
						 break;
						 case 17:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-43,b+48);
						 break;
						 case 18:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-55,b+48);
						 break;
						 case 19:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));				
						 g->DrawString(str,font,brush,a-17,b+48);
						 break;
						 case 20:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-3,b+48);
						 break;
						 case 21:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+11,b+48);
						 break;
						 case 22:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+48);		  
						 break;
						 case 23:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+36,b+48);
						 break;
						 case 24:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-33,b+60);
						 break;
						 case 25:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-36,b+72);
						 break;
						 case 26:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-40,b+84);
						 break;
						 case 27:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-46,b+96);
						 break;
						 case 28:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-8,b+16);  
						 break;
						 case 29:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a,b+24);
						 break;
						 case 30:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+8,b+32);
						 break;
						 case 31:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+70,b);	  
						 break;
						 case 32:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+62,b+10);
						 break;
						 case 33:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+20);
						 break;
						 case 34:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+46,b+30);
						 break;
						 case 35:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+58,b+50);//�м��
						 break;
						 case 36:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+68,b+40);
						 break;
						 case 37:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+48,b+60);
						 break;
						 case 38:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+78,b+30);
						 break;
						 case 39:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+44,b+96);
						 break;
						 case 40:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+86);	 
						 break;
						 case 41:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+64,b+76);
						 break;
						 case 42:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+74,b+66);
						 break;
						 case 43:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a,b);
						 break;
						 }
						 this->timer4->Enabled=false;
						 this->timer5->Enabled=true;	
			 
		 }
private: System::Void timer5_Tick(System::Object^  sender, System::EventArgs^  e) {
			  			 this->NumSum5++;
						 a=12.5*x/16;b=0.9*y/15;
				 switch (this->NumSum5)
				 {
					 case 1:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-12,b);			  
						 break;
					 case 2:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
					 g->DrawString(str,font,brush,a-24,b);
						 break;
					 case 3:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+12,b);
						 break;
					 case 4:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b);				  			
						 break;
					 case 5:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+12);
						 break;
					 case 6:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+24);
						 break;
					 case 7:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+36);		  
						 break;
					 case 8:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+60);
					 case 9:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 a=0.98*x/2;b=1.1*y/5;g->DrawString(str,font,brush,a+24,b+72);
						 break;
					 case 10:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+84);		  			 
						 break;
						 case 11:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+96);
						 break;
						 case 12:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+12,b+84);
						 break;
						 case 13:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-26,b+12);	  
						 break;
						 case 14:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-27,b+24);
						 break;
						 case 15:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-29,b+36);
						 break;
						 case 16:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-31,b+48);
						 break;
						 case 17:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-43,b+48);
						 break;
						 case 18:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-55,b+48);
						 break;
						 case 19:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));				
						 g->DrawString(str,font,brush,a-17,b+48);
						 break;
						 case 20:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-3,b+48);
						 break;
						 case 21:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+11,b+48);
						 break;
						 case 22:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+48);		  
						 break;
						 case 23:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+36,b+48);
						 break;
						 case 24:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-33,b+60);
						 break;
						 case 25:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-36,b+72);
						 break;
						 case 26:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-40,b+84);
						 break;
						 case 27:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-46,b+96);
						 break;
						 case 28:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-8,b+16);  
						 break;
						 case 29:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a,b+24);
						 break;
						 case 30:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+8,b+32);
						 break;
						 case 31:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+70,b);	  
						 break;
						 case 32:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+62,b+10);
						 break;
						 case 33:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+20);
						 break;
						 case 34:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+46,b+30);
						 break;
						 case 35:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+58,b+50);//�м��
						 break;
						 case 36:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+68,b+40);
						 break;
						 case 37:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+48,b+60);
						 break;
						 case 38:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+78,b+30);
						 break;
						 case 39:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+44,b+96);
						 break;
						 case 40:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+86);	 
						 break;
						 case 41:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+64,b+76);
						 break;
						 case 42:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+74,b+66);
						 break;
						 case 43:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a,b);
						 break;
						 }
						 this->timer5->Enabled=false;
						 this->timer6->Enabled=true;	
		 }
private: System::Void timer6_Tick(System::Object^  sender, System::EventArgs^  e) {
			  			 this->NumSum6++;a=x/2;b=13.8*y/16;
				 switch (this->NumSum6)
				 {
					 case 1:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-12,b);			  
						 break;
					 case 2:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
					 g->DrawString(str,font,brush,a-24,b);
						 break;
					 case 3:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+12,b);
						 break;
					 case 4:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b);				  			
						 break;
					 case 5:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+12);
						 break;
					 case 6:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+24);
						 break;
					 case 7:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+36);		  
						 break;
					 case 8:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+60);
					 case 9:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 a=0.98*x/2;b=1.1*y/5;g->DrawString(str,font,brush,a+24,b+72);
						 break;
					 case 10:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+84);		  			 
						 break;
						 case 11:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+96);
						 break;
						 case 12:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+12,b+84);
						 break;
						 case 13:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-26,b+12);	  
						 break;
						 case 14:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-27,b+24);
						 break;
						 case 15:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-29,b+36);
						 break;
						 case 16:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-31,b+48);
						 break;
						 case 17:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-43,b+48);
						 break;
						 case 18:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-55,b+48);
						 break;
						 case 19:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));				
						 g->DrawString(str,font,brush,a-17,b+48);
						 break;
						 case 20:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-3,b+48);
						 break;
						 case 21:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+11,b+48);
						 break;
						 case 22:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+48);		  
						 break;
						 case 23:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+36,b+48);
						 break;
						 case 24:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-33,b+60);
						 break;
						 case 25:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-36,b+72);
						 break;
						 case 26:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-40,b+84);
						 break;
						 case 27:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-46,b+96);
						 break;
						 case 28:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-8,b+16);  
						 break;
						 case 29:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a,b+24);
						 break;
						 case 30:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+8,b+32);
						 break;
						 case 31:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+70,b);	  
						 break;
						 case 32:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+62,b+10);
						 break;
						 case 33:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+20);
						 break;
						 case 34:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+46,b+30);
						 break;
						 case 35:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+58,b+50);//�м��
						 break;
						 case 36:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+68,b+40);
						 break;
						 case 37:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+48,b+60);
						 break;
						 case 38:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+78,b+30);
						 break;
						 case 39:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+44,b+96);
						 break;
						 case 40:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+86);	 
						 break;
						 case 41:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+64,b+76);
						 break;
						 case 42:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+74,b+66);
						 break;
						 case 43:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a,b);
						 break;
						 }
						 this->timer6->Enabled=false;
						 this->timer7->Enabled=true;	
		 }
private: System::Void timer7_Tick(System::Object^  sender, System::EventArgs^  e) {
			  			 this->NumSum7++;
						 a=x-5.12*x/16;b=12.0*y/16;
				 switch (this->NumSum7)
				 {
					 case 1:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-12,b);			  
						 break;
					 case 2:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
					 g->DrawString(str,font,brush,a-24,b);
						 break;
					 case 3:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+12,b);
						 break;
					 case 4:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b);				  			
						 break;
					 case 5:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+12);
						 break;
					 case 6:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+24);
						 break;
					 case 7:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+36);		  
						 break;
					 case 8:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+60);
					 case 9:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 a=0.98*x/2;b=1.1*y/5;g->DrawString(str,font,brush,a+24,b+72);
						 break;
					 case 10:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+84);		  			 
						 break;
						 case 11:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+96);
						 break;
						 case 12:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+12,b+84);
						 break;
						 case 13:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-26,b+12);	  
						 break;
						 case 14:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-27,b+24);
						 break;
						 case 15:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-29,b+36);
						 break;
						 case 16:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-31,b+48);
						 break;
						 case 17:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-43,b+48);
						 break;
						 case 18:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-55,b+48);
						 break;
						 case 19:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));				
						 g->DrawString(str,font,brush,a-17,b+48);
						 break;
						 case 20:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-3,b+48);
						 break;
						 case 21:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+11,b+48);
						 break;
						 case 22:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+48);		  
						 break;
						 case 23:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+36,b+48);
						 break;
						 case 24:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-33,b+60);
						 break;
						 case 25:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-36,b+72);
						 break;
						 case 26:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-40,b+84);
						 break;
						 case 27:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-46,b+96);
						 break;
						 case 28:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-8,b+16);  
						 break;
						 case 29:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a,b+24);
						 break;
						 case 30:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+8,b+32);
						 break;
						 case 31:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+70,b);	  
						 break;
						 case 32:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+62,b+10);
						 break;
						 case 33:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+20);
						 break;
						 case 34:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+46,b+30);
						 break;
						 case 35:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+58,b+50);//�м��
						 break;
						 case 36:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+68,b+40);
						 break;
						 case 37:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+48,b+60);
						 break;
						 case 38:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+78,b+30);
						 break;
						 case 39:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+44,b+96);
						 break;
						 case 40:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+86);	 
						 break;
						 case 41:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+64,b+76);
						 break;
						 case 42:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+74,b+66);
						 break;
						 case 43:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a,b);
						 break;
						 }
						 this->timer7->Enabled=false;
						 this->timer8->Enabled=true;	
		 }
private: System::Void timer8_Tick(System::Object^  sender, System::EventArgs^  e) {
			  			 this->NumSum8++;
						 a=11.0*x/16;b=1/20;//�
				 switch (this->NumSum8)
				 {
					 case 1:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-12,b);			  
						 break;
					 case 2:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
					 g->DrawString(str,font,brush,a-24,b);
						 break;
					 case 3:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+12,b);
						 break;
					 case 4:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b);				  			
						 break;
					 case 5:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+12);
						 break;
					 case 6:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+24);
						 break;
					 case 7:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+36);		  
						 break;
					 case 8:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+60);
					 case 9:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 a=0.98*x/2;b=1.1*y/5;g->DrawString(str,font,brush,a+24,b+72);
						 break;
					 case 10:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+84);		  			 
						 break;
						 case 11:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+96);
						 break;
						 case 12:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+12,b+84);
						 break;
						 case 13:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-26,b+12);	  
						 break;
						 case 14:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-27,b+24);
						 break;
						 case 15:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-29,b+36);
						 break;
						 case 16:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-31,b+48);
						 break;
						 case 17:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-43,b+48);
						 break;
						 case 18:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-55,b+48);
						 break;
						 case 19:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));				
						 g->DrawString(str,font,brush,a-17,b+48);
						 break;
						 case 20:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-3,b+48);
						 break;
						 case 21:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+11,b+48);
						 break;
						 case 22:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+48);		  
						 break;
						 case 23:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+36,b+48);
						 break;
						 case 24:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-33,b+60);
						 break;
						 case 25:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-36,b+72);
						 break;
						 case 26:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-40,b+84);
						 break;
						 case 27:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-46,b+96);
						 break;
						 case 28:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-8,b+16);  
						 break;
						 case 29:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a,b+24);
						 break;
						 case 30:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+8,b+32);
						 break;
						 case 31:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+70,b);	  
						 break;
						 case 32:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+62,b+10);
						 break;
						 case 33:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+20);
						 break;
						 case 34:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+46,b+30);
						 break;
						 case 35:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+58,b+50);//�м��
						 break;
						 case 36:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+68,b+40);
						 break;
						 case 37:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+48,b+60);
						 break;
						 case 38:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+78,b+30);
						 break;
						 case 39:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+44,b+96);
						 break;
						 case 40:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+86);	 
						 break;
						 case 41:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+64,b+76);
						 break;
						 case 42:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+74,b+66);
						 break;
						 case 43:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a,b);
						 break;
						 }
						 this->timer8->Enabled=false;
						 this->timer9->Enabled=true;	
		 }
private: System::Void timer9_Tick(System::Object^  sender, System::EventArgs^  e) {
			  			 this->NumSum9++;
						 a=5.1*x/16;b=1/20;//�
				 switch (this->NumSum9)
				 {
					 case 1:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-12,b);			  
						 break;
					 case 2:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
					 g->DrawString(str,font,brush,a-24,b);
						 break;
					 case 3:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+12,b);
						 break;
					 case 4:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b);				  			
						 break;
					 case 5:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+12);
						 break;
					 case 6:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+24);
						 break;
					 case 7:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+36);		  
						 break;
					 case 8:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+60);
					 case 9:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 a=0.98*x/2;b=1.1*y/5;g->DrawString(str,font,brush,a+24,b+72);
						 break;
					 case 10:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+84);		  			 
						 break;
						 case 11:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+96);
						 break;
						 case 12:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+12,b+84);
						 break;
						 case 13:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-26,b+12);	  
						 break;
						 case 14:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-27,b+24);
						 break;
						 case 15:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-29,b+36);
						 break;
						 case 16:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-31,b+48);
						 break;
						 case 17:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-43,b+48);
						 break;
						 case 18:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-55,b+48);
						 break;
						 case 19:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));				
						 g->DrawString(str,font,brush,a-17,b+48);
						 break;
						 case 20:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-3,b+48);
						 break;
						 case 21:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+11,b+48);
						 break;
						 case 22:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+48);		  
						 break;
						 case 23:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+36,b+48);
						 break;
						 case 24:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-33,b+60);
						 break;
						 case 25:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-36,b+72);
						 break;
						 case 26:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-40,b+84);
						 break;
						 case 27:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-46,b+96);
						 break;
						 case 28:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-8,b+16);  
						 break;
						 case 29:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a,b+24);
						 break;
						 case 30:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+8,b+32);
						 break;
						 case 31:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+70,b);	  
						 break;
						 case 32:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+62,b+10);
						 break;
						 case 33:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+20);
						 break;
						 case 34:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+46,b+30);
						 break;
						 case 35:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+58,b+50);//�м��
						 break;
						 case 36:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+68,b+40);
						 break;
						 case 37:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+48,b+60);
						 break;
						 case 38:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+78,b+30);
						 break;
						 case 39:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+44,b+96);
						 break;
						 case 40:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+86);	 
						 break;
						 case 41:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+64,b+76);
						 break;
						 case 42:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+74,b+66);
						 break;
						 case 43:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a,b);
						 break;
						 }
						 this->timer9->Enabled=false;
						 this->timer10->Enabled=true;	
		 }
private: System::Void timer10_Tick(System::Object^  sender, System::EventArgs^  e) {
			  			 this->NumSum10++;
						 a=x-1.37*x/16;b=6.7*y/16;
				 switch (this->NumSum10)
				 {
					 case 1:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-12,b);			  
						 break;
					 case 2:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
					 g->DrawString(str,font,brush,a-24,b);
						 break;
					 case 3:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+12,b);
						 break;
					 case 4:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b);				  			
						 break;
					 case 5:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+12);
						 break;
					 case 6:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+24);
						 break;
					 case 7:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+36);		  
						 break;
					 case 8:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+60);
					 case 9:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 a=0.98*x/2;b=1.1*y/5;g->DrawString(str,font,brush,a+24,b+72);
						 break;
					 case 10:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+84);		  			 
						 break;
						 case 11:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+96);
						 break;
						 case 12:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+12,b+84);
						 break;
						 case 13:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-26,b+12);	  
						 break;
						 case 14:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-27,b+24);
						 break;
						 case 15:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-29,b+36);
						 break;
						 case 16:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-31,b+48);
						 break;
						 case 17:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-43,b+48);
						 break;
						 case 18:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-55,b+48);
						 break;
						 case 19:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));				
						 g->DrawString(str,font,brush,a-17,b+48);
						 break;
						 case 20:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-3,b+48);
						 break;
						 case 21:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+11,b+48);
						 break;
						 case 22:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+48);		  
						 break;
						 case 23:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+36,b+48);
						 break;
						 case 24:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-33,b+60);
						 break;
						 case 25:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-36,b+72);
						 break;
						 case 26:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-40,b+84);
						 break;
						 case 27:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-46,b+96);
						 break;
						 case 28:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-8,b+16);  
						 break;
						 case 29:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a,b+24);
						 break;
						 case 30:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+8,b+32);
						 break;
						 case 31:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+70,b);	  
						 break;
						 case 32:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+62,b+10);
						 break;
						 case 33:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+20);
						 break;
						 case 34:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+46,b+30);
						 break;
						 case 35:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+58,b+50);//�м��
						 break;
						 case 36:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+68,b+40);
						 break;
						 case 37:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+48,b+60);
						 break;
						 case 38:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+78,b+30);
						 break;
						 case 39:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+44,b+96);
						 break;
						 case 40:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+86);	 
						 break;
						 case 41:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+64,b+76);
						 break;
						 case 42:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+74,b+66);
						 break;
						 case 43:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a,b);
						 break;
						 }
						 this->timer10->Enabled=false;
						 this->timer11->Enabled=true;	
		 }
private: System::Void timer11_Tick(System::Object^  sender, System::EventArgs^  e) {
			  			 this->NumSum11++;a=0.7*x/16;b=4.7*y/16;
				 switch (this->NumSum11)
				 {
					 case 1:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-12,b);			  
						 break;
					 case 2:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
					 g->DrawString(str,font,brush,a-24,b);
						 break;
					 case 3:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+12,b);
						 break;
					 case 4:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b);				  			
						 break;
					 case 5:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+12);
						 break;
					 case 6:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+24);
						 break;
					 case 7:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+36);		  
						 break;
					 case 8:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+60);
					 case 9:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 a=0.98*x/2;b=1.1*y/5;g->DrawString(str,font,brush,a+24,b+72);
						 break;
					 case 10:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+84);		  			 
						 break;
						 case 11:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+96);
						 break;
						 case 12:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+12,b+84);
						 break;
						 case 13:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-26,b+12);	  
						 break;
						 case 14:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-27,b+24);
						 break;
						 case 15:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-29,b+36);
						 break;
						 case 16:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-31,b+48);
						 break;
						 case 17:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-43,b+48);
						 break;
						 case 18:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-55,b+48);
						 break;
						 case 19:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));				
						 g->DrawString(str,font,brush,a-17,b+48);
						 break;
						 case 20:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-3,b+48);
						 break;
						 case 21:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+11,b+48);
						 break;
						 case 22:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+48);		  
						 break;
						 case 23:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+36,b+48);
						 break;
						 case 24:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-33,b+60);
						 break;
						 case 25:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-36,b+72);
						 break;
						 case 26:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-40,b+84);
						 break;
						 case 27:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-46,b+96);
						 break;
						 case 28:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-8,b+16);  
						 break;
						 case 29:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a,b+24);
						 break;
						 case 30:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+8,b+32);
						 break;
						 case 31:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+70,b);	  
						 break;
						 case 32:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+62,b+10);
						 break;
						 case 33:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+20);
						 break;
						 case 34:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+46,b+30);
						 break;
						 case 35:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+58,b+50);//�м��
						 break;
						 case 36:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+68,b+40);
						 break;
						 case 37:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+48,b+60);
						 break;
						 case 38:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+78,b+30);
						 break;
						 case 39:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+44,b+96);
						 break;
						 case 40:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+86);	 
						 break;
						 case 41:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+64,b+76);
						 break;
						 case 42:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+74,b+66);
						 break;
						 case 43:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a,b);
						 break;
						 }
						 this->timer11->Enabled=false;
						 this->timer12->Enabled=true;	
		 }
private: System::Void timer12_Tick(System::Object^  sender, System::EventArgs^  e) {
			  			 this->NumSum12++;a=x-2.5*x/16;b=8.7*y/16;
				 switch (this->NumSum12)
				 {
					 case 1:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-12,b);			  
						 break;
					 case 2:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
					 g->DrawString(str,font,brush,a-24,b);
						 break;
					 case 3:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+12,b);
						 break;
					 case 4:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b);				  			
						 break;
					 case 5:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+12);
						 break;
					 case 6:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+24);
						 break;
					 case 7:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+36);		  
						 break;
					 case 8:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+60);
					 case 9:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 a=0.98*x/2;b=1.1*y/5;g->DrawString(str,font,brush,a+24,b+72);
						 break;
					 case 10:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+84);		  			 
						 break;
						 case 11:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+96);
						 break;
						 case 12:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+12,b+84);
						 break;
						 case 13:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-26,b+12);	  
						 break;
						 case 14:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-27,b+24);
						 break;
						 case 15:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-29,b+36);
						 break;
						 case 16:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-31,b+48);
						 break;
						 case 17:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-43,b+48);
						 break;
						 case 18:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-55,b+48);
						 break;
						 case 19:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));				
						 g->DrawString(str,font,brush,a-17,b+48);
						 break;
						 case 20:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-3,b+48);
						 break;
						 case 21:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+11,b+48);
						 break;
						 case 22:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+48);		  
						 break;
						 case 23:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+36,b+48);
						 break;
						 case 24:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-33,b+60);
						 break;
						 case 25:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-36,b+72);
						 break;
						 case 26:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-40,b+84);
						 break;
						 case 27:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-46,b+96);
						 break;
						 case 28:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-8,b+16);  
						 break;
						 case 29:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a,b+24);
						 break;
						 case 30:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+8,b+32);
						 break;
						 case 31:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+70,b);	  
						 break;
						 case 32:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+62,b+10);
						 break;
						 case 33:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+20);
						 break;
						 case 34:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+46,b+30);
						 break;
						 case 35:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+58,b+50);//�м��
						 break;
						 case 36:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+68,b+40);
						 break;
						 case 37:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+48,b+60);
						 break;
						 case 38:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+78,b+30);
						 break;
						 case 39:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+44,b+96);
						 break;
						 case 40:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+86);	 
						 break;
						 case 41:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+64,b+76);
						 break;
						 case 42:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+74,b+66);
						 break;
						 case 43:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a,b);
						 break;
						 }
						 this->timer12->Enabled=false;
						 this->timer13->Enabled=true;	
		 }
private: System::Void timer13_Tick(System::Object^  sender, System::EventArgs^  e) {
			  			 this->NumSum13++; a=3.3*x/16;b=0.9*y/15;
				 switch (this->NumSum13)
				 {
					 case 1:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-12,b);			  
						 break;
					 case 2:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
					 g->DrawString(str,font,brush,a-24,b);
						 break;
					 case 3:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+12,b);
						 break;
					 case 4:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b);				  			
						 break;
					 case 5:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+12);
						 break;
					 case 6:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+24);
						 break;
					 case 7:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+36);		  
						 break;
					 case 8:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+60);
					 case 9:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 a=0.98*x/2;b=1.1*y/5;g->DrawString(str,font,brush,a+24,b+72);
						 break;
					 case 10:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+84);		  			 
						 break;
						 case 11:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+96);
						 break;
						 case 12:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+12,b+84);
						 break;
						 case 13:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-26,b+12);	  
						 break;
						 case 14:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-27,b+24);
						 break;
						 case 15:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-29,b+36);
						 break;
						 case 16:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-31,b+48);
						 break;
						 case 17:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-43,b+48);
						 break;
						 case 18:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-55,b+48);
						 break;
						 case 19:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));				
						 g->DrawString(str,font,brush,a-17,b+48);
						 break;
						 case 20:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-3,b+48);
						 break;
						 case 21:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+11,b+48);
						 break;
						 case 22:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+48);		  
						 break;
						 case 23:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+36,b+48);
						 break;
						 case 24:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-33,b+60);
						 break;
						 case 25:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-36,b+72);
						 break;
						 case 26:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-40,b+84);
						 break;
						 case 27:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-46,b+96);
						 break;
						 case 28:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-8,b+16);  
						 break;
						 case 29:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a,b+24);
						 break;
						 case 30:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+8,b+32);
						 break;
						 case 31:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+70,b);	  
						 break;
						 case 32:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+62,b+10);
						 break;
						 case 33:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+20);
						 break;
						 case 34:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+46,b+30);
						 break;
						 case 35:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+58,b+50);//�м��
						 break;
						 case 36:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+68,b+40);
						 break;
						 case 37:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+48,b+60);
						 break;
						 case 38:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+78,b+30);
						 break;
						 case 39:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+44,b+96);
						 break;
						 case 40:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+86);	 
						 break;
						 case 41:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+64,b+76);
						 break;
						 case 42:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+74,b+66);
						 break;
						 case 43:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a,b);
						 break;
						 }
						 this->timer13->Enabled=false;
						 this->timer14->Enabled=true;	
		 }
private: System::Void timer14_Tick(System::Object^  sender, System::EventArgs^  e) {
			  			 this->NumSum14++;a=14.9*x/16;b=4.4*y/16;
				 switch (this->NumSum14)
				 {
					 case 1:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-12,b);			  
						 break;
					 case 2:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
					 g->DrawString(str,font,brush,a-24,b);
						 break;
					 case 3:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+12,b);
						 break;
					 case 4:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b);				  			
						 break;
					 case 5:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+12);
						 break;
					 case 6:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+24);
						 break;
					 case 7:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+36);		  
						 break;
					 case 8:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+60);
					 case 9:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 a=0.98*x/2;b=1.1*y/5;g->DrawString(str,font,brush,a+24,b+72);
						 break;
					 case 10:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+84);		  			 
						 break;
						 case 11:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+96);
						 break;
						 case 12:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+12,b+84);
						 break;
						 case 13:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-26,b+12);	  
						 break;
						 case 14:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-27,b+24);
						 break;
						 case 15:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-29,b+36);
						 break;
						 case 16:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-31,b+48);
						 break;
						 case 17:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-43,b+48);
						 break;
						 case 18:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-55,b+48);
						 break;
						 case 19:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));				
						 g->DrawString(str,font,brush,a-17,b+48);
						 break;
						 case 20:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-3,b+48);
						 break;
						 case 21:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+11,b+48);
						 break;
						 case 22:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+48);		  
						 break;
						 case 23:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+36,b+48);
						 break;
						 case 24:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-33,b+60);
						 break;
						 case 25:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-36,b+72);
						 break;
						 case 26:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-40,b+84);
						 break;
						 case 27:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-46,b+96);
						 break;
						 case 28:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-8,b+16);  
						 break;
						 case 29:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a,b+24);
						 break;
						 case 30:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+8,b+32);
						 break;
						 case 31:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+70,b);	  
						 break;
						 case 32:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+62,b+10);
						 break;
						 case 33:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+20);
						 break;
						 case 34:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+46,b+30);
						 break;
						 case 35:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+58,b+50);//�м��
						 break;
						 case 36:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+68,b+40);
						 break;
						 case 37:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+48,b+60);
						 break;
						 case 38:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+78,b+30);
						 break;
						 case 39:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+44,b+96);
						 break;
						 case 40:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+86);	 
						 break;
						 case 41:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+64,b+76);
						 break;
						 case 42:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+74,b+66);
						 break;
						 case 43:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a,b);
						 break;
						 }
						 this->timer14->Enabled=false;
						 this->timer15->Enabled=true;	
		 }
private: System::Void timer15_Tick(System::Object^  sender, System::EventArgs^  e) {
			  			 this->NumSum15++;a=3.8*x/16;b=10.3*y/16;
				 switch (this->NumSum15)
				 {
					 case 1:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-12,b);			  
						 break;
					 case 2:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
					 g->DrawString(str,font,brush,a-24,b);
						 break;
					 case 3:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+12,b);
						 break;
					 case 4:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b);				  			
						 break;
					 case 5:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+12);
						 break;
					 case 6:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+24);
						 break;
					 case 7:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+36);		  
						 break;
					 case 8:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+60);
					 case 9:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 a=0.98*x/2;b=1.1*y/5;g->DrawString(str,font,brush,a+24,b+72);
						 break;
					 case 10:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+84);		  			 
						 break;
						 case 11:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+96);
						 break;
						 case 12:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+12,b+84);
						 break;
						 case 13:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-26,b+12);	  
						 break;
						 case 14:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-27,b+24);
						 break;
						 case 15:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-29,b+36);
						 break;
						 case 16:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-31,b+48);
						 break;
						 case 17:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-43,b+48);
						 break;
						 case 18:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-55,b+48);
						 break;
						 case 19:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));				
						 g->DrawString(str,font,brush,a-17,b+48);
						 break;
						 case 20:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-3,b+48);
						 break;
						 case 21:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+11,b+48);
						 break;
						 case 22:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+48);		  
						 break;
						 case 23:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+36,b+48);
						 break;
						 case 24:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-33,b+60);
						 break;
						 case 25:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-36,b+72);
						 break;
						 case 26:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-40,b+84);
						 break;
						 case 27:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-46,b+96);
						 break;
						 case 28:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-8,b+16);  
						 break;
						 case 29:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a,b+24);
						 break;
						 case 30:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+8,b+32);
						 break;
						 case 31:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+70,b);	  
						 break;
						 case 32:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+62,b+10);
						 break;
						 case 33:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+20);
						 break;
						 case 34:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+46,b+30);
						 break;
						 case 35:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+58,b+50);//�м��
						 break;
						 case 36:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+68,b+40);
						 break;
						 case 37:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+48,b+60);
						 break;
						 case 38:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+78,b+30);
						 break;
						 case 39:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+44,b+96);
						 break;
						 case 40:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+86);	 
						 break;
						 case 41:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+64,b+76);
						 break;
						 case 42:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+74,b+66);
						 break;
						 case 43:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a,b);
						 break;
						 }
						 this->timer15->Enabled=false;
						 this->timer16->Enabled=true;	
		 }
private: System::Void timer16_Tick(System::Object^  sender, System::EventArgs^  e) {
			  			 this->NumSum16++;a=2.5*x/16;b=8.7*y/16;
				 switch (this->NumSum16)
				 {
					 case 1:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-12,b);			  
						 break;
					 case 2:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
					 g->DrawString(str,font,brush,a-24,b);
						 break;
					 case 3:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+12,b);
						 break;
					 case 4:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b);				  			
						 break;
					 case 5:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+12);
						 break;
					 case 6:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+24);
						 break;
					 case 7:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+36);		  
						 break;
					 case 8:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+60);
					 case 9:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 a=0.98*x/2;b=1.1*y/5;g->DrawString(str,font,brush,a+24,b+72);
						 break;
					 case 10:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+84);		  			 
						 break;
						 case 11:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+96);
						 break;
						 case 12:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+12,b+84);
						 break;
						 case 13:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-26,b+12);	  
						 break;
						 case 14:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-27,b+24);
						 break;
						 case 15:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-29,b+36);
						 break;
						 case 16:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-31,b+48);
						 break;
						 case 17:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-43,b+48);
						 break;
						 case 18:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-55,b+48);
						 break;
						 case 19:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));				
						 g->DrawString(str,font,brush,a-17,b+48);
						 break;
						 case 20:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-3,b+48);
						 break;
						 case 21:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+11,b+48);
						 break;
						 case 22:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+48);		  
						 break;
						 case 23:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+36,b+48);
						 break;
						 case 24:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-33,b+60);
						 break;
						 case 25:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-36,b+72);
						 break;
						 case 26:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-40,b+84);
						 break;
						 case 27:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-46,b+96);
						 break;
						 case 28:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-8,b+16);  
						 break;
						 case 29:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a,b+24);
						 break;
						 case 30:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+8,b+32);
						 break;
						 case 31:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+70,b);	  
						 break;
						 case 32:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+62,b+10);
						 break;
						 case 33:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+20);
						 break;
						 case 34:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+46,b+30);
						 break;
						 case 35:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+58,b+50);//�м��
						 break;
						 case 36:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+68,b+40);
						 break;
						 case 37:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+48,b+60);
						 break;
						 case 38:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+78,b+30);
						 break;
						 case 39:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+44,b+96);
						 break;
						 case 40:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+86);	 
						 break;
						 case 41:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+64,b+76);
						 break;
						 case 42:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+74,b+66);
						 break;
						 case 43:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a,b);
						 break;
						 }
						 this->timer16->Enabled=false;
						 this->timer17->Enabled=true;	
		 }
private: System::Void timer17_Tick(System::Object^  sender, System::EventArgs^  e) {
			  			 this->NumSum17++;a=13.8*x/16;b=1.2*y/8;
				 switch (this->NumSum17)
				 {
					 case 1:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-12,b);			  
						 break;
					 case 2:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
					 g->DrawString(str,font,brush,a-24,b);
						 break;
					 case 3:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+12,b);
						 break;
					 case 4:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b);				  			
						 break;
					 case 5:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+12);
						 break;
					 case 6:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+24);
						 break;
					 case 7:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+36);		  
						 break;
					 case 8:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+60);
					 case 9:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 a=0.98*x/2;b=1.1*y/5;g->DrawString(str,font,brush,a+24,b+72);
						 break;
					 case 10:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+84);		  			 
						 break;
						 case 11:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+96);
						 break;
						 case 12:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+12,b+84);
						 break;
						 case 13:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-26,b+12);	  
						 break;
						 case 14:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-27,b+24);
						 break;
						 case 15:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-29,b+36);
						 break;
						 case 16:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-31,b+48);
						 break;
						 case 17:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-43,b+48);
						 break;
						 case 18:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-55,b+48);
						 break;
						 case 19:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));				
						 g->DrawString(str,font,brush,a-17,b+48);
						 break;
						 case 20:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-3,b+48);
						 break;
						 case 21:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+11,b+48);
						 break;
						 case 22:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+48);		  
						 break;
						 case 23:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+36,b+48);
						 break;
						 case 24:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-33,b+60);
						 break;
						 case 25:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-36,b+72);
						 break;
						 case 26:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-40,b+84);
						 break;
						 case 27:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-46,b+96);
						 break;
						 case 28:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-8,b+16);  
						 break;
						 case 29:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a,b+24);
						 break;
						 case 30:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+8,b+32);
						 break;
						 case 31:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+70,b);	  
						 break;
						 case 32:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+62,b+10);
						 break;
						 case 33:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+20);
						 break;
						 case 34:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+46,b+30);
						 break;
						 case 35:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+58,b+50);//�м��
						 break;
						 case 36:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+68,b+40);
						 break;
						 case 37:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+48,b+60);
						 break;
						 case 38:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+78,b+30);
						 break;
						 case 39:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+44,b+96);
						 break;
						 case 40:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+86);	 
						 break;
						 case 41:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+64,b+76);
						 break;
						 case 42:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+74,b+66);
						 break;
						 case 43:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a,b);
						 break;
						 }
						 this->timer17->Enabled=false;
						 this->timer18->Enabled=true;	
		 }
private: System::Void timer18_Tick(System::Object^  sender, System::EventArgs^  e) {
			  			 this->NumSum18++; a=1.6*x/16;b=1.2*y/8;
				 switch (this->NumSum18)
				 {
					 case 1:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-12,b);			  
						 break;
					 case 2:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
					 g->DrawString(str,font,brush,a-24,b);
						 break;
					 case 3:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+12,b);
						 break;
					 case 4:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b);				  			
						 break;
					 case 5:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+12);
						 break;
					 case 6:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+24);
						 break;
					 case 7:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+36);		  
						 break;
					 case 8:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+60);
					 case 9:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 a=0.98*x/2;b=1.1*y/5;g->DrawString(str,font,brush,a+24,b+72);
						 break;
					 case 10:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+84);		  			 
						 break;
						 case 11:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+96);
						 break;
						 case 12:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+12,b+84);
						 break;
						 case 13:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-26,b+12);	  
						 break;
						 case 14:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-27,b+24);
						 break;
						 case 15:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-29,b+36);
						 break;
						 case 16:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-31,b+48);
						 break;
						 case 17:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-43,b+48);
						 break;
						 case 18:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-55,b+48);
						 break;
						 case 19:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));				
						 g->DrawString(str,font,brush,a-17,b+48);
						 break;
						 case 20:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-3,b+48);
						 break;
						 case 21:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+11,b+48);
						 break;
						 case 22:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+48);		  
						 break;
						 case 23:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+36,b+48);
						 break;
						 case 24:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-33,b+60);
						 break;
						 case 25:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-36,b+72);
						 break;
						 case 26:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-40,b+84);
						 break;
						 case 27:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-46,b+96);
						 break;
						 case 28:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-8,b+16);  
						 break;
						 case 29:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a,b+24);
						 break;
						 case 30:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+8,b+32);
						 break;
						 case 31:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+70,b);	  
						 break;
						 case 32:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+62,b+10);
						 break;
						 case 33:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+20);
						 break;
						 case 34:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+46,b+30);
						 break;
						 case 35:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+58,b+50);//�м��
						 break;
						 case 36:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+68,b+40);
						 break;
						 case 37:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+48,b+60);
						 break;
						 case 38:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+78,b+30);
						 break;
						 case 39:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+44,b+96);
						 break;
						 case 40:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+86);	 
						 break;
						 case 41:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+64,b+76);
						 break;
						 case 42:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+74,b+66);
						 break;
						 case 43:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a,b);
						 break;
						 }
						 this->timer18->Enabled=false;
						 this->timer19->Enabled=true;	
		 }
private: System::Void timer19_Tick(System::Object^  sender, System::EventArgs^  e) {
			  this->NumSum19++;a=6.47*x/16;b=13.0*y/16;
				 switch (this->NumSum19)
				 {
					 case 1:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-12,b);			  
						 break;
					 case 41:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
					 g->DrawString(str,font,brush,a-24,b);
						 break;
					 case 13:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+12,b);
						 break;
					 case 34:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b);				  			
						 break;
					 case 15:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+12);
						 break;
					 case 16:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+24);
						 break;
					 case 7:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+36);		  
						 break;
					 case 31:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+60);
					 case 9:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 a=0.98*x/2;b=1.1*y/5;g->DrawString(str,font,brush,a+24,b+72);
						 break;
					 case 43:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+84);		  			 
						 break;
						 case 11:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+96);
						 break;
						 case 12:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+12,b+84);
						 break;
						 case 3:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-26,b+12);	  
						 break;
						 case 4:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-27,b+24);
						 break;
						 case 5:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-29,b+36);
						 break;
						 case 6:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-31,b+48);
						 break;
						 case 17:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-43,b+48);
						 break;
						 case 14:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-55,b+48);
						 break;
						 case 19:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));				
						 g->DrawString(str,font,brush,a-17,b+48);
						 break;
						 case 29:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-3,b+48);
						 break;
						 case 10:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+11,b+48);
						 break;
						 case 22:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+48);		  
						 break;
						 case 23:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+36,b+48);
						 break;
						 case 39:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-33,b+60);
						 break;
						 case 25:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-36,b+72);
						 break;
						 case 26:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-40,b+84);
						 break;
						 case 37:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-46,b+96);
						 break;
						 case 28:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-8,b+16);  
						 break;
						 case 20:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a,b+24);
						 break;
						 case 30:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+8,b+32);
						 break;
						 case 8:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+70,b);	  
						 break;
						 case 42:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+62,b+10);
						 break;
						 case 33:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+20);
						 break;
						 case 18:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+46,b+30);
						 break;
						 case 35:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+58,b+50);//�м��
						 break;
						 case 40:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+68,b+40);
						 break;
						 case 27:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+48,b+60);
						 break;
						 case 38:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+78,b+30);
						 break;
						 case 24:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+44,b+96);
						 break;
						 case 36:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+86);	 
						 break;
						 case 21:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+64,b+76);
						 break;
						 case 32:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+74,b+66);
						 break;
						 case 2:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a,b);
						 break;
						 }
						 this->timer19->Enabled=false;
						 this->timer20->Enabled=true;			
		 }
private: System::Void timer20_Tick(System::Object^  sender, System::EventArgs^  e) {
			  this->NumSum20++;a=1.35*x/16;b=7.0*y/16;
				 switch (this->NumSum20)
				 {
					 case 1:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-12,b);			  
						 break;
					 case 41:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
					 g->DrawString(str,font,brush,a-24,b);
						 break;
					 case 13:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+12,b);
						 break;
					 case 34:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b);				  			
						 break;
					 case 15:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+12);
						 break;
					 case 16:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+24);
						 break;
					 case 7:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+36);		  
						 break;
					 case 31:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+60);
					 case 9:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 a=0.98*x/2;b=1.1*y/5;g->DrawString(str,font,brush,a+24,b+72);
						 break;
					 case 43:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+84);		  			 
						 break;
						 case 11:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+96);
						 break;
						 case 12:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+12,b+84);
						 break;
						 case 3:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-26,b+12);	  
						 break;
						 case 4:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-27,b+24);
						 break;
						 case 5:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-29,b+36);
						 break;
						 case 6:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-31,b+48);
						 break;
						 case 17:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-43,b+48);
						 break;
						 case 14:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-55,b+48);
						 break;
						 case 19:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));				
						 g->DrawString(str,font,brush,a-17,b+48);
						 break;
						 case 29:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-3,b+48);
						 break;
						 case 10:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+11,b+48);
						 break;
						 case 22:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+48);		  
						 break;
						 case 23:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+36,b+48);
						 break;
						 case 39:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-33,b+60);
						 break;
						 case 25:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-36,b+72);
						 break;
						 case 26:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-40,b+84);
						 break;
						 case 37:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-46,b+96);
						 break;
						 case 28:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-8,b+16);  
						 break;
						 case 20:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a,b+24);
						 break;
						 case 30:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+8,b+32);
						 break;
						 case 8:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+70,b);	  
						 break;
						 case 42:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+62,b+10);
						 break;
						 case 33:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+20);
						 break;
						 case 18:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+46,b+30);
						 break;
						 case 35:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+58,b+50);//�м��
						 break;
						 case 40:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+68,b+40);
						 break;
						 case 27:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+48,b+60);
						 break;
						 case 38:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+78,b+30);
						 break;
						 case 24:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+44,b+96);
						 break;
						 case 36:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+86);	 
						 break;
						 case 21:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+64,b+76);
						 break;
						 case 32:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+74,b+66);
						 break;
						 case 2:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a,b);
						 break;
						 }
						 this->timer20->Enabled=false;
						 this->timer21->Enabled=true;			
		 }
private: System::Void timer21_Tick(System::Object^  sender, System::EventArgs^  e) {
			  this->NumSum21++;a=5.12*x/16;b=12.0*y/16;
				 switch (this->NumSum21)
				 {
					 case 1:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-12,b);			  
						 break;
					 case 41:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
					 g->DrawString(str,font,brush,a-24,b);
						 break;
					 case 13:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+12,b);
						 break;
					 case 34:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b);				  			
						 break;
					 case 15:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+12);
						 break;
					 case 16:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+24);
						 break;
					 case 7:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+36);		  
						 break;
					 case 31:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+60);
					 case 9:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 a=0.98*x/2;b=1.1*y/5;g->DrawString(str,font,brush,a+24,b+72);
						 break;
					 case 43:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+84);		  			 
						 break;
						 case 11:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+96);
						 break;
						 case 12:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+12,b+84);
						 break;
						 case 3:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-26,b+12);	  
						 break;
						 case 4:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-27,b+24);
						 break;
						 case 5:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-29,b+36);
						 break;
						 case 6:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-31,b+48);
						 break;
						 case 17:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-43,b+48);
						 break;
						 case 14:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-55,b+48);
						 break;
						 case 19:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));				
						 g->DrawString(str,font,brush,a-17,b+48);
						 break;
						 case 29:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-3,b+48);
						 break;
						 case 10:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+11,b+48);
						 break;
						 case 22:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+48);		  
						 break;
						 case 23:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+36,b+48);
						 break;
						 case 39:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-33,b+60);
						 break;
						 case 25:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-36,b+72);
						 break;
						 case 26:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-40,b+84);
						 break;
						 case 37:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-46,b+96);
						 break;
						 case 28:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-8,b+16);  
						 break;
						 case 20:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a,b+24);
						 break;
						 case 30:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+8,b+32);
						 break;
						 case 8:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+70,b);	  
						 break;
						 case 42:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+62,b+10);
						 break;
						 case 33:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+20);
						 break;
						 case 18:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+46,b+30);
						 break;
						 case 35:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+58,b+50);//�м��
						 break;
						 case 40:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+68,b+40);
						 break;
						 case 27:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+48,b+60);
						 break;
						 case 38:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+78,b+30);
						 break;
						 case 24:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+44,b+96);
						 break;
						 case 36:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+86);	 
						 break;
						 case 21:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+64,b+76);
						 break;
						 case 32:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+74,b+66);
						 break;
						 case 2:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a,b);
						 break;
						 }
						 this->timer21->Enabled=false;
						 this->timer22->Enabled=true;			
		 }
private: System::Void timer22_Tick(System::Object^  sender, System::EventArgs^  e) {
			  this->NumSum22++;a=x-6.5*x/16;b=y/9;
				 switch (this->NumSum22)
				 {
					 case 1:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-12,b);			  
						 break;
					 case 41:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
					 g->DrawString(str,font,brush,a-24,b);
						 break;
					 case 13:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+12,b);
						 break;
					 case 34:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b);				  			
						 break;
					 case 15:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+12);
						 break;
					 case 16:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+24);
						 break;
					 case 7:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+36);		  
						 break;
					 case 31:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+60);
					 case 9:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 a=0.98*x/2;b=1.1*y/5;g->DrawString(str,font,brush,a+24,b+72);
						 break;
					 case 43:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+84);		  			 
						 break;
						 case 11:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+96);
						 break;
						 case 12:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+12,b+84);
						 break;
						 case 3:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-26,b+12);	  
						 break;
						 case 4:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-27,b+24);
						 break;
						 case 5:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-29,b+36);
						 break;
						 case 6:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-31,b+48);
						 break;
						 case 17:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-43,b+48);
						 break;
						 case 14:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-55,b+48);
						 break;
						 case 19:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));				
						 g->DrawString(str,font,brush,a-17,b+48);
						 break;
						 case 29:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-3,b+48);
						 break;
						 case 10:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+11,b+48);
						 break;
						 case 22:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+48);		  
						 break;
						 case 23:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+36,b+48);
						 break;
						 case 39:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-33,b+60);
						 break;
						 case 25:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-36,b+72);
						 break;
						 case 26:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-40,b+84);
						 break;
						 case 37:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-46,b+96);
						 break;
						 case 28:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-8,b+16);  
						 break;
						 case 20:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a,b+24);
						 break;
						 case 30:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+8,b+32);
						 break;
						 case 8:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+70,b);	  
						 break;
						 case 42:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+62,b+10);
						 break;
						 case 33:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+20);
						 break;
						 case 18:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+46,b+30);
						 break;
						 case 35:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+58,b+50);//�м��
						 break;
						 case 40:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+68,b+40);
						 break;
						 case 27:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+48,b+60);
						 break;
						 case 38:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+78,b+30);
						 break;
						 case 24:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+44,b+96);
						 break;
						 case 36:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+86);	 
						 break;
						 case 21:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+64,b+76);
						 break;
						 case 32:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+74,b+66);
						 break;
						 case 2:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a,b);
						 break;
						 }
						 this->timer22->Enabled=false;
						 this->timer23->Enabled=true;			
		 }
private: System::Void timer23_Tick(System::Object^  sender, System::EventArgs^  e) {
			  this->NumSum23++;a=x-x/2;b=13.8*y/16;
				 switch (this->NumSum23)
				 {
					 case 1:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-12,b);			  
						 break;
					 case 41:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
					 g->DrawString(str,font,brush,a-24,b);
						 break;
					 case 13:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+12,b);
						 break;
					 case 34:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b);				  			
						 break;
					 case 15:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+12);
						 break;
					 case 16:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+24);
						 break;
					 case 7:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+36);		  
						 break;
					 case 31:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+60);
					 case 9:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 a=0.98*x/2;b=1.1*y/5;g->DrawString(str,font,brush,a+24,b+72);
						 break;
					 case 43:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+84);		  			 
						 break;
						 case 11:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a+24,b+96);
						 break;
						 case 12:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+12,b+84);
						 break;
						 case 3:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-26,b+12);	  
						 break;
						 case 4:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-27,b+24);
						 break;
						 case 5:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-29,b+36);
						 break;
						 case 6:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-31,b+48);
						 break;
						 case 17:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a-43,b+48);
						 break;
						 case 14:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-55,b+48);
						 break;
						 case 19:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));				
						 g->DrawString(str,font,brush,a-17,b+48);
						 break;
						 case 29:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-3,b+48);
						 break;
						 case 10:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+11,b+48);
						 break;
						 case 22:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+24,b+48);		  
						 break;
						 case 23:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+36,b+48);
						 break;
						 case 39:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-33,b+60);
						 break;
						 case 25:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-36,b+72);
						 break;
						 case 26:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-40,b+84);
						 break;
						 case 37:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-46,b+96);
						 break;
						 case 28:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a-8,b+16);  
						 break;
						 case 20:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						g->DrawString(str,font,brush,a,b+24);
						 break;
						 case 30:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+8,b+32);
						 break;
						 case 8:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+70,b);	  
						 break;
						 case 42:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+62,b+10);
						 break;
						 case 33:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+20);
						 break;
						 case 18:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+46,b+30);
						 break;
						 case 35:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+58,b+50);//�м��
						 break;
						 case 40:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+68,b+40);
						 break;
						 case 27:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+48,b+60);
						 break;
						 case 38:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+78,b+30);
						 break;
						 case 24:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+44,b+96);
						 break;
						 case 36:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+54,b+86);	 
						 break;
						 case 21:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a+64,b+76);
						 break;
						 case 32:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						  g->DrawString(str,font,brush,a+74,b+66);
						 break;
						 case 2:
						 brush->Color=Color::FromArgb(random->Next(1,255),random->Next(1,255),random->Next(1,255));
						 g->DrawString(str,font,brush,a,b);
						 break;
						 }
						 this->timer23->Enabled=false;
						 this->timer1->Enabled=true;			
		 }
private: System::Void Form1_MouseMove_1(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 /*int n=0;
			 if(n==0)
			 {
				
				 this->mouseX=e->Location.X;
			 }
			 n++;
			 if(mouseX!=e->Location.X)
				 Application::Exit();*/
		 }
private: System::Void timer24_Tick(System::Object^  sender, System::EventArgs^  e) {
		/*	 System::Windows::Form::MouseEventArgs^  e1=gcnew MouseEventArgs();
			 int n=0;
			 if(n==0)
			 {
				
				 this->mouseX=e1->Location.X;
			 }
			 n++;
			 if(mouseX!=e1->Location.X)
				 Application::Exit();*/
			 
		 }
};
}

