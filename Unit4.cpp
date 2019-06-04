//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm4::SliderChange(TObject *Sender)
{
        int value = Form4->Slider->Position;
        if(value==0)
        {
            AnsiString napis1("£atwy");
            Form4->Label2->Caption=napis1;
        }
        else if(value == 1)
        {
            AnsiString napis2("Œredni");
            Form4->Label2->Caption=napis2;
        }
        else
        {
            AnsiString napis3("Trudny");
            Form4->Label2->Caption=napis3;
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button1Click(TObject *Sender)
{
        Form4->Hide();        
}
//---------------------------------------------------------------------------
