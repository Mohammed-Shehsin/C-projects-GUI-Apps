//---------------------------------------------------------------------------

#include <fmx.h>
#include<fstream>
#pragma hdrstop

#include "RegistrationForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TMyRegistrationForm *MyRegistrationForm;
//---------------------------------------------------------------------------
__fastcall TMyRegistrationForm::TMyRegistrationForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TMyRegistrationForm::SaveButtonClick(TObject *Sender)
{
	  fstream myFile;
	  myFile.open("RegistratedUser.txt",ios::app);

	  if (myFile.is_open()) {

	  AnsiString name=nameEdit->Text;
	  AnsiString username=UsernameEdit->Text;
	  AnsiString age=AgeEdit->Text;
	  AnsiString password=PasswordEdit->Text;

	  myFile<<name<<","<<age<<","<<username<<","<<password<<"\n";

	  myFile.close();

      this->Close();

	  }
}
//---------------------------------------------------------------------------
