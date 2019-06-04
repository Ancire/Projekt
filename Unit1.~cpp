//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit5.h"
#include <cstdlib>
#include <time.h>
#include <fstream.h>
#include <string>

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
bool szatan=false;
int ee1 =0;
bool fee1=true;
int kon_g_1=0, krowa_g_1=0, swinia_g_1=0, owca_g_1=0, krolik_g_1=0;
int kon_g_2=0, krowa_g_2=0, swinia_g_2=0, owca_g_2=0, krolik_g_2=0;
int m_pies_g_1=0, d_pies_g_1=0;
int m_pies_g_2=0, d_pies_g_2=0;
char kto = '1';
bool los = true;
bool trade = true;
int losowanie()
{
    int kosc;
    return kosc = rand() % 12 + 1;
}

void wczytywanie(char *path)
{
    ifstream in;
    AnsiString napis;
    in.open(path);

    in >> kon_g_1;
    napis = kon_g_1;
    Form1->kon_1->Caption=napis;

    in >> krowa_g_1;
    napis = krowa_g_1;
    Form1->krowa_1->Caption=napis;

    in >> swinia_g_1;
    napis = swinia_g_1;
    Form1->swinia_1->Caption=napis;

    in >> owca_g_1;
    napis = owca_g_1;
    Form1->owca_1->Caption=napis;

    in >> krolik_g_1;
    napis = krolik_g_1;
    Form1->krolik_1->Caption=napis;

    in >> m_pies_g_1;
    napis =  m_pies_g_1;
    Form1-> m_pies_1->Caption=napis;

    in >> d_pies_g_1;
    napis =  d_pies_g_1;
    Form1-> d_pies_1->Caption=napis;

     in >> kon_g_2;
    napis = kon_g_2;
    Form1->kon_2->Caption=napis;

    in >> krowa_g_2;
    napis = krowa_g_2;
    Form1->krowa_2->Caption=napis;

    in >> swinia_g_2;
    napis = swinia_g_2;
    Form1->swinia_2->Caption=napis;

    in >> owca_g_2;
    napis = owca_g_2;
    Form1->owca_2->Caption=napis;

    in >> krolik_g_2;
    napis = krolik_g_2;
    Form1->krolik_2->Caption=napis;

    in >> m_pies_g_2;
    napis =  m_pies_g_2;
    Form1-> m_pies_2->Caption=napis;

    in >> d_pies_g_2;
    napis =  d_pies_g_2;
    Form1-> d_pies_2->Caption=napis;

}
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
srand(time(NULL));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::addKon1Click(TObject *Sender)
{
     kon_g_1++;
     AnsiString napis(kon_g_1);
     Form1->kon_1->Caption = napis;
}
//---------------------------------------------------------------------------


                                      //MOJE FUNKCJE



void __fastcall TForm1::dropKon1Click(TObject *Sender)
{
     if(kon_g_1>0){
     kon_g_1--;
     }
     AnsiString napis(kon_g_1);
     Form1->kon_1->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::addKrowa1Click(TObject *Sender)
{
     krowa_g_1++;
     AnsiString napis(krowa_g_1);
     Form1->krowa_1->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::dropKrowa1Click(TObject *Sender)
{
     if(krowa_g_1>0){
     krowa_g_1--;
     }
     AnsiString napis(krowa_g_1);
     Form1->krowa_1->Caption = napis;
}

//---------------------------------------------------------------------------
void __fastcall TForm1::addSwinia1Click(TObject *Sender)
{
     swinia_g_1++;
     AnsiString napis(swinia_g_1);
     Form1->swinia_1->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::dropSwinia1Click(TObject *Sender)
{
     if(swinia_g_1>0){
     swinia_g_1--;
     }
     AnsiString napis(swinia_g_1);
     Form1->swinia_1->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::dropOwca1Click(TObject *Sender)
{
     if(owca_g_1>0){
     owca_g_1--;
     }
     AnsiString napis(owca_g_1);
     Form1->owca_1->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::addOwca1Click(TObject *Sender)
{
     owca_g_1++;
     AnsiString napis(owca_g_1);
     Form1->owca_1->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::dropMpies1Click(TObject *Sender)
{
     if(m_pies_g_1 > 0){
     m_pies_g_1--;
     }
     AnsiString napis(m_pies_g_1);
     Form1->m_pies_1->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::addMpies1Click(TObject *Sender)
{
     m_pies_g_1++;
     AnsiString napis(m_pies_g_1);
     Form1->m_pies_1->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::dropKon2Click(TObject *Sender)
{
     if(kon_g_2>0){
     kon_g_2--;
     }
     AnsiString napis(kon_g_2);
     Form1->kon_2->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::addKon2Click(TObject *Sender)
{
     kon_g_2++;
     AnsiString napis(kon_g_2);
     Form1->kon_2->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::dropKrowa2Click(TObject *Sender)
{
     if(krowa_g_2>0){
     krowa_g_2--;
     }
     AnsiString napis(krowa_g_2);
     Form1->krowa_2->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::addKrowa2Click(TObject *Sender)
{
     krowa_g_2++;
     AnsiString napis(krowa_g_2);
     Form1->krowa_2->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::dropSwinia2Click(TObject *Sender)
{
     if(swinia_g_2>0){
     swinia_g_2--;
     }
     AnsiString napis(swinia_g_2);
     Form1->swinia_2->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::addSwinia2Click(TObject *Sender)
{
     swinia_g_2++;
     AnsiString napis(swinia_g_2);
     Form1->swinia_2->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::dropOwca2Click(TObject *Sender)
{
     if(owca_g_2>0){
     owca_g_2--;
     }
     AnsiString napis(owca_g_2);
     Form1->owca_2->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::addOwca2Click(TObject *Sender)
{
     owca_g_2++;
     AnsiString napis(owca_g_2);
     Form1->owca_2->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::dropKrolik2Click(TObject *Sender)
{
     if(krolik_g_2>0){
     krolik_g_2--;
     }
     AnsiString napis(krolik_g_2);
     Form1->krolik_2->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::addKrolik2Click(TObject *Sender)
{
     krolik_g_2++;
     AnsiString napis(krolik_g_2);
     Form1->krolik_2->Caption = napis;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::addKrolik1Click(TObject *Sender)
{
     krolik_g_1++;
     AnsiString napis(krolik_g_1);
     Form1->krolik_1->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::dropKrolik1Click(TObject *Sender)
{
     if(krolik_g_1>0){
     krolik_g_1--;
     }
     AnsiString napis(krolik_g_1);
     Form1->krolik_1->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::dropDpies1Click(TObject *Sender)
{
     if(d_pies_g_1>0){
     d_pies_g_1--;
     }
     AnsiString napis(d_pies_g_1);
     Form1->d_pies_1->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::addDpies1Click(TObject *Sender)
{
     d_pies_g_1++;
     AnsiString napis(d_pies_g_1);
     Form1->d_pies_1->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::dropMpies2Click(TObject *Sender)
{
     if(m_pies_g_2>0){
     m_pies_g_2--;
     }
     AnsiString napis(m_pies_g_2);
     Form1->m_pies_2->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::addMpies2Click(TObject *Sender)
{
     m_pies_g_2++;
     AnsiString napis(m_pies_g_2);
     Form1->m_pies_2->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::dropDpies2Click(TObject *Sender)
{
     if(d_pies_g_2>0){
     d_pies_g_2--;
     }
     AnsiString napis(d_pies_g_2);
     Form1->d_pies_2->Caption = napis;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::addDpies2Click(TObject *Sender)
{
     d_pies_g_2++;
     AnsiString napis(d_pies_g_2);
     Form1->d_pies_2->Caption = napis;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Label2Click(TObject *Sender)
{
        if(kto=='1'){
        Form1->tura->Picture->LoadFromFile("t_2.jpg");
        kto='2';
        }else{
        Form1->tura->Picture->LoadFromFile("t_1.jpg");
        kto='1';
        }
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button1Click(TObject *Sender)
{
        los = true;
        trade = true;
        if(kto=='1'){
        Form1->tura->Picture->LoadFromFile("t_2.jpg");
        kto='2';
        }else{
        Form1->tura->Picture->LoadFromFile("t_1.jpg");
        kto='1';
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RzutClick(TObject *Sender)
{
  bool krolik=false;
  bool owca = false;
  bool swinia = false;
  bool krowa = false;
  bool kon = false;

  if(los)
  {
      int kosc1 = losowanie();
      int kosc2 = losowanie();
      if(szatan){
      kosc1=kosc2=12;
      if(kosc1==12 && kosc2 == 12)
      {
        Form1->chungus1->Visible=true;
        Form1->chungus2->Visible=true;
        Form1->BUGS->Enabled=true;
        Satani->Play();
        szatan=false;
      }
      }

      if(kosc1 <= 6)
      {
        Form1->K1->Picture->LoadFromFile("krolik.jpg");
      }
      else if (kosc1<=9)
      {
        Form1->K1->Picture->LoadFromFile("owca.jpg");
      }
      else if(kosc1==10)
      {
        Form1->K1->Picture->LoadFromFile("swinia.jpg");
      }
      else if(kosc1==11)
      {
        Form1->K1->Picture->LoadFromFile("krowa.jpg");
      }
      else if(kosc1==12)
      {
        Form1->K1->Picture->LoadFromFile("wilk.jpg");
      }

       if(kosc2 <= 6)
      {
        Form1->K2->Picture->LoadFromFile("krolik.jpg");
      }else if (kosc2<=8)
      {
        Form1->K2->Picture->LoadFromFile("owca.jpg");
      }else if(kosc2<=10)
      {
        Form1->K2->Picture->LoadFromFile("swinia.jpg");
      }else if(kosc2==11)
      {
        Form1->K2->Picture->LoadFromFile("kon.jpg");
      }else if(kosc2==12)
      {
        Form1->K2->Picture->LoadFromFile("lis.jpg");
      }




        if(kto=='1')
        {
          if (kosc1 <= 6)
          {
                  if (krolik_g_1 == 0)
                  {
                    if (kosc2 <= 6 && kosc1 <= 6)
                    {
                      krolik_g_1 = 1;
                    }
                  }
                  else
                  {
                    krolik_g_1 = krolik_g_1 + ((krolik_g_1 + 1) / 2);

                  }
                  krolik = true;
                  AnsiString napis(krolik_g_1);
                  Form1->krolik_1->Caption = napis;
          }

          if(kosc1 <= 9 && kosc1>=7)
          {
            if (owca_g_1 == 0)
                  {
                    if (kosc2>=7 && kosc2<=8)
                    {
                      owca_g_1 = 1;
                    }
                  }
                  else
                  {
                    owca_g_1 = owca_g_1 + ((owca_g_1 + 1) / 2);

                  }
                  owca = true;
                  AnsiString napis(owca_g_1);
                  Form1->owca_1->Caption = napis;


          }

          if(kosc1==10)
          {
            if (swinia_g_1 == 0)
                  {
                    if (kosc2>=9 && kosc2<=10)
                    {
                      swinia_g_1 = 1;
                    }
                  }
                  else
                  {
                    swinia_g_1 = swinia_g_1 + ((swinia_g_1 + 1) / 2);

                  }
                  swinia = true;
                  AnsiString napis(swinia_g_1);
                  Form1->swinia_1->Caption = napis;
          }

          if(kosc1==11)
          {
             if(krowa_g_1>0)
             {
                 krowa_g_1 = krowa_g_1 + ((krowa_g_1 + 1) / 2);
             }
             krowa = true;
             AnsiString napis(krowa_g_1);
             Form1->krowa_1->Caption = napis;
          }


          if(kosc1==12)
          {
             if(d_pies_g_1==0){
             owca_g_1 = 0;
             swinia_g_1 = 0;
             krowa_g_1 = 0;
             kon_g_1 = 0;
             AnsiString napis1(krolik_g_1);
             Form1->krolik_1->Caption = napis1;
             AnsiString napis2(owca_g_1);
             Form1->owca_1->Caption = napis2;
             AnsiString napis3(swinia_g_1);
             Form1->swinia_1->Caption = napis3;
             AnsiString napis4(krowa_g_1);
             Form1->krowa_1->Caption = napis4;
             AnsiString napis5(kon_g_1);
             Form1->kon_1->Caption = napis5;
             }
             else
             {
                d_pies_g_1--;
                AnsiString napis(d_pies_g_1);
                Form1->d_pies_1->Caption = napis;
             }
          }


          if(kosc2<=6 && krolik==false)
          {
            if (krolik_g_1 == 0)
            {
                if (kosc2 <= 6 && kosc1 <= 6)
                {
                        krolik_g_1 = 1;
                }
            }
            else
            {
                krolik_g_1 = krolik_g_1 + ((krolik_g_1 + 1) / 2);
            }
            krolik = true;
            AnsiString napis(krolik_g_1);
            Form1->krolik_1->Caption = napis;
          }

          if((kosc2 <= 8 && kosc2>=7) && (owca==false))
          {
            if (owca_g_1 == 0)
            {
                if (kosc1>=7 && kosc1<=9)
                {
                        owca_g_1 = 1;
                }
            }
            else
            {
                owca_g_1 = owca_g_1 + ((owca_g_1 + 1) / 2);
            }
            owca = true;
            AnsiString napis(owca_g_1);
            Form1->owca_1->Caption = napis;
          }

          if((kosc2 >=9 && kosc2 <= 10) && (swinia==false))
          {
            if (swinia_g_1 == 0)
            {
                if (kosc1==10)
                {
                      swinia_g_1 = 1;
                }
            }
            else
            {
                swinia_g_1 = swinia_g_1 + ((swinia_g_1 + 1) / 2);
            }
            swinia = true;
            AnsiString napis(swinia_g_1);
            Form1->swinia_1->Caption = napis;
          }

         if(kosc2==11)
         {
                if(kon_g_1>0)
                {
                    kon_g_1 = kon_g_1 + ((kon_g_1 + 1) / 2);
                }
                kon = true;
                AnsiString napis(kon_g_1);
                Form1->kon_1->Caption = napis;
         }

         if(kosc2==12)
         {
           krolik_g_1 = 0;
           AnsiString napis(krolik_g_1);
           Form1->krolik_1->Caption = napis;
         }


        }
        else
        {
                if (kosc1 <= 6)
                {
                  if (krolik_g_2 == 0)
                  {
                    if (kosc2 <= 6 && kosc1 <= 6)
                    {
                      krolik_g_2 = 1;
                    }
                  }
                  else
                  {
                    krolik_g_2 = krolik_g_2 + ((krolik_g_2 + 1) / 2);

                  }
                  krolik = true;
                  AnsiString napis(krolik_g_2);
                  Form1->krolik_2->Caption = napis;
                }


          if(kosc1 <= 9 && kosc1>=7)
          {
            if (owca_g_2 == 0)
                  {
                    if (kosc2>=7 && kosc2<=8)
                    {
                      owca_g_2 = 1;
                    }
                  }
                  else
                  {
                    owca_g_2 = owca_g_2 + ((owca_g_2 + 1) / 2);

                  }
                  owca = true;
                  AnsiString napis(owca_g_2);
                  Form1->owca_2->Caption = napis;
          }

          if(kosc1==10)
          {
            if (swinia_g_2 == 0)
                  {
                    if (kosc2>=9 && kosc2<=10)
                    {
                      swinia_g_2 = 1;
                    }
                  }
                  else
                  {
                    swinia_g_2 = swinia_g_2 + ((swinia_g_2 + 1) / 2);

                  }
                  swinia = true;
                  AnsiString napis(swinia_g_2);
                  Form1->swinia_2->Caption = napis;
          }

          if(kosc1==11)
          {
             if(krowa_g_2>0)
             {
                 krowa_g_2 = krowa_g_2 + ((krowa_g_2 + 1) / 2);
             }
             krowa = true;
             AnsiString napis(krowa_g_2);
             Form1->krowa_2->Caption = napis;
          }


          if(kosc1==12)
          {
             if(d_pies_g_2==0){
             owca_g_2 = 0;
             swinia_g_2 = 0;
             krowa_g_2 = 0;
             kon_g_2 = 0;
             AnsiString napis1(krolik_g_2);
             Form1->krolik_2->Caption = napis1;
             AnsiString napis2(owca_g_2);
             Form1->owca_2->Caption = napis2;
             AnsiString napis3(swinia_g_2);
             Form1->swinia_2->Caption = napis3;
             AnsiString napis4(krowa_g_2);
             Form1->krowa_2->Caption = napis4;
             AnsiString napis5(kon_g_2);
             Form1->kon_2->Caption = napis5;
             }
             else
             {
                d_pies_g_2--;
                AnsiString napis(d_pies_g_2);
                Form1->d_pies_2->Caption = napis;
             }
          }


          if(kosc2<=6 && krolik==false)
          {
            if (krolik_g_2 == 0)
            {
                if (kosc2 <= 6 && kosc1 <= 6)
                {
                        krolik_g_2 = 1;
                }
            }
            else
            {
                krolik_g_2 = krolik_g_2 + ((krolik_g_2 + 1) / 2);
            }
            krolik = true;
            AnsiString napis(krolik_g_2);
            Form1->krolik_2->Caption = napis;
          }

          if((kosc2 <= 8 && kosc2>=7) && (owca==false))
          {
            if (owca_g_2 == 0)
            {
                if (kosc1>=7 && kosc1<=9)
                {
                        owca_g_2 = 1;
                }
            }
            else
            {
                owca_g_2 = owca_g_2 + ((owca_g_2 + 1) / 2);
            }
            owca = true;
            AnsiString napis(owca_g_2);
            Form1->owca_2->Caption = napis;
          }

          if((kosc2 >=9 && kosc2 <= 10) && (swinia==false))
          {
            if (swinia_g_2 == 0)
            {
                if (kosc1==10)
                {
                      swinia_g_2 = 1;
                }
            }
            else
            {
                swinia_g_2 = swinia_g_2 + ((swinia_g_2 + 1) / 2);
            }
            swinia = true;
            AnsiString napis(swinia_g_2);
            Form1->swinia_2->Caption = napis;
          }

         if(kosc2==11)
         {
                if(kon_g_2>0)
                {
                    kon_g_2 = kon_g_2 + ((kon_g_2 + 1) / 2);
                }
                kon = true;
                AnsiString napis(kon_g_2);
                Form1->kon_2->Caption = napis;
         }

         if(kosc2==12)
         {
           krolik_g_2 =0;
           AnsiString napis(krolik_g_2);
           Form1->krolik_2->Caption = napis;
         }

        }
        }
   los = false;
}

//---------------------------------------------------------------------------



void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
    if(kto=='1')
    {
        Form1->change_z->Max  = krolik_g_1;
        Form1->change_o->Max  = owca_g_1;
        Form1->change_s->Max  = swinia_g_1;
        Form1->change_k->Max = krowa_g_1;
    }
    else
    {
        Form1->change_z->Max  = krolik_g_2;
        Form1->change_o->Max  = owca_g_2;
        Form1->change_s->Max  = swinia_g_2;
        Form1->change_k->Max = krowa_g_2;
    }
}


void __fastcall TForm1::Button2Click(TObject *Sender)
{
        int z,o,k,s;

        z = Form1->change_z->Position;
        o = Form1->change_o->Position;
        s = Form1->change_s->Position;
        k = Form1->change_k->Position;

if(trade){
if(kto=='1')
{

        if((z==6) && (o==0) && (s==0) && (k==0))
        {
                if(Form1->n1->Checked)
                {
                    krolik_g_1 -=6;
                    owca_g_1 +=1;
                    AnsiString napis(owca_g_1);
                    Form1->owca_1->Caption = napis;
                    AnsiString napis2(krolik_g_1);
                    Form1->krolik_1->Caption = napis2;
                }
                else
                {
                        krolik_g_1 -= 6;
                        m_pies_g_1 +=1;
                        AnsiString napis(krolik_g_1);
                        Form1->krolik_1->Caption = napis;
                        AnsiString napis2(m_pies_g_1);
                        Form1->m_pies_1->Caption = napis2;
                }
        }
        else if((z==0) && (o==1) && (s==0) && (k==0))
        {
                if(Form1->n1->Checked)
                {
                    krolik_g_1 +=6;
                    owca_g_1 -=1;
                    AnsiString napis(owca_g_1);
                    Form1->owca_1->Caption = napis;
                    AnsiString napis2(krolik_g_1);
                    Form1->krolik_1->Caption = napis2;
                }
                else
                {
                        owca_g_1 -= 1;
                        m_pies_g_1 +=1;
                        AnsiString napis(owca_g_1);
                        Form1->owca_1->Caption = napis;
                        AnsiString napis2(m_pies_g_1);
                        Form1->m_pies_1->Caption = napis2;
                }
        }
        else if((o==2) && (z==0) && (k==0) && (s==0))
        {
                if(Form1->n1->Checked || Form1->n2->Checked)
                {
                        owca_g_1 -= 2;
                        swinia_g_1 +=1;
                        AnsiString napis(owca_g_1);
                        Form1->owca_1->Caption = napis;
                        AnsiString napis2(swinia_g_1);
                        Form1->swinia_1->Caption = napis2;
                }
        }
        else if((o==0) && (z==12) && (k==0) && (s==0))
        {
                if(Form1->n1->Checked || Form1->n2->Checked)
                {
                        krolik_g_1 -= 12;
                        swinia_g_1 +=1;
                        AnsiString napis(krolik_g_1);
                        Form1->krolik_1->Caption = napis;
                        AnsiString napis2(swinia_g_1);
                        Form1->swinia_1->Caption = napis2;
                }
                //gracz dostaje swinie
        }
        else if((o==1) && (z==6) && (k==0) && (s==0))
        {
                if(Form1->n1->Checked || Form1->n2->Checked)
                {
                        krolik_g_1 -= 6;
                        owca_g_1 -= 1;
                        swinia_g_1 +=1;
                        AnsiString napis(krolik_g_1);
                        Form1->krolik_1->Caption = napis;
                        AnsiString napis2(swinia_g_1);
                        Form1->swinia_1->Caption = napis2;
                        AnsiString napis3(owca_g_1);
                        Form1->owca_1->Caption = napis3;
                }
                //gracz dostaje swinie
        }
        else if((o==0) && (z==0) && (k==0) && (s==3))
        {       if(Form1->n1->Checked)
                {
                        d_pies_g_1 += 1;
                        swinia_g_1 -=3;
                        AnsiString napis(d_pies_g_1);
                        Form1->d_pies_1->Caption = napis;
                        AnsiString napis2(swinia_g_1);
                        Form1->swinia_1->Caption = napis2;
                }
                else
                {
                        krowa_g_1 += 1;
                        swinia_g_1 -=3;
                        AnsiString napis(krowa_g_1);
                        Form1->krowa_1->Caption = napis;
                        AnsiString napis2(swinia_g_1);
                        Form1->swinia_1->Caption = napis2;
                }
                //gracz dostaje krowe albo duzego psa
        }
        else if((o==6) && (z==0) && (k==0) && (s==0))
        {
                if(Form1->n1->Checked)
                {
                        d_pies_g_1 += 1;
                        owca_g_1 -=6;
                        AnsiString napis(d_pies_g_1);
                        Form1->d_pies_1->Caption = napis;
                        AnsiString napis2(owca_g_1);
                        Form1->owca_1->Caption = napis2;
                }
                else
                {
                        krowa_g_1 += 1;
                        owca_g_1 -=6;
                        AnsiString napis(krowa_g_1);
                        Form1->krowa_1->Caption = napis;
                        AnsiString napis2(owca_g_1);
                        Form1->owca_1->Caption = napis2;
                }
                //gracz dostaje krowe albo duzego psa
        }
        else if((o==0) && (z==36) && (k==0) && (s==0))
        {
                if(Form1->n1->Checked)
                {
                        d_pies_g_1 += 1;
                        krolik_g_1 -=36;
                        AnsiString napis(d_pies_g_1);
                        Form1->d_pies_1->Caption = napis;
                        AnsiString napis2(krolik_g_1);
                        Form1->krolik_1->Caption = napis2;
                }
                else
                {
                        krowa_g_1 += 1;
                        krolik_g_1 -=36;
                        AnsiString napis(krowa_g_1);
                        Form1->krowa_1->Caption = napis;
                        AnsiString napis2(krolik_g_1);
                        Form1->krolik_1->Caption = napis2;
                }
                //gracz dostaje krowe albo duzego psa

        }
        else if((o==0) && (z==0) && (k==2) && (s==0))
        {
                if(Form1->n1->Checked || Form1->n2->Checked)
                {
                        krowa_g_1 -= 2;
                        kon_g_1 +=1;
                        AnsiString napis(kon_g_1);
                        Form1->kon_1->Caption = napis;
                        AnsiString napis2(krowa_g_1);
                        Form1->krowa_1->Caption = napis2;
                }
                //gracz dostaje konia
        }
        else if((o==0) && (z==0) && (k==0) && (s==6))
        {
                if(Form1->n1->Checked || Form1->n2->Checked)
                {
                        swinia_g_1 -= 6;
                        kon_g_1 +=1;
                        AnsiString napis(kon_g_1);
                        Form1->kon_1->Caption = napis;
                        AnsiString napis2(swinia_g_1);
                        Form1->swinia_1->Caption = napis2;
                }
                //gracz dostaje konia
        }
        else if((o==12) && (z==0) && (k==0) && (s==0))
        {
                if(Form1->n1->Checked || Form1->n2->Checked)
                {
                        owca_g_1 -= 12;
                        kon_g_1 +=1;
                        AnsiString napis(kon_g_1);
                        Form1->kon_1->Caption = napis;
                        AnsiString napis2(owca_g_1);
                        Form1->owca_1->Caption = napis2;
                }
                //gracz dostaje konia
        }
        else if((o==1) && (z==18) && (k==1) && (s==1))
        {
                if(Form1->n1->Checked || Form1->n2->Checked)
                {
                        owca_g_1 -= 1;
                        krolik_g_1 -= 18;
                        krowa_g_1 -= 1;
                        kon_g_1 +=1;
                        swinia_g_1 -=1;
                        AnsiString napis(kon_g_1);
                        Form1->kon_1->Caption = napis;
                        AnsiString napis2(owca_g_1);
                        Form1->owca_1->Caption = napis2;
                        AnsiString napis3(krolik_g_1);
                        Form1->krolik_1->Caption = napis3;
                        AnsiString napis4(swinia_g_1);
                        Form1->swinia_1->Caption = napis4;
                        AnsiString napis5(krowa_g_1);
                        Form1->krowa_1->Caption = napis5;
                }
                //gracz dostaje konia
        }
}
else
{
if((z==6) && (o==0) && (s==0) && (k==0))
        {
                if(Form1->n1->Checked)
                {
                    krolik_g_2 -=6;
                    owca_g_2 +=1;
                    AnsiString napis(owca_g_2);
                    Form1->owca_2->Caption = napis;
                    AnsiString napis2(krolik_g_2);
                    Form1->krolik_2->Caption = napis2;
                }
                else
                {
                        krolik_g_2 -= 6;
                        m_pies_g_2 +=1;
                        AnsiString napis(krolik_g_2);
                        Form1->krolik_2->Caption = napis;
                        AnsiString napis2(m_pies_g_2);
                        Form1->m_pies_2->Caption = napis2;
                }
        }
        else if((o==2) && (z==0) && (k==0) && (s==0))
        {
                if(Form1->n1->Checked || Form1->n2->Checked)
                {
                        owca_g_2 -= 2;
                        swinia_g_2 +=1;
                        AnsiString napis(owca_g_2);
                        Form1->owca_2->Caption = napis;
                        AnsiString napis2(swinia_g_2);
                        Form1->swinia_2->Caption = napis2;
                }
        }
        else if((o==0) && (z==12) && (k==0) && (s==0))
        {
                if(Form1->n1->Checked || Form1->n2->Checked)
                {
                        krolik_g_2 -= 12;
                        swinia_g_2 +=1;
                        AnsiString napis(krolik_g_2);
                        Form1->krolik_2->Caption = napis;
                        AnsiString napis2(swinia_g_2);
                        Form1->swinia_2->Caption = napis2;
                }
                //gracz dostaje swinie
        }
        else if((o==1) && (z==6) && (k==0) && (s==0))
        {
                if(Form1->n1->Checked || Form1->n2->Checked)
                {
                        krolik_g_2 -= 6;
                        owca_g_2 -= 1;
                        swinia_g_2 +=1;
                        AnsiString napis(krolik_g_2);
                        Form1->krolik_2->Caption = napis;
                        AnsiString napis2(swinia_g_2);
                        Form1->swinia_2->Caption = napis2;
                        AnsiString napis3(owca_g_2);
                        Form1->owca_2->Caption = napis3;
                }
                //gracz dostaje swinie
        }
        else if((o==0) && (z==0) && (k==0) && (s==3))
        {       if(Form1->n1->Checked)
                {
                        d_pies_g_2 += 1;
                        swinia_g_2 -=3;
                        AnsiString napis(d_pies_g_2);
                        Form1->d_pies_2->Caption = napis;
                        AnsiString napis2(swinia_g_2);
                        Form1->swinia_2->Caption = napis2;
                }
                else
                {
                        krowa_g_2 += 1;
                        swinia_g_2 -=3;
                        AnsiString napis(krowa_g_2);
                        Form1->krowa_2->Caption = napis;
                        AnsiString napis2(swinia_g_2);
                        Form1->swinia_2->Caption = napis2;
                }
                //gracz dostaje krowe albo duzego psa
        }
        else if((o==6) && (z==0) && (k==0) && (s==0))
        {
                if(Form1->n1->Checked)
                {
                        d_pies_g_2 += 1;
                        owca_g_2 -=6;
                        AnsiString napis(d_pies_g_2);
                        Form1->d_pies_2->Caption = napis;
                        AnsiString napis2(owca_g_2);
                        Form1->owca_2->Caption = napis2;
                }
                else
                {
                        krowa_g_2 += 1;
                        owca_g_2 -=6;
                        AnsiString napis(krowa_g_2);
                        Form1->krowa_2->Caption = napis;
                        AnsiString napis2(owca_g_2);
                        Form1->owca_2->Caption = napis2;
                }
                //gracz dostaje krowe albo duzego psa
        }
        else if((o==0) && (z==36) && (k==0) && (s==0))
        {
                if(Form1->n1->Checked)
                {
                        d_pies_g_2 += 1;
                        krolik_g_2 -=36;
                        AnsiString napis(d_pies_g_2);
                        Form1->d_pies_2->Caption = napis;
                        AnsiString napis2(krolik_g_2);
                        Form1->krolik_2->Caption = napis2;
                }
                else
                {
                        krowa_g_2 += 1;
                        krolik_g_2 -=6;
                        AnsiString napis(krowa_g_2);
                        Form1->krowa_2->Caption = napis;
                        AnsiString napis2(krolik_g_2);
                        Form1->krolik_2->Caption = napis2;
                }
                //gracz dostaje krowe albo duzego psa

        }
        else if((o==0) && (z==0) && (k==2) && (s==0))
        {
                if(Form1->n1->Checked || Form1->n2->Checked)
                {
                        krowa_g_2 -= 2;
                        kon_g_2 +=1;
                        AnsiString napis(kon_g_2);
                        Form1->kon_2->Caption = napis;
                        AnsiString napis2(krowa_g_2);
                        Form1->krowa_2->Caption = napis2;
                }
                //gracz dostaje konia
        }
        else if((o==0) && (z==0) && (k==0) && (s==6))
        {
                if(Form1->n1->Checked || Form1->n2->Checked)
                {
                        swinia_g_2 -= 6;
                        kon_g_2 +=1;
                        AnsiString napis(kon_g_2);
                        Form1->kon_2->Caption = napis;
                        AnsiString napis2(swinia_g_2);
                        Form1->swinia_2->Caption = napis2;
                }
                //gracz dostaje konia
        }
        else if((o==12) && (z==0) && (k==0) && (s==0))
        {
                if(Form1->n1->Checked || Form1->n2->Checked)
                {
                        owca_g_2 -= 12;
                        kon_g_2 +=1;
                        AnsiString napis(kon_g_2);
                        Form1->kon_2->Caption = napis;
                        AnsiString napis2(owca_g_2);
                        Form1->owca_2->Caption = napis2;
                }
                //gracz dostaje konia
        }
        else if((o==1) && (z==18) && (k==1) && (s==1))
        {
                if(Form1->n1->Checked || Form1->n2->Checked)
                {
                        owca_g_2 -= 1;
                        krolik_g_2 -= 18;
                        krowa_g_2 -= 1;
                        kon_g_2 +=1;
                        swinia_g_2 -=1;
                        AnsiString napis(kon_g_2);
                        Form1->kon_2->Caption = napis;
                        AnsiString napis2(owca_g_2);
                        Form1->owca_2->Caption = napis2;
                        AnsiString napis3(krolik_g_2);
                        Form1->krolik_2->Caption = napis3;
                        AnsiString napis4(swinia_g_2);
                        Form1->swinia_2->Caption = napis4;
                        AnsiString napis5(krowa_g_2);
                        Form1->krowa_2->Caption = napis5;
                }
                //gracz dostaje konia
        }
}

trade = false;
}
else
{
 //Komunikat ¿e wymiana jest 1 raz na ture
}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::change_zChange(TObject *Sender)
{
        int z = Form1->change_z->Position;
        AnsiString napis1(z);
        Form1->ile_z->Caption = napis1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::change_oChange(TObject *Sender)
{
        int z = Form1->change_o->Position;
        AnsiString napis1(z);
        Form1->ile_o->Caption = napis1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::change_sChange(TObject *Sender)
{
        int z = Form1->change_s->Position;
        AnsiString napis1(z);
        Form1->ile_s->Caption = napis1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::change_kChange(TObject *Sender)
{
        int z = Form1->change_k->Position;
        AnsiString napis1(z);
        Form1->ile_k->Caption = napis1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
        int z,o,k,s;

        z = Form1->change_z->Position;
        o = Form1->change_o->Position;
        s = Form1->change_s->Position;
        k = Form1->change_k->Position;


        if((z==6) && (o==0) && (s==0) && (k==0))
        {
                Form1->nagroda1->Picture->LoadFromFile("owca.jpg");
                Form1->nagroda2->Picture->LoadFromFile("mpies.jpg");

                //gracz ma dostac co wybral
        }
        else if((o==2) && (z==0) && (k==0) && (s==0))
        {
               Form1->nagroda1->Picture->LoadFromFile("swinia.jpg");
               Form1->nagroda2->Picture->LoadFromFile("swinia.jpg");
                //gracz dostaje swinie
        }
        else if((o==1) && (z==0) && (k==0) && (s==0))
        {
               Form1->nagroda1->Picture->LoadFromFile("krolik.jpg");
               Form1->nagroda2->Picture->LoadFromFile("mpies.jpg");
                //gracz dostaje swinie
        }
        else if((o==0) && (z==12) && (k==0) && (s==0))
        {
                Form1->nagroda1->Picture->LoadFromFile("swinia.jpg");
                Form1->nagroda2->Picture->LoadFromFile("swinia.jpg");
                //gracz dostaje swinie
        }
        else if((o==1) && (z==6) && (k==0) && (s==0))
        {
                Form1->nagroda1->Picture->LoadFromFile("swinia.jpg");
                Form1->nagroda2->Picture->LoadFromFile("swinia.jpg");
                //gracz dostaje swinie
        }
        else if((o==0) && (z==0) && (k==0) && (s==3))
        {
                Form1->nagroda1->Picture->LoadFromFile("dpies.jpg");
                Form1->nagroda2->Picture->LoadFromFile("krowa.jpg");
                //gracz dostaje krowe albo duzego psa
        }
        else if((o==6) && (z==0) && (k==0) && (s==0))
        {
                Form1->nagroda2->Picture->LoadFromFile("krowa.jpg");
                Form1->nagroda1->Picture->LoadFromFile("dpies.jpg");
                //gracz dostaje krowe albo duzego psa
        }
        else if((o==0) && (z==36) && (k==0) && (s==0))
        {
                Form1->nagroda2->Picture->LoadFromFile("krowa.jpg");
                Form1->nagroda1->Picture->LoadFromFile("dpies.jpg");
                //gracz dostaje krowe albo duzego psa

        }
        else if((o==0) && (z==0) && (k==2) && (s==0))
        {
                Form1->nagroda1->Picture->LoadFromFile("kon.jpg");
                Form1->nagroda2->Picture->LoadFromFile("kon.jpg");
                //gracz dostaje konia
        }
        else if((o==0) && (z==0) && (k==0) && (s==6))
        {
                Form1->nagroda1->Picture->LoadFromFile("kon.jpg");
                Form1->nagroda2->Picture->LoadFromFile("kon.jpg");
                //gracz dostaje konia
        }
        else if((o==12) && (z==0) && (k==0) && (s==0))
        {
                Form1->nagroda1->Picture->LoadFromFile("kon.jpg");
                Form1->nagroda2->Picture->LoadFromFile("kon.jpg");
                //gracz dostaje konia
        }
        else if((o==1) && (z==18) && (k==1) && (s==1))
        {
                Form1->nagroda1->Picture->LoadFromFile("kon.jpg");
                Form1->nagroda2->Picture->LoadFromFile("kon.jpg");
                //gracz dostaje konia
        }
        else
        {
                Form1->nagroda1->Picture->LoadFromFile("t_1.jpg");
                Form1->nagroda2->Picture->LoadFromFile("t_2.jpg");
        }




}
//---------------------------------------------------------------------------

void __fastcall TForm1::nagroda1Click(TObject *Sender)
{
        Form1->n1->Checked=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::nagroda2Click(TObject *Sender)
{
        Form1->n2->Checked=true;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::n1ContextPopup(TObject *Sender, TPoint &MousePos,
      bool &Handled)
{
        Form1->nagroda1->Picture->LoadFromFile("super_wilk.jpg");
}
//---------------------------------------------------------------------------


void __fastcall TForm1::swinia_imgClick(TObject *Sender)
{
        Swinia->Play();
}
//---------------------------------------------------------------------------




void __fastcall TForm1::krowa_imgClick(TObject *Sender)
{
       Krowa->Play();
}
//---------------------------------------------------------------------------



void __fastcall TForm1::FormCreate(TObject *Sender)
{
       Krowa->FileName = "krowa.mp3";
       Krowa->Open();

       Pies->FileName = "pies.mp3";
       Pies->Open();

       Owca->FileName = "owca.mp3";
       Owca->Open();

       Swinia->FileName = "swinia.mp3";
       Swinia->Open();

       Kon->FileName = "kon.mp3";
       Kon->Open();

       Krolik->FileName = "krolik.mp3";
       Krolik->Open();

       Krowa->FileName = "krowa.mp3";
       Krowa->Open();

       Satani->FileName = "satani.mp3";
       Satani->Open();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
       Krowa->Close();
       Owca->Close();
       Pies->Close();
       Swinia->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::owca_imgClick(TObject *Sender)
{
        Owca->Play();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::mpies1Click(TObject *Sender)
{
        Pies->Play();        
}
//---------------------------------------------------------------------------


void __fastcall TForm1::WinTimer(TObject *Sender)
{
        if(kto=='1')
        {
           AnsiString kon1(kon_1->Caption);
           AnsiString krowa1(krowa_1->Caption);
           AnsiString swinia1(swinia_1->Caption);
           AnsiString owca1(owca_1->Caption);
           AnsiString krolik1(krolik_1->Caption);

          if(((kon1!="0" && krowa1 !="0") && (swinia1 !="0" && owca1!= "0")) && krolik1 != "0" )
          {
          Form1->Win->Enabled=false;
          if(Application->MessageBox("Gratulacje wygrywa Gracz 1! ","Wygrana",0)==ID_YES)
          {
                 Form1->Hide();
                 Form2->Show();
          }
          else
          {
            Form1->Hide();
                 Form2->Show();
          }
          }
        }
        else if (kto=='2')
        {
           //Trzeba dac tutaj komunikat o wygranej
           AnsiString kon2(kon_2->Caption);
           AnsiString krowa2(krowa_2->Caption);
           AnsiString swinia2(swinia_2->Caption);
           AnsiString owca2(owca_2->Caption);
           AnsiString krolik2(krolik_2->Caption);
          if(((kon2!="0" && krowa2 !="0") && (swinia2 !="0" && owca2!= "0")) && krolik2 != "0" )
          {
          Form1->Win->Enabled=false;
          if(Application->MessageBox("Gratulacje wygrywa Gracz 2! Nast¹pi powrót do menu. ","Wygrana",0)==ID_YES)
          {
                 Form1->Hide();
                 Form2->Show();
          }
          else
          {
                Form1->Hide();
                 Form2->Show();
          }
           AnsiString napis1(5);
           Form1->kon_2->Caption = napis1;


          }
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::menuClick(TObject *Sender)
{
        Form1->Hide();
        Form2->Show();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::saveClick(TObject *Sender)
{

   ofstream out;
   char *path;
   if(Form1->s1->Checked==true){
    path = "slot_1.txt";
   }else if(Form1->s2->Checked==true)
   {
     path = "slot_2.txt";
   }else
   {
     path = "slot_3.txt";
   }

   out.open(path,ios::out);
   out<<kon_g_1<<"\n";
   out<<krowa_g_1<<"\n";
   out<<swinia_g_1<<"\n";
   out<<owca_g_1<<"\n";
   out<<krolik_g_1<<"\n";
   out<<m_pies_g_1<<"\n";
   out<<d_pies_g_1<<"\n";

   out<<kon_g_2<<"\n";
   out<<krowa_g_2<<"\n";
   out<<swinia_g_2<<"\n";
   out<<owca_g_2<<"\n";
   out<<krolik_g_2<<"\n";
   out<<m_pies_g_2<<"\n";
   out<<d_pies_g_2<<"\n";


   out<<kto<<"\n";
   out<<los<<"\n";
   out<<trade<<"\n";
   
   out.close();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button3Click(TObject *Sender)
{
if(Application->MessageBox("Czy napewno chcesz zaczac nowa gre niezapisane postepy zostana usuniete!","Reset!",MB_YESNOCANCEL)==ID_YES){
    AnsiString napis;
    kon_g_1 =0;
    napis = kon_g_1;
    Form1->kon_1->Caption=napis;

    krowa_g_1=0;;
    napis = krowa_g_1;
    Form1->krowa_1->Caption=napis;

    swinia_g_1=0;;
    napis = swinia_g_1;
    Form1->swinia_1->Caption=napis;

    owca_g_1=0;
    napis = owca_g_1;
    Form1->owca_1->Caption=napis;

    krolik_g_1=0;
    napis = krolik_g_1;
    Form1->krolik_1->Caption=napis;

    m_pies_g_1=0;
    napis =  m_pies_g_1;
    Form1-> m_pies_1->Caption=napis;

    d_pies_g_1=0;
    napis =  d_pies_g_1;
    Form1-> d_pies_1->Caption=napis;

    kon_g_2=0;
    napis = kon_g_2;
    Form1->kon_2->Caption=napis;

    krowa_g_2=0;
    napis = krowa_g_2;
    Form1->krowa_2->Caption=napis;

    swinia_g_2=0;
    napis = swinia_g_2;
    Form1->swinia_2->Caption=napis;

    owca_g_2=0;
    napis = owca_g_2;
    Form1->owca_2->Caption=napis;

    krolik_g_2=0;
    napis = krolik_g_2;
    Form1->krolik_2->Caption=napis;

    m_pies_g_2=0;
    napis =  m_pies_g_2;
    Form1-> m_pies_2->Caption=napis;

    d_pies_g_2=0;
    napis =  d_pies_g_2;
    Form1-> d_pies_2->Caption=napis;

    Form1->tura->Picture->LoadFromFile("t_1.jpg");
    Form1->K1->Picture->LoadFromFile("K1.jpg");
    Form1->K2->Picture->LoadFromFile("K2.jpg");

    kto = '1';
    trade = true;
    los = true;

    Form2->now_gra->Caption="Graj";
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SwapTimer(TObject *Sender)
{
        Form1->Hide();
        Form2->Show();
        Form1->Swap->Enabled=false;

}
//---------------------------------------------------------------------------


void __fastcall TForm1::kon_imgClick(TObject *Sender)
{
        Kon->Play();        
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Image1Click(TObject *Sender)
{
        Kon->Play();        
}
//---------------------------------------------------------------------------





void __fastcall TForm1::krolik_imgClick(TObject *Sender)
{
        Krolik->Play();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image5Click(TObject *Sender)
{
Krolik->Play();         
}
//---------------------------------------------------------------------------

bool flaga3=false;
void __fastcall TForm1::BUGSTimer(TObject *Sender)
{
   if(flaga3){
        Form1->chungus1->Visible=false;
        Form1->chungus2->Visible=false;
        Form1->BUGS->Enabled=false;
   }
   flaga3 = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
        szatan = true;
}
//---------------------------------------------------------------------------

