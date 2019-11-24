#include <conio.h>
#include <fstream.h>
#include <string.h>
#include <stdio.h>
#include <dos.h>
#include <stdlib.h>
#include <ctype.h>
#include <iomanip.h>


//*************************MOVIE CLASS*******************************
class MOVIE
{
	//float Price;
	char MovieName[15];
	int Price,Timing,Screen;
	int Booking[5][5];
	int avail;
	public:

	MOVIE();
	void InputData();
	char* rMovieName();
	int rPrice();
	int rTiming();
	int rAvail();
	void ChangeDetails();
	void Display();
	void Book(int a, int b);
	void DisplayChart();
};
MOVIE::MOVIE()
{
	strcpy(MovieName,"Null");
	Price=0;
	Timing=0000;
	Screen=0;
	for(int i=0;i<5;i++)
	for(int j=0;j<5;j++)
	Booking[i][j]=0;
	avail=25;
}
void MOVIE::InputData()
{
	gotoxy(25,1);
	cout<<"ENTER NEW MOVIE\n";
		cout<<"\nEnter The Movie Name: ";
	gets(MovieName);
	cout<<"\n\nEnter The Timings(in hrs):  ";
	cin>>Timing;
	cout<<"\n\nEnter the Price: ";
	cin>>Price;
	cout<<"\n\nEnter the Screen: ";
	cin>>Screen;
	cout<<"\n\n\nMovie "<<MovieName<<" Created..";
}

char* MOVIE::rMovieName()
{
	return MovieName;
}
int MOVIE::rPrice()
{
	return Price;
}
int MOVIE::rTiming()
{
	return Timing;
}
int MOVIE::rAvail()
{
	return avail;
}
void MOVIE::ChangeDetails()
{
	int ch;
	do
	{
	  clrscr();
	  cout<<"1. Change Name"<<endl;
	  cout<<"2. Change Timing"<<endl;
	  cout<<"3. Change Price"<<endl;
	  cout<<"4. Change Screen"<<endl;
	  cout<<"4. Quit "<<endl;
	  cout<<"Enter your choice: "<<endl;
	  cin>>ch;
	  switch(ch)
	  {
		case 1: cout<<"Enter new Name: ";
			gets(MovieName);
				break;
		case 2: cout<<"Enter new timing: ";
			cin>>Timing;
				break;
		case 3: cout<<"Enter new Price: ";
			cin>>Price;
				break;
		case 4: cout<<"Enter new Screen: ";
			cin>>Screen;
				break;
		case 5: cout<<"Quitting";
	  }
	}while(ch!=5);
}
void MOVIE::Display()
{
	cout<<"Movie Name: "<<MovieName<<endl;
	cout<<"Price: "<<Price<<endl;
	cout<<"Timing: "<<Timing<<endl;
	cout<<"Number of tickets availeble: "<<avail<<endl;
}
void MOVIE::Book(int a,int b)
{
    Booking[b][a]=1;
    avail--;
}
void MOVIE::DisplayChart()
{
	cout<<"0: Booking status open   1: Booking status closed"<<endl;
	cout<<"     1    2    3    4    5"<<endl<<endl;
	for(int i=0;i<5;i++)
	{
	    cout<<i+1<<"    ";
	    for(int j=0;j<5;j++)
	    {
		if(Booking[i][j]==0)
		{
			textcolor(GREEN);
			cprintf("%c",178);
			cout<<"    ";
			textcolor(WHITE);
		}
		else
		{
			textcolor(RED);
			cprintf("%c",178);
			cout<<"    ";
			textcolor(WHITE);
		}
	    }
	    cout<<endl<<endl;
	}
}

//***************************************CUSTOMER CLASS***************************************
class CUSTOMER
{
	char Password[50];
	char Username[50];
	char Name[50], Email[25];
	char Phone[10];
	public:
	//void inputdata(char *name, char *username, char *password, char *email, char *phone);
	void InputData();
	int CheckPassword(char *password);
	char* rUsername();
	char* rName();
	char* rEmail();
	char* rPhone();
	void ChangeDetails();
	void Display();
};
void CUSTOMER::InputData()
{
	cout<<"Enter username: ";
	gets(Username);
	cout<<"Enter Name: ";
	gets(Name);
	cout<<"Enter Email: ";
	gets(Email);
	cout<<"Enter Phone number: ";
	gets(Phone);
	cout<<"Enter Password: ";
	gets(Password);
}
char* CUSTOMER::rUsername()
{
	return Username;
}
char* CUSTOMER::rName()
{
	return Name;
}
char* CUSTOMER::rEmail()
{
	return Email;
}
char* CUSTOMER::rPhone()
{
	return Phone;
}

int CUSTOMER::CheckPassword(char *password)
{
	if (strcmpi(Password, password) == 0)
		return 1;
	else
		return 0;
}
void CUSTOMER::ChangeDetails()
{
	int ch;
	do
	{
	  clrscr();
	  cout<<"1. Change Password"<<endl;
	  cout<<"2. Change Name"<<endl;
	  cout<<"3. Change Email"<<endl;
	  cout<<"4. Change Phone Number"<<endl;
	  cout<<"5. Quit "<<endl;
	  cout<<"Enter your choice: "<<endl;
	  cin>>ch;
	  switch(ch)
	  {
		case 1: cout<<"Enter new Password: ";
			gets(Password);
				break;
		case 2: cout<<"Enter new Name: ";
			gets(Name);
				break;
		case 3: cout<<"Enter new Email: ";
			gets(Email);
				break;
		case 4: cout<<"Enter new Phone Number: ";
			gets(Phone);
				break;
		case 5: cout<<"Quitting";
	  }
	}while(ch!=5);
}
void CUSTOMER::Display()
{
	cout<<"Username: "<<Username<<endl;
	cout<<"Name: "<<Name<<endl;
	cout<<"Email: "<<Email<<endl;
	cout<<"Phone: "<<Phone<<endl;
	getch();
}

//***************************************BOOKING CLASS***************************************
class BOOKING
{
	int TransId, Seats, Timing, Status,Price;
	char Username[50], MovieName[50];
	public:
	BOOKING();
	void InputDetails(char [],char [], int,int,int,int);
	int RTransId();
	char* RUsername();
	void Display();
	int RStatus();
	void ChangeStatus();
};
BOOKING::BOOKING()
{
	strcpy(Username,"");
	strcpy(MovieName,"NA");
	TransId=0;
	Seats=0;
	Timing=0000;
	Price=0;
	Status=0;
}
void BOOKING::InputDetails(char user[],char movie[],int tid,int seat,int time,int price)
{
	strcpy(Username,user);
	strcpy(MovieName,movie);
	TransId=tid;
	Seats=seat;
	Timing=time;
	Price=price;
	Status=1;
}

char* BOOKING::RUsername()
{
	return Username;
}
int BOOKING::RTransId()
{
	return TransId;
}
int BOOKING::RStatus()
{
	return Status;
}
void BOOKING::ChangeStatus()
{
	Status=0;
	int NewPrice=Price-Price*0.25;
	cout<<"Refund amount: "<<NewPrice<<endl;
	cout<<"Refund link will be sent to your registered mobile number"<<endl;
}
void BOOKING::Display()
{
	cout<<"Tansaction ID: "<<TransId<<endl;
	cout<<"Username: "<<Username<<endl;
	cout<<"Movie Name: "<<MovieName<<endl;
	cout<<"Time: "<<Timing<<endl;
	cout<<"Price: "<<Price<<endl;
	if(Status)
		cout<<"Status: Booked"<<endl;
	else
		cout<<"Ststus: Cancelled"<<endl;
	getch();
}

//***************************************Function Prototype***************************************

void Admin();
void Customer();
void CreateCustomer();
int CheckPass(char Pass[]);
void AddMovie();
void ChangeMovie();
void ChangeCustomer();
int CustomerPosition(char cuser[]);
int MoviePosition(char movie[]);
void BookTicket(char user[]);
void DeleteCustomer(char user[]);
void DeleteMovie(char movie[]);
void DisplayAllMovie();
void DisplayAllCustomer();
void DisplayTransactions();
int CreateTransId();

void main()
{
	clrscr();
	int ch;
	do
	{
	  clrscr();
	  gotoxy(30,1);
	  textcolor(LIGHTCYAN);
	  cprintf("Welcome To MovieTimem");
	  textcolor(WHITE);
	  cout<<"\n\n1. Admin"<<endl;
	  cout<<"2. Customer Login"<<endl;
	  cout<<"3. Customer Signup"<<endl;
	  cout<<"4. Quit"<<endl;
	  cout<<"Enter your choice: ";
	  cin>>ch;
	  switch(ch)
	  {
		  case 1: Admin(); break;
		  case 2: Customer(); break;
		  case 3: CreateCustomer(); break;
		  case 4: cout<<"\nQuitting...";
	  }
	}while(ch!=4);
	getch();
}

void Admin()
{
	clrscr();
	char pass[20];
	fstream fil;
	fil.open("Admin.txt",ios::in);
	fil>>pass;
	if(strcmpi(pass,"")==0)
	{
		cout<<"Create new password for admin: ";
		cin>>pass;
		fil.close();
		fil.open("Admin.txt",ios::out);
		fil<<pass;
	}
	fil.close();
	clrscr();
	if(CheckPass(pass))
	{
	int ch;
	do
	{
		clrscr();
		gotoxy(28,1);
		textcolor(LIGHTRED);
		cprintf("ADMIN HOME");
		textcolor(WHITE);
		cout<<"\n\n1. Add Movie details"<<endl;
		cout<<"2. Delete or Change Movie Details"<<endl;
		cout<<"3. Change Admin Password"<<endl;
		cout<<"4. Delete or Change Customer Details"<<endl;
		cout<<"5. Display all customers"<<endl;
		cout<<"6. Display all movies"<<endl;
		cout<<"7. Display Transactions"<<endl;
		cout<<"8. Delete all movies"<<endl;
		cout<<"9. Delete all customers"<<endl;
		cout<<"10. Delete all transactions"<<endl;
		cout<<"11. Quit to main menu"<<endl;
		cout<<"\nEnter your choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1: AddMovie(); break;
			case 2: ChangeMovie(); break;
			case 3: cout<<"Enter new Password: ";
					cin>>pass;
					remove("Admin.txt");
					fil.open("Admin.txt",ios::out);
					fil<<pass;
					fil.close();
					break;
			case 4: ChangeCustomer(); break;
			case 5: DisplayAllCustomer();
					break;
			case 6: DisplayAllMovie();
					break;
			case 7: DisplayTransactions();
					break;
			case 8: remove("MOVIE.DAT");
					cout<<"All Movies Deleted!"<<endl;
					getch();
					break;
			case 9: remove("CUSTOMER.DAT");
					cout<<"All Customers deleted!"<<endl;
					getch();
					break;
			case 10: remove("BOOKING.DAT");
				 cout<<"All bookings deleted!"<<endl;
				 getch();
				 break;
			case 11: cout<<"Quitting"<<endl;
		}
	}while(ch!=11);
	}
	else
		cout<<"Incorrect Password!"<<endl;
	getch();
}

void Customer()
{
	clrscr();
	gotoxy(27,1);
	textcolor(LIGHTMAGENTA);
	cprintf("Customer Login");
	textcolor(WHITE);
	CUSTOMER C;
	char user[50],pass[20];
	cout<<"\n\nEnter Username: ";
	gets(user);
	int pos=CustomerPosition(user);
	if(pos)
	{
	fstream fil,fil1;
	fil.open("CUSTOMER.DAT",ios::in|ios::out|ios::binary);
	fil.seekg((pos-1)*sizeof(C),ios::beg);
	fil.read((char *)&C,sizeof(C));
	cout<<"Enter Customer Password: ";
	gets(pass);
	int ch;
	if(C.CheckPassword(pass))
	{
		do
		{
		  clrscr();
		  gotoxy(27,1);
		  textcolor(GREEN);
		  cprintf("CUSTOMER HOME");
		  textcolor(WHITE);
		  cout<<"\n\n1. Book a ticket"<<endl;
		  cout<<"2. View your transactions"<<endl;
		  cout<<"3. Change your details"<<endl;
		  cout<<"4. Cancel any Booking"<<endl;
		  cout<<"5. Quit to Main menu"<<endl;
		  cout<<"Enter your choice: ";
		  cin>>ch;
		  switch(ch)
		  {
			case 1: BookTicket(user); break;
			case 2: int count=1;
					BOOKING B;
					fil1.open("BOOKING.DAT",ios::binary|ios::in);
					while(fil1.read((char *)&B,sizeof(B)))
					{
						if(strcmpi(B.RUsername(),user)==0)
						{
							cout<<"Transaction No. "<<count++<<endl;
							B.Display();
						}
					}
					fil1.close();
					break;
			case 3: C.ChangeDetails();
					fil.seekg((pos-1)*sizeof(C),ios::beg);
					fil.write((char *)&C,sizeof(C));
					break;
			case 4: int tid;
				cout<<"\n\nEnter the transaction id to cancel: ";
					cin>>tid;
					int found=0;
					fil1.open("BOOKING.DAT",ios::binary|ios::in|ios::out);
					while(!found&&fil1.read((char *)&B,sizeof(B)))
					{
						if(B.RTransId()==tid)
						{
							found++;
							cout<<"Booking with Transaction Id "<<B.RTransId()<<" cancelled"<<endl;
							B.ChangeStatus();
							fil1.seekg(fil1.tellg()-sizeof(B),ios::beg);
							fil1.write((char *)&B,sizeof(B));
							getch();
						}
					}
					fil1.close();
					break;
			case 5: cout<<"Quitting to Main menu";
		  }
		}while(ch!=5);
	}
	else
		cout<<"Wrong Password!";
	  fil.close();
	}
	else
	    cout<<"Customer Not present!"<<endl;
	getch();
}

void CreateCustomer()
{
	clrscr();
	fstream fil;
	fil.open("CUSTOMER.DAT",ios::app|ios::binary);
	CUSTOMER C;
	cout<<"Enter Customer Data: "<<endl;
	C.InputData();
	fil.write((char*)&C,sizeof(C));
	fil.close();
	getch();
}

int CheckPass(char Password[20])
{
  char Pass[20];
  char ch;
  int i=0;
  cout<<"Password: ";
  do
  {
    ch=getch();
    cout<<'*';
    Pass[i++]=ch;
  }while(ch!=13);
  Pass[i-1]='\0';
  if(strcmp(Password,Pass)==0)
    return 1;
  else
    return 0;
}

void DisplayTransactions()
{
	clrscr();
	int ch;
	fstream fil;
	BOOKING B;
	fil.open("BOOKING.DAT",ios::in,ios::binary);
	cout<<"1. Display all transactions of the company"<<endl;
	cout<<"2. Display all transactions of a customer"<<endl;
	cout<<"3. Display a particular transaction"<<endl;
	cout<<"4. Quit to admin menu"<<endl;
	cout<<"Enter your choice: ";
	cin>>ch;
	int count;
    switch(ch)
	{
		case 1: count=1;
			while(fil.read((char *)&B,sizeof(B)))
			{
					cout<<"Transaction No. "<<count++<<endl;
					B.Display();
				}
				break;
		case 2: char user[50];
			int found=0;
			count=1;
			cout<<"Enter the username: ";
				cin>>user;
				while(fil.read((char *)&B,sizeof(B)))
				{
					if(strcmpi(B.RUsername(),user)==0)
					{
						found++;
						cout<<"Transaction No. "<<count++<<endl;
						B.Display();
					}
				}
				if(!found)
				   cout<<"No transactions found"<<endl;
				getch();
				break;
		case 3: int tid;
				cout<<"Enter the transaction id: ";
				cin>>tid;
				while(fil.read((char *)&B,sizeof(B)))
			{
					if(B.RTransId()==tid)
						B.Display();
				}
				break;
		case 4: cout<<"Quitting to Admin"<<endl;
	}
}

void AddMovie()
{
	clrscr();
	fstream fil;
	MOVIE M;
	fil.open("MOVIE.DAT",ios::binary|ios::app);
	char ch;
	do
	{
		clrscr();
		M.InputData();
		fil.write((char *)&M,sizeof(M));
		cout<<"More Movie (y/n)? - ";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	fil.close();
}
void DisplayAllCustomer()
{
	fstream cus;
	CUSTOMER C;
	cus.open("CUSTOMER.DAT",ios::in|ios::binary);
	while(cus.read((char*)&C,sizeof(C)))
	{
	  C.Display();
	  getch();
	}
	cus.close();
}

void DisplayAllMovie()
{
    fstream mov;
	MOVIE M;
	mov.open("MOVIE.DAT",ios::in|ios::binary);
	while(mov.read((char*)&M,sizeof(M)))
	{
	  M.Display();
	  getch();
	}
	mov.close();
}

void ChangeMovie()
{
	clrscr();
	MOVIE M;
	fstream fil;
	fil.open("MOVIE.DAT",ios::binary|ios::out|ios::in);
	char Name[50];
	cout<<"Enter Movie Name: ";
	gets(Name);
	int ch;
	cout<<"1. Delete Movie"<<endl;
	cout<<"2. Edit Details"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1: DeleteMovie(Name); break;
		case 2: int n=MoviePosition(Name);
			fil.seekp((n-1)*sizeof(M),ios::beg);
				fil.read((char *)&M,sizeof(M));
				M.ChangeDetails();
			fil.seekp((n-1)*sizeof(M),ios::beg);
				fil.write((char *)&M,sizeof(M));
				break;
		default:cout<<"Wrong input";
	}
	fil.close();
	getch();
}

void DeleteMovie(char *Name)
{
	MOVIE M;
	fstream fil1,fil2;
	fil1.open("MOVIE.DAT",ios::in|ios::binary);
	fil2.open("TEMP.DAT",ios::out|ios::binary);
	while(fil1.read((char *)&M,sizeof(M)))
		if(strcmpi(M.rMovieName(),Name)!=0)
		   fil2.write((char *)&M,sizeof(M));
	fil1.close();
	fil2.close();
	remove("MOVIE.DAT");
	rename("TEMP.DAT","MOVIE.DAT");
	cout<<"Movie "<<Name<<" deleted!"<<endl;
}

int MoviePosition(char name[])
{
	fstream fil;
	MOVIE M;
	fil.open("MOVIE.DAT",ios::binary|ios::in);
	int count=0,f=0;
	while(!f&&fil.read((char *)&M,sizeof(M)))
		if(strcmpi(M.rMovieName(),name)==0)
		{
			count=fil.tellg()/sizeof(M);
			f=1;
		}
	fil.close();
	return count;
}

void ChangeCustomer()
{
    clrscr();
	CUSTOMER C;
	fstream fil;
	fil.open("CUSTOMER.DAT",ios::binary|ios::out|ios::in);
	char User[50];
	cout<<"Enter Username: ";
	gets(User);
	int ch;
	cout<<"1. Delete Customer"<<endl;
	cout<<"2. Edit Details"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1: DeleteCustomer(User); break;
		case 2: int n=CustomerPosition(User);
			fil.seekp((n-1)*sizeof(C),ios::beg);
				fil.read((char *)&C,sizeof(C));
				C.ChangeDetails();
			fil.seekp((n-1)*sizeof(C),ios::beg);
				fil.write((char *)&C,sizeof(C));
				break;
		default:cout<<"Wrong input";
	}
	fil.close();
	getch();
}

void DeleteCustomer(char *user)
{

	CUSTOMER C;
	fstream fil1,fil2;
	fil1.open("CUSTOMER.DAT",ios::in|ios::binary);
	fil2.open("TEMP.DAT",ios::out|ios::binary);
	while(fil1.read((char *)&C,sizeof(C)))
		if(strcmpi(C.rUsername(),user)!=0)
		   fil2.write((char *)&C,sizeof(C));
	fil1.close();
	fil2.close();
	remove("CUSTOMER.DAT");
	rename("TEMP.DAT","CUSTOMER.DAT");
	cout<<"Customer user "<<user<<" deleted!"<<endl;
}

int CustomerPosition(char name[])
{
	fstream fil;
	CUSTOMER C;
	fil.open("CUSTOMER.DAT",ios::binary|ios::in);
	int count=0,f=0;
	while(!f&&fil.read((char *)&C,sizeof(C)))
		if(strcmpi(C.rUsername(),name)==0)
		{
			count=(fil.tellg()/sizeof(C));
			f=1;
		}
	fil.close();
	return count;
}

void BookTicket(char user[])
{
	clrscr();
	MOVIE M;
	fstream fil,fil1;
	fil.open("MOVIE.DAT",ios::binary|ios::in|ios::out);
	gotoxy(25,1);
	cout<<"Welcome "<<user<<endl;
	//cout<<"   \tMovie Name"<<"\tTiming"<<"\t\tPrice"<<"No. of Tickets Available"<<endl;
	cout<<setw(25)<<"Movie Name"<<setw(10)<<"Timing"<<setw(10)<<"Price"<<setw(25)<<"Seats Available"<<endl;
	while(fil.read((char*)&M,sizeof(M)))
	{
		if(M.rAvail()!=0)
		{
		cout<<setw(25)<<M.rMovieName();
		cout<<setw(10)<<M.rTiming();
		cout<<setw(10)<<M.rPrice();
		cout<<setw(25)<<M.rAvail();
		cout<<endl;
		}
	}
	cout<<"Choose your Movie option by typing the movie name: ";
	char name[50];
	gets(name);
    int n=MoviePosition(name);
	if(n)
	{
	    fil.seekg((n-1)*sizeof(M),ios::beg);
	    fil.read((char*)&M,sizeof(M));
		cout<<"Enter the number of tickets: ";
		int nt,a,b;
		cin>>nt;
		if(nt<M.rAvail())
		{
		  for(int i=0;i<nt;i++)
		  {
		    clrscr();
			cout<<"Ticket No. "<<i+1<<endl;
			M.DisplayChart();
			cout<<"Enter Row number: ";
			cin>>a;
			cout<<"Enter Column Number: ";
			cin>>b;
			M.Book(a-1,b-1);
		   }
		   clrscr();
		   cout<<"Final Seats Attoted: "<<endl;
		   M.DisplayChart();
		   cout<<"\n\nPrice: "<<(M.rPrice()*nt)<<endl;
		   getch();
		   fil.seekg((n-1)*sizeof(M),ios::beg);
		   fil.write((char*)&M,sizeof(M));
		   fil1.open("BOOKING.DAT",ios::binary|ios::app);
		   BOOKING B;
		   B.InputDetails(user,M.rMovieName(),CreateTransId(),nt,M.rTiming(),M.rPrice()*nt);
		   fil1.write((char *)&B,sizeof(B));
		   fil1.close();
		}
		else
		    cout<<"These many tickets are not available!"<<endl;
	}
	else
	    cout<<"Movie Not Present";
	fil.close();

}

int CreateTransId()
{
	BOOKING B;
	fstream fil;
	fil.open("BOOKING.DAT",ios::binary|ios::in);
	fil.seekg(0,ios::end);
	int n=fil.tellg();
	n=n/sizeof(B);
	if(n==0)
	{
	  fil.close();
	  return 12357;
	}
	else
	{
		fil.seekg(-1*sizeof(B),ios::end);
		fil.read((char *)&B,sizeof(B));
		n=B.RTransId();
		fil.close();
		return ++n;
	}
}
