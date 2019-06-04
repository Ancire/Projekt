//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <ComCtrls.hpp>
#include <MPlayer.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TImage *kon_img;
        TLabel *kon_1;
        TImage *krowa_img;
        TLabel *krowa_1;
        TImage *swinia_img;
        TLabel *swinia_1;
        TImage *owca_img;
        TLabel *owca_1;
        TImage *krolik_img;
        TLabel *m_pies_1;
        TLabel *Player1;
        TImage *Image1;
        TLabel *kon_2;
        TImage *Image2;
        TLabel *krowa_2;
        TImage *Image3;
        TLabel *swinia_2;
        TImage *Image4;
        TLabel *owca_2;
        TImage *Image5;
        TLabel *krolik_2;
        TLabel *Player2;
        TImage *K1;
        TImage *K2;
        TBitBtn *Rzut;
        TImage *mpies1;
        TImage *Image7;
        TImage *Image6;
        TImage *Image8;
        TLabel *d_pies_1;
        TLabel *m_pies_2;
        TLabel *d_pies_2;
        TLabel *krolik_1;
        TImage *tura;
        TLabel *Label1;
        TButton *Button1;
        TTrackBar *change_z;
        TLabel *Label2;
        TTrackBar *change_o;
        TLabel *Label3;
        TTrackBar *change_s;
        TLabel *Label4;
        TTrackBar *change_k;
        TLabel *Label5;
        TTimer *Timer1;
        TButton *Button2;
        TImage *nagroda1;
        TImage *nagroda2;
        TLabel *ile_z;
        TLabel *ile_o;
        TLabel *ile_s;
        TLabel *ile_k;
        TTimer *Timer2;
        TRadioButton *n1;
        TRadioButton *n2;
        TMediaPlayer *Krowa;
        TMediaPlayer *Swinia;
        TMediaPlayer *Owca;
        TMediaPlayer *Krolik;
        TMediaPlayer *Kon;
        TMediaPlayer *Pies;
        TMediaPlayer *Wilk;
        TTimer *Win;
        TButton *menu;
        TButton *save;
        TButton *Button3;
        TImage *tlo;
        TTimer *Swap;
        TRadioButton *s1;
        TRadioButton *s2;
        TRadioButton *s3;
        TTimer *BUGS;
        TImage *chungus2;
        TImage *chungus1;
        TMediaPlayer *Satani;
        TButton *Button4;
       //TTimer *Timer3;
        void __fastcall addKon1Click(TObject *Sender);
        void __fastcall dropKon1Click(TObject *Sender);
        void __fastcall addKrowa1Click(TObject *Sender);
        void __fastcall dropKrowa1Click(TObject *Sender);
        void __fastcall addSwinia1Click(TObject *Sender);
        void __fastcall dropSwinia1Click(TObject *Sender);
        void __fastcall dropOwca1Click(TObject *Sender);
        void __fastcall addOwca1Click(TObject *Sender);
        void __fastcall dropMpies1Click(TObject *Sender);
        void __fastcall addMpies1Click(TObject *Sender);
        void __fastcall dropKon2Click(TObject *Sender);
        void __fastcall addKon2Click(TObject *Sender);
        void __fastcall dropKrowa2Click(TObject *Sender);
        void __fastcall addKrowa2Click(TObject *Sender);
        void __fastcall dropSwinia2Click(TObject *Sender);
        void __fastcall addSwinia2Click(TObject *Sender);
        void __fastcall dropOwca2Click(TObject *Sender);
        void __fastcall addOwca2Click(TObject *Sender);
        void __fastcall dropKrolik2Click(TObject *Sender);
        void __fastcall addKrolik2Click(TObject *Sender);
        void __fastcall addKrolik1Click(TObject *Sender);
        void __fastcall dropKrolik1Click(TObject *Sender);
        void __fastcall dropDpies1Click(TObject *Sender);
        void __fastcall addDpies1Click(TObject *Sender);
        void __fastcall dropMpies2Click(TObject *Sender);
        void __fastcall addMpies2Click(TObject *Sender);
        void __fastcall dropDpies2Click(TObject *Sender);
        void __fastcall addDpies2Click(TObject *Sender);
        void __fastcall Label2Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall RzutClick(TObject *Sender);
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall change_zChange(TObject *Sender);
        void __fastcall change_oChange(TObject *Sender);
        void __fastcall change_sChange(TObject *Sender);
        void __fastcall change_kChange(TObject *Sender);
        void __fastcall Timer2Timer(TObject *Sender);
        void __fastcall nagroda1Click(TObject *Sender);
        void __fastcall nagroda2Click(TObject *Sender);
        void __fastcall n1ContextPopup(TObject *Sender, TPoint &MousePos,
          bool &Handled);
        void __fastcall swinia_imgClick(TObject *Sender);
        void __fastcall krowa_imgClick(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall owca_imgClick(TObject *Sender);
        void __fastcall mpies1Click(TObject *Sender);
        void __fastcall WinTimer(TObject *Sender);
        //void __fastcall EasterEgg1Timer(TObject *Sender);
        //void __fastcall Timer3Timer(TObject *Sender);
        void __fastcall menuClick(TObject *Sender);
        void __fastcall saveClick(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall SwapTimer(TObject *Sender);
        void __fastcall kon_imgClick(TObject *Sender);
        void __fastcall Image1Click(TObject *Sender);
        void __fastcall krolik_imgClick(TObject *Sender);
        void __fastcall Image5Click(TObject *Sender);
        void __fastcall BUGSTimer(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
 