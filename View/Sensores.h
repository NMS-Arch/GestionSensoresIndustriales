#pragma once

namespace View {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Collections::Generic;
	using namespace Model;
	using namespace Controller;

	/// <summary>
	/// Summary for Sensores
	/// </summary>
	public ref class Sensores : public System::Windows::Forms::Form
	{

	private:
		Controlador^ controlador_GUI;
	public:
		Sensores(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			controlador_GUI = gcnew Controlador();
		}

	



	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Sensores()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label4;
	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(59, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre";
			this->label1->Click += gcnew System::EventHandler(this, &Sensores::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(59, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Tipo";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(62, 172);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(69, 20);
			this->radioButton1->TabIndex = 4;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Activar";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Sensores::radioButton1_CheckedChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(59, 135);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Rango maximo";
			this->label3->Click += gcnew System::EventHandler(this, &Sensores::label3_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(669, 185);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Sensores::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(251, 51);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 1;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(62, 236);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(682, 197);
			this->dataGridView1->TabIndex = 6;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Tipo";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"RangoMax";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Estado";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(251, 133);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 22);
			this->numericUpDown1->TabIndex = 7;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(250, 98);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(465, 57);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(167, 25);
			this->label4->TabIndex = 9;
			this->label4->Text = L"ESTO NO SIRVE";
			// 
			// Sensores
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(849, 457);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Sensores";
			this->Text = L"Sensores";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		try {
			// 1. VALIDACIÓN EN LA GUI: Evitar campos vacíos usando String::IsNullOrWhiteSpace
			if (String::IsNullOrWhiteSpace(textBox1->Text) || String::IsNullOrWhiteSpace(comboBox1->Text)) {
				MessageBox::Show("Error: El nombre y el tipo de sensor son obligatorios.",
					"Validación de Datos", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return; // Cortamos la ejecución aquí
			}

			// 2. CAPTURA DE DATOS: Leer los controles visuales
			String^ nombre = textBox1->Text;
			String^ tipo = comboBox1->Text;
			double rangoMax = Convert::ToDouble(numericUpDown1->Value);

			// RadioButton: Si rbtActivo está marcado (true), es "Activo", sino "Inactivo"
			String^ estado = radioButton1->Checked ? "Activo" : "Inactivo";

			// 3. ENLACE CON MODELO: Creamos el objeto
			SensorIndustrial^ nuevoSensor = gcnew SensorIndustrial();
			nuevoSensor->nombre = nombre;
			nuevoSensor->tipo = tipo;
			nuevoSensor->rango_maximo = rangoMax;
			nuevoSensor->estado = estado;

			// 4. LLAMADA AL CONTROLADOR: La GUI no sabe cómo se guarda, solo lo envía
			this->controlador_GUI->Agregar(nuevoSensor);

			// 5. NOTIFICACIÓN Y LIMPIEZA VISUAL
			MessageBox::Show("Sensor registrado exitosamente.",
				"Operación Exitosa", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Limpiamos los campos para un nuevo ingreso
			textBox1->Clear();
			comboBox1->SelectedIndex = -1; // Deselecciona el ComboBox
			numericUpDown1->Value = 0;
			radioButton1->Checked = true;   // Valor por defecto

			// TODO: Aquí llamaremos luego a la función para actualizar el DataGridView
		}
		catch (Exception^ ex) {
			// Si el controlador lanza una excepción (throw gcnew Exception), la atrapamos y mostramos
			MessageBox::Show(ex->Message, "Error del Sistema", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}


	

	};
}