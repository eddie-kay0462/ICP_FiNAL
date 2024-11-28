#pragma once
using namespace MySql::Data::MySqlClient;
using namespace System::IO;
namespace SchoolManagementSystem
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
public
	ref class MyForm : public System::Windows::Forms::Form
	{
		MySqlConnection ^ sqlConn = gcnew MySqlConnection();
		MySqlCommand ^ sqlCmd = gcnew MySqlCommand();
		DataTable ^ sqlDt = gcnew DataTable();
		MySqlDataAdapter ^ sqlDta = gcnew MySqlDataAdapter();

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			// TODO: Add the constructor code here
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
		System::Windows::Forms::Label ^ label1;

	private:
		System::Windows::Forms::TextBox ^ textBox1;

	private:
		System::Windows::Forms::Label ^ label2;

	private:
		System::Windows::Forms::TextBox ^ textBox2;

	private:
		System::Windows::Forms::LinkLabel ^ linkLabel1;

	private:
		System::Windows::Forms::Button ^ loginBtn;

	private:
		System::Windows::Forms::Button ^ cancelBtn;

	protected:
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager ^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->loginBtn = (gcnew System::Windows::Forms::Button());
			this->cancelBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			//
			// label1
			//
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(53, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Username";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			//
			// textBox1
			//
			this->textBox1->Location = System::Drawing::Point(141, 38);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(212, 20);
			this->textBox1->TabIndex = 1;
			//
			// label2
			//
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(55, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Password";
			//
			// textBox2
			//
			this->textBox2->Location = System::Drawing::Point(141, 83);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(212, 20);
			this->textBox2->TabIndex = 3;
			//
			// linkLabel1
			//
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(152, 127);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(120, 13);
			this->linkLabel1->TabIndex = 4;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Request password label";
			//
			// loginBtn
			//
			this->loginBtn->Location = System::Drawing::Point(107, 159);
			this->loginBtn->Name = L"loginBtn";
			this->loginBtn->Size = System::Drawing::Size(95, 47);
			this->loginBtn->TabIndex = 5;
			this->loginBtn->Text = L"Login";
			this->loginBtn->UseVisualStyleBackColor = true;
			//
			// cancelBtn
			//
			this->cancelBtn->Location = System::Drawing::Point(244, 159);
			this->cancelBtn->Name = L"cancelBtn";
			this->cancelBtn->Size = System::Drawing::Size(95, 47);
			this->cancelBtn->TabIndex = 6;
			this->cancelBtn->Text = L"Cancel";
			this->cancelBtn->UseVisualStyleBackColor = true;
			this->cancelBtn->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			//
			// MyForm
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(519, 261);
			this->Controls->Add(this->cancelBtn);
			this->Controls->Add(this->loginBtn);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon ^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	private:
		System::Void MyForm_Load(System::Object ^ sender, System::EventArgs ^ e)
		{
		}

	private:
		System::Void label1_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
		}

	private:
		System::Void login_Btn(System::Object ^ sender, System::EventArgs ^ e)
		{
			Application::Exit();
		}
	};
}
