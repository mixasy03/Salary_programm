#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private:System::Windows::Forms::Label^ labelHoursWorked;
	private:System::Windows::Forms::TextBox^ textBoxHours;
	private:System::Windows::Forms::Label^ labelHourlyRate;
	private:System::Windows::Forms::TextBox^ textBoxRate;


	private: System::Windows::Forms::TextBox^ textBoxName;
	private: System::Windows::Forms::TextBox^ textBoxSurname;
	private: System::Windows::Forms::TextBox^ textBoxPosition;








	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ListBox^ listBoxEmployees;

	private: System::Windows::Forms::Button^ btn_save;

	private: System::Windows::Forms::Button^ Clear;
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::TextBox^ Keyword;
	private: System::Windows::Forms::Button^ btn_delete_all;
	private: System::Windows::Forms::Button^ btn_show;
	private: System::Windows::Forms::Label^ Name_to_delete;


	private: System::Windows::Forms::ComboBox^ Combo;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label_prem;
	private: System::Windows::Forms::TextBox^ textbox_prem;
	private: System::Windows::Forms::TextBox^ textbox_prem2;
	private: System::Windows::Forms::Label^ label5;










	protected:





	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->labelHoursWorked = (gcnew System::Windows::Forms::Label());
			this->textBoxHours = (gcnew System::Windows::Forms::TextBox());
			this->labelHourlyRate = (gcnew System::Windows::Forms::Label());
			this->textBoxRate = (gcnew System::Windows::Forms::TextBox());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSurname = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPosition = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->listBoxEmployees = (gcnew System::Windows::Forms::ListBox());
			this->btn_save = (gcnew System::Windows::Forms::Button());
			this->Clear = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->Keyword = (gcnew System::Windows::Forms::TextBox());
			this->btn_delete_all = (gcnew System::Windows::Forms::Button());
			this->btn_show = (gcnew System::Windows::Forms::Button());
			this->Name_to_delete = (gcnew System::Windows::Forms::Label());
			this->Combo = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label_prem = (gcnew System::Windows::Forms::Label());
			this->textbox_prem = (gcnew System::Windows::Forms::TextBox());
			this->textbox_prem2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// labelHoursWorked
			// 
			this->labelHoursWorked->BackColor = System::Drawing::Color::Turquoise;
			this->labelHoursWorked->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelHoursWorked->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelHoursWorked->Location = System::Drawing::Point(2, 130);
			this->labelHoursWorked->Name = L"labelHoursWorked";
			this->labelHoursWorked->Size = System::Drawing::Size(152, 20);
			this->labelHoursWorked->TabIndex = 0;
			this->labelHoursWorked->Text = L"Hours/month Worked:";
			this->labelHoursWorked->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxHours
			// 
			this->textBoxHours->BackColor = System::Drawing::SystemColors::Window;
			this->textBoxHours->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxHours->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxHours->Location = System::Drawing::Point(159, 130);
			this->textBoxHours->Name = L"textBoxHours";
			this->textBoxHours->Size = System::Drawing::Size(147, 20);
			this->textBoxHours->TabIndex = 1;
			this->textBoxHours->Text = L"0";
			// 
			// labelHourlyRate
			// 
			this->labelHourlyRate->BackColor = System::Drawing::Color::Turquoise;
			this->labelHourlyRate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelHourlyRate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelHourlyRate->Location = System::Drawing::Point(2, 161);
			this->labelHourlyRate->Name = L"labelHourlyRate";
			this->labelHourlyRate->Size = System::Drawing::Size(152, 20);
			this->labelHourlyRate->TabIndex = 2;
			this->labelHourlyRate->Text = L"Hour/month Rate:";
			this->labelHourlyRate->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxRate
			// 
			this->textBoxRate->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxRate->Location = System::Drawing::Point(159, 162);
			this->textBoxRate->Name = L"textBoxRate";
			this->textBoxRate->Size = System::Drawing::Size(147, 20);
			this->textBoxRate->TabIndex = 3;
			this->textBoxRate->Text = L"0";
			// 
			// textBoxName
			// 
			this->textBoxName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxName->Location = System::Drawing::Point(159, 15);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(147, 20);
			this->textBoxName->TabIndex = 6;
			// 
			// textBoxSurname
			// 
			this->textBoxSurname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxSurname->Location = System::Drawing::Point(159, 41);
			this->textBoxSurname->Name = L"textBoxSurname";
			this->textBoxSurname->Size = System::Drawing::Size(147, 20);
			this->textBoxSurname->TabIndex = 7;
			// 
			// textBoxPosition
			// 
			this->textBoxPosition->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxPosition->Location = System::Drawing::Point(159, 67);
			this->textBoxPosition->Name = L"textBoxPosition";
			this->textBoxPosition->Size = System::Drawing::Size(147, 20);
			this->textBoxPosition->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Turquoise;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(2, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(152, 20);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Position";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Turquoise;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(2, 41);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(152, 20);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Surname";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Turquoise;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(2, 15);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(152, 20);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Name";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// listBoxEmployees
			// 
			this->listBoxEmployees->BackColor = System::Drawing::SystemColors::MenuBar;
			this->listBoxEmployees->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->listBoxEmployees->FormattingEnabled = true;
			this->listBoxEmployees->HorizontalScrollbar = true;
			this->listBoxEmployees->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->listBoxEmployees->Location = System::Drawing::Point(312, 13);
			this->listBoxEmployees->Name = L"listBoxEmployees";
			this->listBoxEmployees->Size = System::Drawing::Size(419, 223);
			this->listBoxEmployees->Sorted = true;
			this->listBoxEmployees->TabIndex = 14;
			// 
			// btn_save
			// 
			this->btn_save->BackColor = System::Drawing::Color::DarkGray;
			this->btn_save->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_save->Location = System::Drawing::Point(312, 273);
			this->btn_save->Name = L"btn_save";
			this->btn_save->Size = System::Drawing::Size(79, 61);
			this->btn_save->TabIndex = 15;
			this->btn_save->Text = L"Save";
			this->btn_save->UseVisualStyleBackColor = false;
			this->btn_save->Click += gcnew System::EventHandler(this, &MyForm::btn_save_Click);
			// 
			// Clear
			// 
			this->Clear->BackColor = System::Drawing::Color::DarkGray;
			this->Clear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Clear->Location = System::Drawing::Point(397, 273);
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(79, 61);
			this->Clear->TabIndex = 17;
			this->Clear->Text = L"Clear";
			this->Clear->UseVisualStyleBackColor = false;
			this->Clear->Click += gcnew System::EventHandler(this, &MyForm::Clear_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->BackColor = System::Drawing::Color::Red;
			this->btn_delete->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_delete->Location = System::Drawing::Point(567, 273);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(79, 61);
			this->btn_delete->TabIndex = 18;
			this->btn_delete->Text = L"Delete ";
			this->btn_delete->UseVisualStyleBackColor = false;
			this->btn_delete->Click += gcnew System::EventHandler(this, &MyForm::btn_delete_Click);
			// 
			// Keyword
			// 
			this->Keyword->Location = System::Drawing::Point(524, 247);
			this->Keyword->Name = L"Keyword";
			this->Keyword->Size = System::Drawing::Size(207, 20);
			this->Keyword->TabIndex = 19;
			// 
			// btn_delete_all
			// 
			this->btn_delete_all->BackColor = System::Drawing::Color::Red;
			this->btn_delete_all->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_delete_all->Location = System::Drawing::Point(652, 273);
			this->btn_delete_all->Name = L"btn_delete_all";
			this->btn_delete_all->Size = System::Drawing::Size(79, 61);
			this->btn_delete_all->TabIndex = 20;
			this->btn_delete_all->Text = L"Delete all";
			this->btn_delete_all->UseVisualStyleBackColor = false;
			this->btn_delete_all->Click += gcnew System::EventHandler(this, &MyForm::btn_delete_all_Click);
			// 
			// btn_show
			// 
			this->btn_show->BackColor = System::Drawing::Color::DarkGray;
			this->btn_show->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_show->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_show->Location = System::Drawing::Point(482, 273);
			this->btn_show->Name = L"btn_show";
			this->btn_show->Size = System::Drawing::Size(79, 61);
			this->btn_show->TabIndex = 21;
			this->btn_show->Text = L"Hide";
			this->btn_show->UseVisualStyleBackColor = false;
			this->btn_show->Click += gcnew System::EventHandler(this, &MyForm::btn_show_Click);
			// 
			// Name_to_delete
			// 
			this->Name_to_delete->BackColor = System::Drawing::Color::Turquoise;
			this->Name_to_delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name_to_delete->Location = System::Drawing::Point(337, 246);
			this->Name_to_delete->Name = L"Name_to_delete";
			this->Name_to_delete->Size = System::Drawing::Size(181, 24);
			this->Name_to_delete->TabIndex = 22;
			this->Name_to_delete->Text = L"Enter name and surname to delete";
			this->Name_to_delete->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Combo
			// 
			this->Combo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Combo->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Combo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Combo->FormattingEnabled = true;
			this->Combo->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Місячна зарплата", L"Погодинна оплата", L"Премія годинний коеф",
					L"Премія місячна надбавка", L"-"
			});
			this->Combo->Location = System::Drawing::Point(159, 93);
			this->Combo->Name = L"Combo";
			this->Combo->Size = System::Drawing::Size(147, 24);
			this->Combo->TabIndex = 25;
			this->Combo->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::Combo_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Turquoise;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(1, 97);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 20);
			this->label1->TabIndex = 26;
			this->label1->Text = L"Choose option";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_prem
			// 
			this->label_prem->BackColor = System::Drawing::Color::Turquoise;
			this->label_prem->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label_prem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_prem->Location = System::Drawing::Point(1, 192);
			this->label_prem->Name = L"label_prem";
			this->label_prem->Size = System::Drawing::Size(152, 20);
			this->label_prem->TabIndex = 27;
			this->label_prem->Text = L"Premia multiplier";
			this->label_prem->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textbox_prem
			// 
			this->textbox_prem->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textbox_prem->Location = System::Drawing::Point(159, 192);
			this->textbox_prem->Name = L"textbox_prem";
			this->textbox_prem->Size = System::Drawing::Size(147, 20);
			this->textbox_prem->TabIndex = 28;
			this->textbox_prem->Text = L"1,0";
			// 
			// textbox_prem2
			// 
			this->textbox_prem2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textbox_prem2->Location = System::Drawing::Point(159, 216);
			this->textbox_prem2->Name = L"textbox_prem2";
			this->textbox_prem2->Size = System::Drawing::Size(147, 20);
			this->textbox_prem2->TabIndex = 29;
			this->textbox_prem2->Text = L"0";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Turquoise;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(1, 216);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(152, 20);
			this->label5->TabIndex = 30;
			this->label5->Text = L"Premia";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(733, 336);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textbox_prem2);
			this->Controls->Add(this->label_prem);
			this->Controls->Add(this->textbox_prem);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Combo);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->labelHourlyRate);
			this->Controls->Add(this->labelHoursWorked);
			this->Controls->Add(this->Name_to_delete);
			this->Controls->Add(this->btn_show);
			this->Controls->Add(this->btn_delete_all);
			this->Controls->Add(this->Keyword);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->Clear);
			this->Controls->Add(this->btn_save);
			this->Controls->Add(this->listBoxEmployees);
			this->Controls->Add(this->textBoxPosition);
			this->Controls->Add(this->textBoxSurname);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->textBoxRate);
			this->Controls->Add(this->textBoxHours);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->ForeColor = System::Drawing::SystemColors::WindowText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Нарахування зарплатні";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btn_save_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ filePath = "employees.txt";
		StreamWriter^ sw = File::AppendText(filePath);
		Double hours = System::Convert::ToDouble(textBoxHours->Text);
		Double rate = System::Convert::ToDouble(textBoxRate->Text);
		Double coef = System::Convert::ToDouble(textbox_prem->Text);
		Double prem = System::Convert::ToDouble(textbox_prem2->Text);

		Double salary = hours * rate;
		if (Combo->Text == "Погодинна оплата") {
			sw->WriteLine(textBoxName->Text + " " + textBoxSurname->Text + " " + textBoxPosition->Text + " " + "Години роботи - " + textBoxHours->Text + " " + "Оплата за годину - " + textBoxRate->Text + " " + "Зарплата за всі години роботи - " + salary.ToString() + " грн." + " ");
			sw->Close();
		}
		else if(Combo->Text == "Місячна зарплата"){
			double couple_month = rate * hours;
			sw->WriteLine(textBoxName->Text + " " + textBoxSurname->Text + " " + textBoxPosition->Text + " " + "Місяців пророблено - " + textBoxHours->Text + " " + "Зарплатня в місяць - " + couple_month.ToString() + " грн. " + " ");
			sw->Close();
		}
		else if (Combo->Text == "Премія годинний коеф") {
			double premium_salary = hours * rate * coef;
			sw->WriteLine(textBoxName->Text + " " + textBoxSurname->Text + " " + textBoxPosition->Text + " " + "Години роботи - " + textBoxHours->Text + " " + "Оплата за годину - " + textBoxRate->Text + " " + "Зарплата за всі години роботи - " + salary.ToString() + " грн." + "Коефіцієнт премії - " + coef.ToString() + " " + "Повна зарплатня - " + premium_salary.ToString()
				+ " грн." + " ");
			sw->Close();
		}
		else if (Combo->Text == "Премія місячна надбавка") {
			double couple_month = rate * hours;
			double premium_salary = rate * hours + prem;
			sw->WriteLine(textBoxName->Text + " " + textBoxSurname->Text + " " + textBoxPosition->Text + "Місяців пророблено - " + textBoxHours->Text + " " + "Зарплатня в місяць - " + couple_month.ToString() + " " +"Надбавка " + textbox_prem2->Text + " грн." + "Повна зарплатня - " + premium_salary.ToString() + " грн." + " ");
			sw->Close();
		}
		MessageBox::Show("Employee saved successfully.");

		listBoxEmployees->Items->Clear();
		textBoxName->Text ="";
		textBoxSurname->Text = "";
		textBoxPosition->Text = "";
		textBoxHours->Text = "0";
		textBoxRate->Text = "0";

		if (File::Exists(filePath)) {
			StreamReader^ sr = File::OpenText(filePath);
			String^ line;
			while ((line = sr->ReadLine()) != nullptr) {
				listBoxEmployees->Items->Add(line);
			}
			sr->Close();
		}
		else {
			MessageBox::Show("File not found.");
		};
	}

private: System::Void Clear_Click(System::Object^ sender, System::EventArgs^ e) {
		listBoxEmployees->Items->Clear();
}
private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ filePath = "employees.txt"; 
	String^ keywordToDelete = "DELETE"; // Ключове слово для видалення рядків

	try {
		// Створення тимчасового файлу
		String^ tempFile = Path::GetTempFileName();

		// Читання файлу та запис в тимчасовий файл без рядків, які мають ключове слово
		StreamReader^ sr = gcnew StreamReader(filePath);
		StreamWriter^ sw = gcnew StreamWriter(tempFile);

		String^ line;
		while ((line = sr->ReadLine()) != nullptr) {
			if (!line->Contains(this->Keyword->Text)) {
				sw->WriteLine(line);
			}
		}

		sr->Close();
		sw->Close();

		// Видалення оригінального файлу та переміщення тимчасового файлу на його місце
		File::Delete(filePath);
		File::Move(tempFile, filePath);

		MessageBox::Show("Selected lines have been deleted.");
	}

	catch (Exception^ ex) {
		MessageBox::Show("Error: " + ex->Message);
	}

	listBoxEmployees->Items->Clear(); // Очищення списку перед завантаженням нових даних

	if (File::Exists(filePath)) {
		StreamReader^ sr = File::OpenText(filePath);
		String^ line;
		while ((line = sr->ReadLine()) != nullptr) {
			listBoxEmployees->Items->Add(line->Replace(";", " "));
		}
		sr->Close();
	}
	else {
		MessageBox::Show("File not found.");
	};
}
private: System::Void btn_delete_all_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ filePath = "employees.txt"; 

	try {
		// Видаляємо весь текст, створюючи новий файл з тим же іменем
		StreamWriter^ sw = gcnew StreamWriter(filePath);
		sw->Write("");
		sw->Close();
		MessageBox::Show("Text has been deleted.");
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error: " + ex->Message);
	}
	listBoxEmployees->Items->Clear();
}
private: System::Void btn_show_Click(System::Object^ sender, System::EventArgs^ e) {
	listBoxEmployees->Items->Clear(); // Очищення списку перед завантаженням нових даних

	String^ filePath = "employees.txt";
	if (File::Exists(filePath)) {
		StreamReader^ sr = File::OpenText(filePath);
		String^ line;
		while ((line = sr->ReadLine()) != nullptr) {
			listBoxEmployees->Items->Add(line->Replace(";", " "));
		}
		sr->Close();
	}
	else {
		MessageBox::Show("File not found.");
	};
}
private: System::Void Combo_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ selectedType = Combo->Text;
	if (selectedType == "Погодинна оплата") {
		this->textBoxHours->BackColor = Color::Orange;
		this->textBoxRate->BackColor = Color::Orange;
		this->textbox_prem->BackColor = Color::White;
		this->textbox_prem2->BackColor = Color::White;
	}
	else if (selectedType == "Місячна зарплата") {
		this->textBoxRate->BackColor = Color::Orange;
		this->textBoxHours->BackColor = Color::Orange;
		this->textbox_prem->BackColor = Color::White;
		this->textbox_prem2->BackColor = Color::White;
	}
	else if (selectedType == "Премія годинний коеф") {
		this->textBoxHours->BackColor = Color::Orange;
		this->textBoxRate->BackColor = Color::Orange;
		this->textbox_prem->BackColor = Color::Orange;
		this->textbox_prem2->BackColor = Color::White;
	}
	else if (selectedType == "Премія місячна надбавка") {
		this->textBoxRate->BackColor = Color::Orange;
		this->textbox_prem2->BackColor = Color::Orange;
		this->textbox_prem->BackColor = Color::White;
		this->textBoxHours->BackColor = Color::Orange;
	}
	else if (selectedType == "-") {
		this->textBoxHours->BackColor = Color::White;
		this->textBoxRate->BackColor = Color::White;
		this->textbox_prem->BackColor = Color::White;
		this->textbox_prem2->BackColor = Color::White;
	}
}
};
}