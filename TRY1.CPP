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
	   void Highlight(int l, int b,int x , int y , char a);
	    int page; 
		int items;
       int currentitem;
	   void Menu(int page,int items);
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
void Drawmenu()
{
	 
void main()
{
 randomize();
   clrscr();
   _setcursortype(_NOCURSOR);
   char a,b;
   Menu start(0,3);
   
   
   int totalitems = 5;
   Drawmenu();
   scroll(currentitem);
   do{
	a=getch();
	switch(tolower(a))
	{
		case 0:
		{
		b = getch();
		switch(b)
		{
		case 80:
		{
		if(currentitem<totalitems)
		{
		     currentitem++;
		     scroll(currentitem);
		}
		else if(currentitem ==totalitems)
		{
		     currentitem = 0;
		     scroll(currentitem);
		}
		}
		  break;
	      case 72:
	       {
		if(currentitem>0)
		{
		     currentitem--;
		     scroll(currentitem);
		}
		else if(currentitem == 0)
		{
		     currentitem = totalitems;
		     scroll(currentitem);
		}
	       }
		break;
	 case 13:
	     select(currentitem);
	 break;
	}
      }
     break;
     case 13:
     select(currentitem);
     break;
     case 'x':
     return;
    }
   }while(a!='x');
}