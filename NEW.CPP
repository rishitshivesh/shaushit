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
	   void EnterID(int l,int b,int x ,int y);
	   void EnterPass(int l, int b, int x, int y);
	   void Admin();
	   void Highlight(int l, int b,int x , int y , char a);
	    int page;
		int items;
       int currentitem;

       void Draw();
};



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
	EnterID(20,1,2,2);
	EnterPass(20,1,2,2);
}
void Menu::EnterID(int l,int b,int x ,int y)
{
   char z[80];
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
   do
   {
	int k=0;
	r=getch();
	z[k]=r;
	cprintf(z);
	k++;
   }while(char(r)!=13);
   EnterPass(20,1,2,2);
}
void Menu::EnterPass(int l,int b,int x ,int y)
{
   y+=5;
   char z[80];
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
   do
   {
	int k=0;
	r=getch();
	z[k]=r;
	if(int(r)!=13);
		cprintf("*");
	k++;
   }while(int(r)!=13);
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
};
void admin()
{

}*/
void main()
{
	clrscr();
	Menu a;
	a.Admin();
	getch();
}