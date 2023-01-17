#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<process.h>
#include<fstream.h>
#include<stdio.h>
//void custport()
class car
{
 public:
 int model;
 char type[20],var[20],engine[50];
 int seatcap,hp,cc,grdclr,whlsz,mil,top_speed,fuel_cap,frange,trange;
 float weight;
 void modadd();
 void modifymod();
 void viewmod();
 int getmod()
 {
  return model;
 }
}c1;

void ser_book()
{
 char book_name[20],v_model[15],v_no[15],date[15];
 float kms;
 ofstream f1("SERVICE_BOOKING.TXT",ios::out|ios::app|ios::binary);
 cout<<"\nEnter the name:";
 gets(book_name);
 f1<<book_name<<"\t";
 cout<<"\nEnter the vehicle model:";
 gets(v_model);
 f1<<v_model<<"\t";
 cout<<"\nEnter the vehicle number:";
 gets(v_no);
 f1<<v_no<<"\t";
 cout<<"\nEnter the date of service:";
 gets(date);
 f1<<date<<"\t";
 cout<<"\nEnter the number of kms done:";
 cin>>kms;
 f1<<kms<<"\t\n";
 cout<<"\n\n\t\t Your Service Is Booked On "<<date<<" !!!";
 cout<<"\n\t\t     Thank You For Your Patronage !!!";
 getch();
 f1.close();
}

void view_mod()
{
 ifstream f2("ADD_MODEL.DAT",ios::in);
 long int p;
 int m;
 cout<<"\nEnter the model to be viewed:";
 cin>>m;
 while(!f2.eof())
 {
  f2.read((char*)&c1,sizeof(car));
  p=f2.tellg();
  if(m==c1.getmod())
  {
   clrscr();
   cout<<"\nModel:"<<c1.model;
   cout<<"\nType:"<<c1.type;
   cout<<"\nSeating Capacity:"<<c1.seatcap;
   cout<<"\nVariants(LUXURY,SPORTS,FAMILY):"<<c1.var;
   cout<<"\nEngine:"<<c1.engine;
   cout<<"\nTop Speed:"<<c1.top_speed;
   cout<<"\nFuel Tank Capacity(in lits):"<<c1.fuel_cap;
   cout<<"\nMileage:"<<c1.mil;
   cout<<"\nHorse Power:"<<c1.hp;
   cout<<"\nCC:"<<c1.cc;
   cout<<"\nGround Clearence(in mm):"<<c1.grdclr;
   cout<<"\nWheel Size:"<<c1.whlsz;
   cout<<"\nWeight(in kgs):"<<c1.weight;
   cout<<"\nEstimated Price Range(From-To):"<<c1.frange<<"-"<<c1.trange;
   f2.close();
   getch();
  }
 }
}

void main()
{
 int opt1;
 clrscr();
 textbackground(9);
 for(int a=1;a<31;a++)
 {
  textcolor(11);
  gotoxy(a,4);
  delay(50);
  cprintf("\n MAIN MENU ");
 }
 for( a=50;a>27;a--)
 {
  textcolor(55);
  gotoxy(a,7);
  delay(50);
  cprintf("\n 1.VIEW MODELS ");
 }
 for( a=50;a>27;a--)
 {
  textcolor(13);
  gotoxy(a,9);
  delay(50);
  cprintf("\n 2.SERVICE BOOKING  ");
 }
 for( a=50;a>27;a--)
 {
  textcolor(15);
  gotoxy(a,11);
  delay(50);
  cprintf("\n 3.EXIT ");
 }
 textcolor(11);
 for(int i=55;i>30;i--)
 {
  delay(40);
  gotoxy(i,16);cprintf(" ENTER YOUR CHOICE  ");
 }
 for(i=55;i>38;i--)
 {
  delay(40);
  textcolor(13);
  gotoxy(i,18);cprintf("      ÉÍÍÍÍ»       ");
  gotoxy(i,19);cprintf("   ÉÍÍ¼    ÈÍ»     ");
  gotoxy(i,20);cprintf("   ÈÍoÍÍÍÍooÍ¼     ");
 }
 textcolor(13);
 gotoxy(48,19);cin>>opt1;
 switch(opt1)
 {
  case 1:clrscr();
	 view_mod();
	 break;
  case 2:clrscr();
	 ser_book();
	 break;
  case 3:clrscr();
	 exit(0);
	 break;
  default:cout<<"\n\n\t\t\t\t THANK YOU";
 }
 getch();
}
