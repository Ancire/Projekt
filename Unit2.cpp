//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit3.h"
#include "Unit1.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit8.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Button6Click(TObject *Sender)
{
    exit(0);        
}
//---------------------------------------------------------------------------


void __fastcall TForm2::now_graClick(TObject *Sender)
{
        Form2->Hide();
        Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button2Click(TObject *Sender)
{
        Form3->Show();



}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button3Click(TObject *Sender)
{
        Form4->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button4Click(TObject *Sender)
{
        Form5->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button5Click(TObject *Sender)
{
        Form8->Show();
}
//---------------------------------------------------------------------------

