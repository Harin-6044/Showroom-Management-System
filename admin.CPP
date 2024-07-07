//************
//ADMIN PORTAL
//************

#include<dos.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
#include<fstream.h>
#include<iostream.h>

class car
{
 int model;
 char type[20],var[20],engine[50];
 int seatcap,hp,cc,grdclr,whlsz;
 public:
 float frange,trange,weight,fuel_cap,mil,top_speed;
 void modadd();
 void modifymod();
 int getmod()
 {
  return model;
 }
}c1;

void car::modifymod()
{
 fstream file("ADD_MODEL.DAT",ios::in|ios::out|ios::app);
 long pos;
 int w;
 cout<<"\nEnter the model to be modified:";
 cin>>w;
 while(!file.eof())
 {
  file.read((char*)&c1,sizeof(car));
  pos=file.tellg();
  if(w==c1.getmod())
  {
   cout<<"\nEnter new record";
   cout<<"\*****************";
   cout<<"\nType:";
   gets(type);
   cout<<"\nSeating Capacity:";
   cin>>seatcap;
   cout<<"\nVariants(LUXURY,SPORTS,FAMILY):";
   gets(var);
   cout<<"\nEngine:";
   gets(engine);
   cout<<"\nTop Speed:";
   cin>>top_speed;
   cout<<"\nFuel Tank Capacity(in lits):";
   cin>>fuel_cap;
   cout<<"\nMileage:";
   cin>>mil;
   cout<<"\nHorse Power:";
   cin>>hp;
   cout<<"\nCC:";
   cin>>cc;
   cout<<"\nGround Clearence(in mm):";
   cin>>grdclr;
   cout<<"\nWheel Size:";
   cin>>whlsz;
   cout<<"\nWeight(in kgs):";
   cin>>weight;
   cout<<"\nEstimated Price Range(From-To):";
   cin>>frange>>trange;
   file.seekg(pos);
   file.write((char*)&c1,sizeof(car));
   break;
  }
 }
 file.close();
}

void car::modadd()
{
 char ch='y';
 ofstream fout("ADD_MODEL.DAT",ios::out|ios::binary|ios::app);
 do
 {
  cout<<"\nEnter the following details:";
  cout<<"\nModel:";
  cin>>model;
  cout<<"\nType:";
  gets(type);
  cout<<"\nSeating Capacity:";
  cin>>seatcap;
  cout<<"\nVariants(LUXURY,SPORTS,FAMILY):";
  gets(var);
  cout<<"\nEngine:";
  gets(engine);
  cout<<"\nTop Speed:";
  cin>>top_speed;
  cout<<"\nFuel Tank Capacity(in lits):";
  cin>>fuel_cap;
  cout<<"\nMileage:";
  cin>>mil;
  cout<<"\nHorse Power:";
  cin>>hp;
  cout<<"\nCC:";
  cin>>cc;
  cout<<"\nGround Clearence(in mm):";
  cin>>grdclr;
  cout<<"\nWheel Size:";
  cin>>whlsz;
  cout<<"\nWeight(in kgs):";
  cin>>weight;
  cout<<"\nEstimated Price Range(From-To):";
  cin>>frange>>trange;
  fout.write((char*)&c1,sizeof(car));
  cout<<"\nDo u want to add more vehicle?";
  cin>>ch;
 }while(ch=='Y'||ch=='y');
 fout.close();
}

void main()
{
 clrscr();
 int pass;
 cout<<"\n Enter Your Access Code:";
 cin>>pass;
 if(pass==2002||pass==3003||pass==5005)
 {
  int opt1,opt2;
  clrscr();
  cout<<"\nWelcome Admin";
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
   cprintf("\n 1.ADD A NEW MODEL ");
  }
  for( a=50;a>27;a--)
  {
   textcolor(13);
   gotoxy(a,9);
   delay(50);
   cprintf("\n 2.MODIFY EXISTING MODEL  ");
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
   case 1:
       {
        clrscr();
	    c1.modadd();
	    break;
	   }
   case 2:
       {
        clrscr();
	    c1.modifymod();
        break;
       }
   case 3:
       {
        clrscr();
	    exit(0);
	   }
   default:
       {
        cout<<"\n\t ENTER THE CORRECT CHOICE [1-4]:";
        cin>>opt2;
       }
  }
  getch();
 }
}
