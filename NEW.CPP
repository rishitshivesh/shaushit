#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<stdlib.h>

class Menu
{
	 public:
	   void Drawbox(int l,int b,int x ,int y,char text[]);
	   void EnterID(int l,int b,int x ,int y, char id[80]);
	   void EnterPass(int l, int b, int x, int y, char pass[80]);
	   void Admin();
	   void Highlight(int l, int b,int x , int y , char a);
	    int page;
		int items;
       int currentitem;

       void Draw();
};


void Menu::PrintLogo()
{
	gotoxy(15,1);
	cout << char(201) << char(205) << char(187) << ' ' << char(201) << char(205) << char(187) << ' ' << char(201) << char(205) << char(205) << ' ' << char(201) << char(205) << char(187) << ' ' << char(203) << char(205) << char(187) << ' ' << char(201) << char(205) << char(205) << ' ';
	cout << char(201) << char(203) << char(187) << ' ' << char(201) << char(205) << char(187) << ' ' << char(201) << char(205) << char(205) << ' ' << char(205) << char(203) << char(205) << ' ' << char(201) << char(205) << char(205) << ' ' << char(201) << char(205) << char(187);
	gotoxy(15,2);
	cout << char(204) << char(205) << char(185) << ' ' << char(204) << char(203) << char(188) << ' ' << char(186) << "   " << char(204) << char(205) << char(185) << ' ' << char(186) << ' ' << char(186) << ' ' << char(204) << char(205) << char(205) << ' ';
	cout << char(186) << char(186) << char(186) << ' ' << char(204) << char(205) << char(185) << ' ' << char(200) << char(205) << char(187) << "  " << char(186) << "  " << char(204) << char(205) << char(205) << ' ' << char(204) << char(203) << char(188);
	gotoxy(15,3);
	cout << char(186) << ' ' << char(186) << ' ' << char(186) << char(200) << char(205) << ' ' << char(200) << char(205) << char(205) << ' ' << char(186) << ' ' << char(186) << ' ' << char(202) << char(205) << char(188) << ' ' << char(200) << char(205) << char(205) << ' ';
	cout << char(186) << ' ' << char(186) << ' ' << char(186) << ' ' << char(186) << ' ' << char(205) << char(205) << char(188) << "  " << char(186) << "  " << char(200) << char(205) << char(205) << ' ' << char(186) << char(200) << char(205);
}
void Menu::Drawbox(int l,int b,int x ,int y,char text[])
{
   textcolor(YELLOW);
   int n = y;
   int a = l-1;
   gotoxy(x,y);
   char w[70] = " ";
   char h[25] = " ";
   h[0] = char(179)	;
   for(int i = 0;i<l;i++)
   {
	w[i]=char(196);
	h[i+1] = ' ';
   }
   h[a] = char(179);
   cprintf(w);
   n++;
   for(int j = 0 ;j<b;j++)
   {
	gotoxy(x,n);
	cprintf(h);
	n++;
   }
   gotoxy(x,n);
   cprintf(w);
   gotoxy(x+2,y+(b%2));
   textcolor(WHITE);
   cprintf(text);
}
void Menu::Admin()
{
	char id[80], pass[80];
	EnterID(20,1,25,10,id);
	EnterPass(20,1,25,15,pass);
	gotoxy(25,20);
	cprintf(id);
	gotoxy(25,22);
	cprintf(pass);
}
void Menu::EnterID(int l,int b,int x ,int y, char id[80])
{
   _setcursortype(_SOLIDCURSOR);
   textcolor(YELLOW);
   int n = y;
   int a = l-1;
   gotoxy(x,y);
   char w[70] = " ";
   char h[25] = " ";
   h[0] = char(179)	;
   for(int i = 0;i<l;i++)
   {
	w[i]=char(196);
	h[i+1] = ' ';
   }
   h[a] = char(179);
   cprintf(w);
   n++;
   for(int j = 0 ;j<b;j++)
   {
	gotoxy(x,n);
	cprintf(h);
	n++;
   }
   gotoxy(x,n);
   cprintf(w);
   gotoxy(x+2,y+(b%2));
   textcolor(RED);
   char r;
   int k=0;
   do
   {
	r=getch();
	id[k]=r;
	cout<<r;
		k++;
   }while(int(r)!=13);
   id[k-1]='\0';
   cout<<'\b';
}
void Menu::EnterPass(int l,int b,int x ,int y, char pass[80])
{
   _setcursortype(_SOLIDCURSOR);
   textcolor(YELLOW);
   int n = y;
   int a = l-1;
   gotoxy(x,y);
   char w[70] = " ";
   char h[25] = " ";
   h[0] = char(179)	;
   for(int i = 0;i<l;i++)
   {
	w[i]=char(196);
	h[i+1] = ' ';
   }
   h[a] = char(179);
   cprintf(w);
   n++;
   for(int j = 0 ;j<b;j++)
   {
	gotoxy(x,n);
	cprintf(h);
	n++;
   }
   gotoxy(x,n);
   cprintf(w);
   gotoxy(x+2,y+(b%2));
   textcolor(RED);
   char r;
   int k=0;
   do
   {
	r=getch();
	pass[k]=r;
	if(int(r)!=13)
		cprintf("*");
	k++;
   }while(int(r)!=13);
   pass[k-1]='\0';
}

void Menu::Highlight(int l, int b,int x , int y , char a)
{
   int m = x,n=y;
   char w[70] = " ";
   for(int i = 0;i<l;i++)
	w[i] = a;
   textcolor(RED);
   gotoxy(m,n+b+1);
   cprintf(w);
   textcolor(WHITE);
}
/*void Drawmenu()
{
}*/
void main()
{
	clrscr();
	Menu a;
	a.PrintLogo();
	a.Admin();
	getch();
}
