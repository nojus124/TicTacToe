//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TTicTacToe *TicTacToe;
int eile = 1;
//---------------------------------------------------------------------------
__fastcall TTicTacToe::TTicTacToe(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TTicTacToe::Mygtukas1Click(TObject *Sender)
{
		TButton* b = ((TButton*)Sender);
		AnsiString eilesnumeris;
		eilesnumeris = (eile % 2 == 0)? "X" : "O";
	if(b->Caption == "")
	{
		if(eile % 2 == 0)
		{
			b->Caption = "X";
		}
		else
		{
			b->Caption = "O";
		}
	}
	if(Mygtukas1->Caption == "X" && Mygtukas2->Caption == "X" && Mygtukas3->Caption == "X")
		ShowMessage("Laimejo: " + eilesnumeris);
	else if(Mygtukas4->Caption == "X" && Mygtukas5->Caption == "X" && Mygtukas6->Caption == "X")
		ShowMessage("Laimejo: " + eilesnumeris);
	else if(Mygtukas7->Caption == "X" && Mygtukas8->Caption == "X" && Mygtukas9->Caption == "X")
		ShowMessage("Laimejo: " + eilesnumeris);
	else if(Mygtukas1->Caption == "X" && Mygtukas5->Caption == "X" && Mygtukas9->Caption == "X")
		ShowMessage("Laimejo: " + eilesnumeris);
	else if(Mygtukas3->Caption == "X" && Mygtukas5->Caption == "X" && Mygtukas7->Caption == "X")
		ShowMessage("Laimejo: " + eilesnumeris);
	else if(Mygtukas1->Caption == "X" && Mygtukas4->Caption == "X" && Mygtukas7->Caption == "X")
		ShowMessage("Laimejo: " + eilesnumeris);
	else if(Mygtukas2->Caption == "X" && Mygtukas5->Caption == "X" && Mygtukas8->Caption == "X")
		ShowMessage("Laimejo: " + eilesnumeris);
	else if(Mygtukas3->Caption == "X" && Mygtukas6->Caption == "X" && Mygtukas9->Caption == "X")
		ShowMessage("Laimejo: " + eilesnumeris);
	else if(Mygtukas1->Caption == "O" && Mygtukas2->Caption == "O" && Mygtukas3->Caption == "O")
		ShowMessage("Laimejo: " + eilesnumeris);
	else if(Mygtukas4->Caption == "O" && Mygtukas5->Caption == "O" && Mygtukas6->Caption == "O")
		ShowMessage("Laimejo: " + eilesnumeris);
	else if(Mygtukas7->Caption == "O" && Mygtukas8->Caption == "O" && Mygtukas9->Caption == "O")
		ShowMessage("Laimejo: " + eilesnumeris);
	else if(Mygtukas1->Caption == "O" && Mygtukas5->Caption == "O" && Mygtukas9->Caption == "O")
		ShowMessage("Laimejo: " + eilesnumeris);
	else if(Mygtukas3->Caption == "O" && Mygtukas5->Caption == "O" && Mygtukas7->Caption == "O")
		ShowMessage("Laimejo: " + eilesnumeris);
	else if(Mygtukas1->Caption == "O" && Mygtukas4->Caption == "O" && Mygtukas7->Caption == "O")
		ShowMessage("Laimejo: " + eilesnumeris);
	else if(Mygtukas2->Caption == "O" && Mygtukas5->Caption == "O" && Mygtukas8->Caption == "O")
		ShowMessage("Laimejo: " + eilesnumeris);
	else if(Mygtukas3->Caption == "O" && Mygtukas6->Caption == "O" && Mygtukas9->Caption == "O")
		ShowMessage("Laimejo: " + eilesnumeris);
	else if(Mygtukas1->Caption != "" && Mygtukas2->Caption != "" && Mygtukas3->Caption != "" && Mygtukas4->Caption != "" && Mygtukas5->Caption != "" && Mygtukas6->Caption != "" && Mygtukas7->Caption != "" && Mygtukas8->Caption != "" && Mygtukas9->Caption != "")
		ShowMessage("Lygiosios");

	eile++;

}
//---------------------------------------------------------------------------
void __fastcall TTicTacToe::Button1Click(TObject *Sender)
{
		TButton* b = ((TButton*)Sender);
		if(Mygtukas1->Caption != "" || Mygtukas2->Caption != ""	|| Mygtukas3->Caption != "" || Mygtukas4->Caption != "" || Mygtukas5->Caption != "" || Mygtukas6->Caption != "" || Mygtukas7->Caption != "" || Mygtukas8->Caption != "" || Mygtukas9->Caption != "")
		{
			ShowMessage("Jau yra pradetas zaidimas.");
		}
		else
		{
		if(b->Caption == "X")
			eile = 2;
		else
			eile = 1;
		}

}
//---------------------------------------------------------------------------
void __fastcall TTicTacToe::Button3Click(TObject *Sender)
{
	Mygtukas1->Caption = "";
	Mygtukas2->Caption = "";
	Mygtukas3->Caption = "";
	Mygtukas4->Caption = "";
	Mygtukas5->Caption = "";
	Mygtukas6->Caption = "";
	Mygtukas7->Caption = "";
	Mygtukas8->Caption = "";
	Mygtukas9->Caption = "";
}
//---------------------------------------------------------------------------
