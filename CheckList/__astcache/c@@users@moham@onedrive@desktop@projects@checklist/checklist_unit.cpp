//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "CheckList_unit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AddButtonClick(TObject *Sender)
{
 String textItem = TextEdit->Text;
 if(textItem!=""){
 TextListBox->Items->Add(textItem);

 }
 TextEdit->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::TextListBoxItemClick(TCustomListBox * const Sender, TListBoxItem * const Item)

{
  int index=Item->Index;
  TextListBox->Items->Delete(index);
}
//---------------------------------------------------------------------------
