#include<iostream.h>
#include<conio.h>
void printlogo1()
{
	gotoxy(15,1);
	cout<<char(254)<<char(254)<<"   "<<char(254)<<char(254)<<"                  "<<char(254)<<char(254)<<char(254)<<char(254)<<char(254);
	gotoxy(15,2);
	cout<<char(254)<<" "<<char(254)<<" "<<char(254)<<" "<<char(254)<<"                    "<<char(254);
	gotoxy(15,3);
	cout<<char(254)<<"  "<<char(254)<<"  "<<char(254)<<" "<<char(254)<<char(254)<<char(254)<<" "<<char(254)<<"   "<<char(254)<<" ";
	cout<<char(254)<<" "<<char(254)<<char(254)<<char(254)<<"    "<<char(254)<<"  "<<char(254)<<" "<<char(254)<<char(254)<<" "<<char(254)<<char(254)<<" "<<char(254)<<char(254)<<char(254);
	gotoxy(15,4);
	cout<<char(254)<<"     "<<char(254)<<" "<<char(254)<<" "<<char(254)<<"  "<<char(254)<<" "<<char(254)<<"  "<<char(254)<<" "<<char(254)<<" "<<char(254)<<"    "<<char(254)<<"  "<<char(254)<<" ";
	cout<<char(254)<<" "<<char(254)<<" "<<char(254)<<" "<<char(254)<<" "<<char(254);
	gotoxy(15,5);
	cout<<char(254)<<"     "<<char(254)<<" "<<char(254)<<" "<<char(254)<<"  "<<char(254)<<" "<<char(254)<<"  "<<char(254)<<" "<<char(254)<<"      "<<char(254)<<"  "<<char(254)<<" "<<char(254)<<"   "<<char(254)<<" "<<char(254);
	gotoxy(15,6);
	cout<<char(254)<<"     "<<char(254)<<" "<<char(254)<<char(254)<<char(254)<<"   "<<char(254)<<"   "<<char(254)<<" "<<char(254)<<char(254)<<char(254)<<"    "<<char(254)<<"  "<<char(254)<<" " <<char(254)<<"   "<<char(254)<<" "<<char(254)<<char(254)<<char(254);
}
void printlogo2()
{
	gotoxy(15,7);
	cout<<char(177)<<char(177)<<"   "<<char(177)<<char(177)<<"                  "<<char(177)<<char(177)<<char(177)<<char(177)<<char(177);
	gotoxy(15,8);
	cout<<char(177)<<" "<<char(177)<<" "<<char(177)<<" "<<char(177)<<"                    "<<char(177);
	gotoxy(15,9);
	cout<<char(177)<<"  "<<char(177)<<"  "<<char(177)<<" "<<char(177)<<char(177)<<char(177)<<" "<<char(177)<<"   "<<char(177)<<" ";
	cout<<char(177)<<" "<<char(177)<<char(177)<<char(177)<<"    "<<char(177)<<"  "<<char(177)<<" "<<char(177)<<char(177)<<" "<<char(177)<<char(177)<<" "<<char(177)<<char(177)<<char(177);
	gotoxy(15,10);
	cout<<char(177)<<"     "<<char(177)<<" "<<char(177)<<" "<<char(177)<<"  "<<char(177)<<" "<<char(177)<<"  "<<char(177)<<" "<<char(177)<<" "<<char(177)<<"    "<<char(177)<<"  "<<char(177)<<" ";
	cout<<char(177)<<" "<<char(177)<<" "<<char(177)<<" "<<char(177)<<" "<<char(177);
	gotoxy(15,11);
	cout<<char(177)<<"     "<<char(177)<<" "<<char(177)<<" "<<char(177)<<"  "<<char(177)<<" "<<char(177)<<"  "<<char(177)<<" "<<char(177)<<"      "<<char(177)<<"  "<<char(177)<<" "<<char(177)<<"   "<<char(177)<<" "<<char(177);
	gotoxy(15,12);
	cout<<char(177)<<"     "<<char(177)<<" "<<char(177)<<char(177)<<char(177)<<"   "<<char(177)<<"   "<<char(177)<<" "<<char(177)<<char(177)<<char(177)<<"    "<<char(177)<<"  "<<char(177)<<" " <<char(177)<<"   "<<char(177)<<" "<<char(177)<<char(177)<<char(177);
}
void printlogo3()
{
	gotoxy(15,13);
	cout<<char(219)<<char(219)<<"   "<<char(219)<<char(219)<<"                  "<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
	gotoxy(15,14);
	cout<<char(219)<<" "<<char(219)<<" "<<char(219)<<" "<<char(219)<<"                    "<<char(219);
	gotoxy(15,15);
	cout<<char(219)<<"  "<<char(219)<<"  "<<char(219)<<" "<<char(219)<<char(219)<<char(219)<<" "<<char(219)<<"   "<<char(219)<<" ";
	cout<<char(219)<<" "<<char(219)<<char(219)<<char(219)<<"    "<<char(219)<<"  "<<char(219)<<" "<<char(219)<<char(219)<<" "<<char(219)<<char(219)<<" "<<char(219)<<char(219)<<char(219);
	gotoxy(15,16);
	cout<<char(219)<<"     "<<char(219)<<" "<<char(219)<<" "<<char(219)<<"  "<<char(219)<<" "<<char(219)<<"  "<<char(219)<<" "<<char(219)<<" "<<char(219)<<"    "<<char(219)<<"  "<<char(219)<<" ";
	cout<<char(219)<<" "<<char(219)<<" "<<char(219)<<" "<<char(219)<<" "<<char(219);
	gotoxy(15,17);
	cout<<char(219)<<"     "<<char(219)<<" "<<char(219)<<" "<<char(219)<<"  "<<char(219)<<" "<<char(219)<<"  "<<char(219)<<" "<<char(219)<<"      "<<char(219)<<"  "<<char(219)<<" "<<char(219)<<"   "<<char(219)<<" "<<char(219);
	gotoxy(15,18);
	cout<<char(219)<<"     "<<char(219)<<" "<<char(219)<<char(219)<<char(219)<<"   "<<char(219)<<"   "<<char(219)<<" "<<char(219)<<char(219)<<char(219)<<"    "<<char(219)<<"  "<<char(219)<<" " <<char(219)<<"   "<<char(219)<<" "<<char(219)<<char(219)<<char(219);
}
void  main()
{
	clrscr();
	printlogo1();
	printlogo2();
	printlogo3();
	getch();
}