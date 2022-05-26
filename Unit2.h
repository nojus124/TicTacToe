//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TTicTacToe : public TForm
{
__published:	// IDE-managed Components
	TButton *Mygtukas1;
	TButton *Mygtukas2;
	TButton *Mygtukas3;
	TButton *Mygtukas4;
	TButton *Mygtukas5;
	TButton *Mygtukas6;
	TButton *Mygtukas7;
	TButton *Mygtukas8;
	TButton *Mygtukas9;
	TButton *Button1;
	TButton *Button2;
	TLabel *Label1;
	TButton *Button3;
	void __fastcall Mygtukas1Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TTicTacToe(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TTicTacToe *TicTacToe;
//---------------------------------------------------------------------------
#endif
