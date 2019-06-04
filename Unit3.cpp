//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit2.h"
#include "Unit4.h"
#include "Unit1.cpp"
#include "Unit1.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button4Click(TObject *Sender)
{
        Form3->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button1Click(TObject *Sender)
{

        wczytywanie("slot_1.txt");
        ShowMessage("Wczytano dane!");
        Form2->now_gra->Caption="Wznow gre";
        Form3->Hide();


}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button2Click(TObject *Sender)
{
        wczytywanie("slot_2.txt");
        ShowMessage("Wczytano dane!");
        Form3->Hide();

}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button3Click(TObject *Sender)
{
        wczytywanie("slot_3.txt");
        ShowMessage("Wczytano dane!");
        Form3->Hide();

}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button5Click(TObject *Sender)
{
        Form1->Show();        
}
//---------------------------------------------------------------------------

