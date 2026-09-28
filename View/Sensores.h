#pragma once

namespace View{

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
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::CheckBox^ checkBox1;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
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
			this->button1->Location = System::Drawing::Point(495, 51);
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
			this->dataGridView1->Location = System::Drawing::Point(62, 286);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(804, 197);
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
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Temperatura", L"Presion", L"Proximidad" });
			this->comboBox1->Location = System::Drawing::Point(250, 98);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(145, 24);
			this->comboBox1->TabIndex = 8;
			this->comboBox1->Text = L"Seleccione el tipo";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Sensores::comboBox1_SelectedIndexChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(495, 94);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Listar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Sensores::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(744, 49);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 37);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Consultar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Sensores::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(741, 101);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(83, 30);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Modificar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Sensores::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(741, 148);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(83, 33);
			this->button5->TabIndex = 12;
			this->button5->Text = L"Eliminar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Sensores::button5_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(844, 101);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(80, 22);
			this->textBox2->TabIndex = 13;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(851, 70);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 16);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Inserte ID";
			this->label4->Click += gcnew System::EventHandler(this, &Sensores::label4_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(62, 181);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(82, 20);
			this->checkBox1->TabIndex = 15;
			this->checkBox1->Text = L"Activado";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Sensores::checkBox1_CheckedChanged);
			// 
			// Sensores
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1060, 514);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
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

	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
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
			String^ estado = checkBox1->Checked ? "Activo" : "Inactivo";

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
			checkBox1->Checked = false;   // Valor por defecto

			// TODO: Aquí llamaremos luego a la función para actualizar el DataGridView
		}
		catch (Exception^ ex) {
			// Si el controlador lanza una excepción (throw gcnew Exception), la atrapamos y mostramos
			MessageBox::Show(ex->Message, "Error del Sistema", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}


	// Agregar

	private: System::Void DataGridView(System::Object^ sender, System::EventArgs^ e) {




	}

	
	
	// Enlistar
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		try {
			// 1. Limpiar la tabla antes de cargar nuevos datos para no duplicar filas
			dataGridView1->Rows->Clear();

			// 2. Obtener la lista de sensores desde el Controlador
			List<SensorIndustrial^>^ listaActual = this->controlador_GUI->ObtenerTodos();

			// 3. Recorrer la lista y poblar el DataGridView
			for each (SensorIndustrial ^ s in listaActual) {
				// Add() recibe un arreglo de objetos que corresponden a las columnas que creaste en el IDE:
				// [0]: ID, [1]: Nombre, [2]: Tipo, [3]: RangoMax, [4]: Estado
				dataGridView1->Rows->Add(
					s->id,
					s->nombre,
					s->tipo,
					s->rango_maximo,
					s->estado
				);
			}
		}
		catch (Exception^ ex) {
			// Buena práctica: Si algo falla al traer los datos, mostramos el error
			MessageBox::Show("Error al cargar la lista: " + ex->Message,
				"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}



	//Consultar
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {


		try {
			// Validación visual: Verificar que se haya ingresado un ID
			if (String::IsNullOrWhiteSpace(label4->Text)) {
				MessageBox::Show("Por favor, ingrese un ID para buscar.", "Validación", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			int idBuscado = Convert::ToInt32(textBox2->Text);

			// Llamamos al controlador. Si no existe, lanzará la excepción y saltará al "catch"
			SensorIndustrial^ encontrado = this->controlador_GUI->ConsultarPorId(idBuscado);

			// Si lo encuentra, autocompletamos los campos visuales con la data del objeto
			textBox1->Text = encontrado->nombre;
			comboBox1->Text = encontrado->tipo;
			numericUpDown1->Value = Convert::ToDecimal(encontrado->rango_maximo);

			/*if (encontrado->estado == "Activo") {
				radioButton1->Checked = true;
			}
			else {
				rbtInactivo->Checked = true;
			}*/

			if (encontrado->estado == "Activo") {
				checkBox1->Checked = true;
			}
			else {
				checkBox1->Checked = false;
			}
	

		}
		catch (FormatException^) {
			MessageBox::Show("El ID debe ser un número entero válido.", "Error de Formato", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Error de Búsqueda", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}


	}


	

	// Modificar

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		try {
			if (String::IsNullOrWhiteSpace(textBox2->Text) || String::IsNullOrWhiteSpace(textBox2->Text)) {
				MessageBox::Show("Consulte un ID válido y asegúrese de que los campos no estén vacíos.", "Validación", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			// Empaquetamos los datos actualizados en un nuevo objeto
			SensorIndustrial^ sensorModificado = gcnew SensorIndustrial();
			sensorModificado->id = Convert::ToInt32(textBox2->Text); // El ID es crucial para saber a quién modificar
			sensorModificado->nombre = textBox1->Text;
			sensorModificado->tipo = comboBox1->Text;
			sensorModificado->rango_maximo= Convert::ToDouble(numericUpDown1->Value);
			sensorModificado->estado= checkBox1->Checked ? "Activo" : "Inactivo";

			// Enviamos al controlador
			this->controlador_GUI->Modificar(sensorModificado);

			MessageBox::Show("Sensor modificado exitosamente.", "Operación Exitosa", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Truco: Refrescamos la tabla simulando un clic en el botón Listar
			button2_Click(nullptr, nullptr);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Error al Modificar", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}


	}



	

	// Eliminar

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

		try {	//textbox2 es el buscar id
			if (String::IsNullOrWhiteSpace(textBox2->Text)) {
				MessageBox::Show("Ingrese el ID del sensor que desea eliminar.", "Validación", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			int idEliminar = Convert::ToInt32(textBox2->Text);

			// Podemos agregar una confirmación visual extra (Buena práctica de UI)
			System::Windows::Forms::DialogResult respuesta = MessageBox::Show("¿Está seguro que desea eliminar el sensor ID " + idEliminar + "?","Confirmar Eliminación", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (respuesta == System::Windows::Forms::DialogResult::Yes) {
				this->controlador_GUI->Eliminar(idEliminar);
				MessageBox::Show("Sensor eliminado.", "Operación Exitosa", MessageBoxButtons::OK, MessageBoxIcon::Information);

				textBox2->Clear(); // Limpiamos la búsqueda
				button2_Click(nullptr, nullptr); // Refrescamos la tabla
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Error al Eliminar", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}



	}




private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}