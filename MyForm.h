#pragma once


namespace Zadanie6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;


	

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ otwórzToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ zapiszToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ tabela;

	private:


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Model;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Rdzenie;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Taktowanie;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Taktowanie_boost;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TDP;
	private: System::Windows::Forms::ToolStripMenuItem^ plikToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ otwórzToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ edytujToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dodajPoni¿ejToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ usuñToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zapiszToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ zamknijToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ oProgramieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ informacjeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ podziêkowaniaToolStripMenuItem;



	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->otwórzToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zapiszToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zamknijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->edytujToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dodajPoni¿ejToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usuñToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oProgramieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->informacjeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->podziêkowaniaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->otwórzToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zapiszToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabela = (gcnew System::Windows::Forms::DataGridView());
			this->Model = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Rdzenie = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Taktowanie = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Taktowanie_boost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TDP = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabela))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->plikToolStripMenuItem1,
					this->edytujToolStripMenuItem, this->oProgramieToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(698, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::menuStrip1_ItemClicked);
			// 
			// plikToolStripMenuItem1
			// 
			this->plikToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->otwórzToolStripMenuItem,
					this->zapiszToolStripMenuItem1, this->zamknijToolStripMenuItem
			});
			this->plikToolStripMenuItem1->Name = L"plikToolStripMenuItem1";
			this->plikToolStripMenuItem1->Size = System::Drawing::Size(38, 20);
			this->plikToolStripMenuItem1->Text = L"Plik";
			this->plikToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::plikToolStripMenuItem1_Click);
			// 
			// otwórzToolStripMenuItem
			// 
			this->otwórzToolStripMenuItem->Name = L"otwórzToolStripMenuItem";
			this->otwórzToolStripMenuItem->Size = System::Drawing::Size(117, 22);
			this->otwórzToolStripMenuItem->Text = L"Otwórz";
			this->otwórzToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::otwórzToolStripMenuItem_Click_1);
			// 
			// zapiszToolStripMenuItem1
			// 
			this->zapiszToolStripMenuItem1->Name = L"zapiszToolStripMenuItem1";
			this->zapiszToolStripMenuItem1->Size = System::Drawing::Size(117, 22);
			this->zapiszToolStripMenuItem1->Text = L"Zapisz";
			this->zapiszToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::zapiszToolStripMenuItem1_Click);
			// 
			// zamknijToolStripMenuItem
			// 
			this->zamknijToolStripMenuItem->Name = L"zamknijToolStripMenuItem";
			this->zamknijToolStripMenuItem->Size = System::Drawing::Size(117, 22);
			this->zamknijToolStripMenuItem->Text = L"Zamknij";
			this->zamknijToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zamknijToolStripMenuItem_Click);
			// 
			// edytujToolStripMenuItem
			// 
			this->edytujToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->dodajPoni¿ejToolStripMenuItem,
					this->usuñToolStripMenuItem
			});
			this->edytujToolStripMenuItem->Name = L"edytujToolStripMenuItem";
			this->edytujToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->edytujToolStripMenuItem->Text = L"Edytuj";
			// 
			// dodajPoni¿ejToolStripMenuItem
			// 
			this->dodajPoni¿ejToolStripMenuItem->Name = L"dodajPoni¿ejToolStripMenuItem";
			this->dodajPoni¿ejToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->dodajPoni¿ejToolStripMenuItem->Text = L"Dodaj poni¿ej";
			this->dodajPoni¿ejToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::dodajPoni¿ejToolStripMenuItem_Click);
			// 
			// usuñToolStripMenuItem
			// 
			this->usuñToolStripMenuItem->Name = L"usuñToolStripMenuItem";
			this->usuñToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->usuñToolStripMenuItem->Text = L"Usuñ";
			this->usuñToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::usuñToolStripMenuItem_Click);
			// 
			// oProgramieToolStripMenuItem
			// 
			this->oProgramieToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->informacjeToolStripMenuItem,
					this->podziêkowaniaToolStripMenuItem
			});
			this->oProgramieToolStripMenuItem->Name = L"oProgramieToolStripMenuItem";
			this->oProgramieToolStripMenuItem->Size = System::Drawing::Size(86, 20);
			this->oProgramieToolStripMenuItem->Text = L"O programie";
			// 
			// informacjeToolStripMenuItem
			// 
			this->informacjeToolStripMenuItem->Name = L"informacjeToolStripMenuItem";
			this->informacjeToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->informacjeToolStripMenuItem->Text = L"Informacje";
			this->informacjeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::informacjeToolStripMenuItem_Click);
			// 
			// podziêkowaniaToolStripMenuItem
			// 
			this->podziêkowaniaToolStripMenuItem->Name = L"podziêkowaniaToolStripMenuItem";
			this->podziêkowaniaToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->podziêkowaniaToolStripMenuItem->Text = L"Podziêkowania";
			this->podziêkowaniaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::podziêkowaniaToolStripMenuItem_Click);
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->otwórzToolStripMenuItem1,
					this->zapiszToolStripMenuItem
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->plikToolStripMenuItem->Text = L"Plik";
			this->plikToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::plikToolStripMenuItem_Click);
			// 
			// otwórzToolStripMenuItem1
			// 
			this->otwórzToolStripMenuItem1->Name = L"otwórzToolStripMenuItem1";
			this->otwórzToolStripMenuItem1->Size = System::Drawing::Size(112, 22);
			this->otwórzToolStripMenuItem1->Text = L"Otwórz";
			this->otwórzToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::otwórzToolStripMenuItem1_Click);
			// 
			// zapiszToolStripMenuItem
			// 
			this->zapiszToolStripMenuItem->Name = L"zapiszToolStripMenuItem";
			this->zapiszToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->zapiszToolStripMenuItem->Text = L"Zapisz";
			this->zapiszToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zapiszToolStripMenuItem_Click);
			// 
			// tabela
			// 
			this->tabela->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tabela->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Model, this->Rdzenie,
					this->Taktowanie, this->Taktowanie_boost, this->TDP
			});
			this->tabela->Cursor = System::Windows::Forms::Cursors::Default;
			this->tabela->Location = System::Drawing::Point(9, 25);
			this->tabela->Margin = System::Windows::Forms::Padding(2);
			this->tabela->Name = L"tabela";
			this->tabela->RowHeadersWidth = 51;
			this->tabela->RowTemplate->Height = 24;
			this->tabela->Size = System::Drawing::Size(675, 217);
			this->tabela->TabIndex = 0;
			this->tabela->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// Model
			// 
			this->Model->Frozen = true;
			this->Model->HeaderText = L"Model";
			this->Model->MinimumWidth = 6;
			this->Model->Name = L"Model";
			this->Model->Width = 125;
			// 
			// Rdzenie
			// 
			this->Rdzenie->Frozen = true;
			this->Rdzenie->HeaderText = L"Rdzenie/w¹tki";
			this->Rdzenie->MinimumWidth = 6;
			this->Rdzenie->Name = L"Rdzenie";
			this->Rdzenie->Width = 125;
			// 
			// Taktowanie
			// 
			this->Taktowanie->Frozen = true;
			this->Taktowanie->HeaderText = L"Taktowanie bazowe";
			this->Taktowanie->MinimumWidth = 6;
			this->Taktowanie->Name = L"Taktowanie";
			this->Taktowanie->Width = 125;
			// 
			// Taktowanie_boost
			// 
			this->Taktowanie_boost->Frozen = true;
			this->Taktowanie_boost->HeaderText = L"Taktowanie boost";
			this->Taktowanie_boost->MinimumWidth = 6;
			this->Taktowanie_boost->Name = L"Taktowanie_boost";
			this->Taktowanie_boost->Width = 125;
			// 
			// TDP
			// 
			this->TDP->Frozen = true;
			this->TDP->HeaderText = L"TDP";
			this->TDP->MinimumWidth = 6;
			this->TDP->Name = L"TDP";
			this->TDP->Width = 125;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(698, 252);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->tabela);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabela))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void plikToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void otwórzToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void zapiszToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void otwórzToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void contextMenuStrip1_Opening(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
private: System::Void contextMenuStrip2_Opening(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}

private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
private: System::Void plikToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void otwórzToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ ofd = gcnew OpenFileDialog();
	ofd->InitialDirectory = "Desktop";
	ofd->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	ofd->FilterIndex = 1;
	ofd->RestoreDirectory = true;
	
	if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		
		try
		{
			StreamReader^ sr = gcnew StreamReader(ofd->FileName);
			String^ line;
			int i = 0;
			int j = 0;
			while (line = sr->ReadLine())
			{
				tabela->Rows->Add();
				while (j<5)
				{
					tabela->Rows[i]->Cells[j]->Value = line->Split('\t')[j];
					j++;
				}
				j = 0;
				i++;	
			}
			delete (IDisposable^)sr;
		
		}
		catch (Exception^ e)
		{
			//B³¹d otwarcia
			MessageBox::Show("B³¹d otwracia pliku","Wyj¹tek", MessageBoxButtons::OK, MessageBoxIcon::Error);
			MessageBox::Show(e->Message);
		}
	}

}
private: System::Void dodajPoni¿ejToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	tabela->Rows->Insert(tabela->CurrentCell->RowIndex+1);
	//Console::WriteLine(tabela->CurrentCell->RowIndex);
}
private: System::Void usuñToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	tabela->Rows->RemoveAt(tabela->CurrentCell->RowIndex);
}
private: System::Void zapiszToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ sfd = gcnew SaveFileDialog();
	sfd->InitialDirectory = "Desktop";
	sfd->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	sfd->FilterIndex = 1;
	sfd->RestoreDirectory = true;
	
	if (sfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		StreamWriter^ file = gcnew StreamWriter(sfd->FileName);
		try
		{
			String^ sLine = "";
			for (int r = 0; r <= tabela->Rows->Count - 1; r++)
			{
				for (int c = 0; c <= tabela->Columns->Count - 1; c++)
				{
					sLine = sLine + tabela->Rows[r]->Cells[c]->Value;
					if (c != tabela->Columns->Count - 1)
					{
						sLine = sLine + "\t";
					}
				}
				file->WriteLine(sLine);
				sLine = "";
			}

			file->Close();
			MessageBox::Show("Zapis gotowy.", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ err)
		{
			MessageBox::Show(err->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			file->Close();
		}
	}
}
private: System::Void zamknijToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void informacjeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Twórca aplikacji: Jakub Maksajda", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void podziêkowaniaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ thx = "Chcia³bym szczególnie podziêkowaæ mamie, tacie,\n Panu profesorowi £ukaszowi Piskorskiemu\n i stronie https://stackoverflow.com \n Bez ich wsparcia nie uda³o by mi siê napisaæ tego programu.";
	MessageBox::Show(thx, "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
}
