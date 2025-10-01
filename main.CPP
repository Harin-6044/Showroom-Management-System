//**************************
//SHOWROOM MANAGEMENT SYSTEM
//**************************

#include<dos.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
#include<fstream.h>
#include<iostream.h>

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

void enter_the_fun();
void admlog();
void custport();
void deaport();
void close();

//*************
//DEALER PORTAL
//*************

void kerala();
void tamilnadu();
void karnataka();
void rajasthan();
void maharashtra();
void gujarat();
void jharkhand();
void bihar();
void telangana();
void output3();

void deaport()
{
 textcolor(11);
 int state;
 cout<<"\n \n \t\t      13 GROGETTERS OVER INDIA!!!";
 cout<<"\n \n\n \t1.Kerala \n \t2.Tamil Nadu \n \t3.Karnataka \n \t4.Rajasthan \n \t5.Maharashtra";
 cout<<"\n \t6.Gujarat \n \t7.Jharkhand \n \t8.Bihar \n \t9.Telangana \n \t10.Back To Main ";
 cout<<"\n \n\tSelect Your State:";
 cin>>state;
 switch(state)
 {
  case 1:
      {
	   kerala();
	   break;
	  }
  case 2:
      {
	   tamilnadu();
	   break;
	  }
  case 3:
      {
	   karnataka();
	   break;
	  }
  case 4:
      {
	   rajasthan();
	   break;
	  }
  case 5:
      {
	   maharashtra();
	   break;
	  }
  case 6:
      {
	   gujarat();
	   break;
	  }
  case 7:
      {
	   jharkhand();
	   break;
	  }
  case 8:
      {
	   bihar();
	   break;
	  }
  case 9:
      {
	   telangana();
	   break;
	  }
  case 10:
      {
	   clrscr();
	   output3();
	   break;
	  }
  default:
      {
	   cout<<"\n SORRY!!!NO GROGRETTERS ARE AVAILABLE ";
	   break;
	  }
 }
 getch();
}

void kerala()
{
 clrscr();
 int a;
 cout<<"\n\n\n\t\t 1. GROGET KOZHIKODE \n";
 cout<<"\n\t\t\t NH 17, Calicut Kannur Highway Puthiyangadi, ";
 cout<<"\n\t\t\t P.O., Pavanagad, ";
 cout<<"\n\t\t\t Kozhikode. ";
 cout<<"\n\t\t\t Kerala(KL) ";
 cout<<"\n\t\t\t Phone: 0495 662 5555 ";

 cout<<"\n\n\n\t\t 2.KUN EXCLUSIVE \n";
 cout<<"\n\t\t\t NH 47,Cochin-Coimbatore Highway, ";
 cout<<"\n\t\t\t P.O.Nurani, ";
 cout<<"\n\t\t\t Palakkad. ";
 cout<<"\n\t\t\t Kerala(KL) ";
 cout<<"\n\t\t\t Phone: 0495 253 5555 ";

 cout<<"\n\n\t PRESS 1 TO GO BACK: ";
 cin>>a;
 if(a==1)
 {
  clrscr();
  deaport();
 }
 else
 close();
}

void tamilnadu()
{
 clrscr();
 int a;
 cout<<"\n\n\n\t 1. GROGET COIMBATORE \t\t 2. PRAHASU GROGET";
 cout<<"\n";
 cout<<"\n\t       Near Nehru Stadium   \t\t Anna Salai,Nandanam 535";
 cout<<"\n\t       Coimbatore,          \t\t Chennai,";
 cout<<"\n\t       Tamil Nadu(TN).      \t\t Tamil Nadu(TN).";
 cout<<"\n\t       Phone: 0422 403 0100 \t\t Phone: 044 4560 0456";

 cout<<"\n\n\n\n\t 3. SAFETY GROGET     \t\t 4.  ANAAMALAIS GROGET";
 cout<<"\n";
 cout<<"\n\t       10/525, NH-47,       \t\t S.F.No 696/4,Badhmini Garden,";
 cout<<"\n\t       Solipalayam ,        \t\t Kangayam Rd,";
 cout<<"\n\t       Perundurai,Erode.    \t\t Tirupur.";
 cout<<"\n\t       Tamil Nadu(TN).      \t\t Tamil Nadu(TN).";
 cout<<"\n\t       Phone: 9842322499    \t\t Phone:0421-228899";

 cout<<"\n\n\t PRESS 1 TO GO BACK: ";
 cin>>a;
 if(a==1)
 {
  clrscr();
  deaport();
 }
 else
 close();
}

void karnataka()
{
 clrscr();
 int a;
 cout<<"\n\n\n\t\t\t 1. GROGET BENGALURU \n";
 cout<<"\n\t\t\t\t Survey No. 6/1, ";
 cout<<"\n\t\t\t\t Beratana Agrahara Hosur Main Road, ";
 cout<<"\n\t\t\t\t Electronic City P.O ";
 cout<<"\n\t\t\t\t Bengaluru, ";
 cout<<"\n\t\t\t\t Karnataka(KA). ";
 cout<<"\n\t\t\t\t Phone: 080 4517 0000 ";

 cout<<"\n\n\n\n\t\t\t 2. GROGET KOLAR \n";
 cout<<"\n\t\t\t\t 66/32,ASHOK NAGAR  ";
 cout<<"\n\t\t\t\t KOLAR, ";
 cout<<"\n\t\t\t\t KARNATAKA (KA) ";
 cout<<"\n\t\t\t\t Phone:9986234286 ";

 cout<<"\n\n\t PRESS 1 TO GO BACK: ";
 cin>>a;
 if(a==1)
 {
  clrscr();
  deaport();
 }
 else
 close();
}

void rajasthan()
{
 clrscr();
 int a;
 cout<<"\n\n\n\t\t\t 1. HSP GROGET \n";
 cout<<"\n\t\t\t\t Goverdhan Villas Ahmedabad Road ";
 cout<<"\n\t\t\t\t Udaipur, ";
 cout<<"\n\t\t\t\t Rajasthan(RJ). ";
 cout<<"\n\t\t\t\t Phone: 0294 248 1357 ";

 cout<<"\n\n\n\t\t\t 2. GRANDEUR GROGET \n";
 cout<<"\n\t\t\t\t Tuwariyan Ki Dhani ";
 cout<<"\n\t\t\t\t Vidhani, ";
 cout<<"\n\t\t\t\t Rajasthan(RJ). ";
 cout<<"\n\t\t\t\t Phone: 0294 545 1357 ";

 cout<<"\n\n\t PRESS 1 TO GO BACK: ";
 cin>>a;
 if(a==1)
 {
  clrscr();
  deaport();
 }
 else
 close();
}

void jharkhand()
{
 clrscr();
 int a;
 cout<<"\n\n\n\t\t\t 1. SUPRAHA GROGET \n";
 cout<<"\n\t\t\t\t Kanta Tolli Chowk, ";
 cout<<"\n\t\t\t\t PS Purulia Road ";
 cout<<"\n\t\t\t\t Ranchi, ";
 cout<<"\n\t\t\t\t Jharkhand(JH). ";
 cout<<"\n\t\t\t\t Phone: 077658 16666 ";

 cout<<"\n\n\n\t\t\t 2. MD GROGET \n";
 cout<<"\n\t\t\t\t PN 1 P Medium Sector, ";
 cout<<"\n\t\t\t\t RIT Modh ";
 cout<<"\n\t\t\t\t Jamshedpur, ";
 cout<<"\n\t\t\t\t Jharkhand(JH). ";
 cout<<"\n\t\t\t\t Phone: 077658 15555 ";

 cout<<"\n\n\t PRESS 1 TO GO BACK: ";
 cin>>a;
 if(a==1)
 {
  clrscr();
  deaport();
 }
 else
 close();
}

void maharashtra()
{
 clrscr();
 int a;
 cout<<"\n\n\n\t\t\t 1. GROGET KOLHAPUR \n";
 cout<<"\n\t\t\t\t 1565/B C ,Mahadwar Rd ";
 cout<<"\n\t\t\t\t Ichalkaranji ";
 cout<<"\n\t\t\t\t Maharashtra (MH) ";
 cout<<"\n\t\t\t\t Phone:9942413999 ";

 cout<<"\n\n\n\t\t\t 2. GROGET NASHIK  \n";
 cout<<"\n\t\t\t\t Lokmat Bhavan ";
 cout<<"\n\t\t\t\t Mumai Agra Highway ";
 cout<<"\n\t\t\t\t Maharashtra (MH) ";
 cout<<"\n\t\t\t\t Phone:9255525835 ";

 cout<<"\n\n\t PRESS 1 TO GO BACK: ";
 cin>>a;
 if(a==1)
 {
  clrscr();
  deaport();
 }
 else
 close();
}

void gujarat()
{
 clrscr();
 int a;
 cout<<"\n\n\n\t\t\t 1. GROGET SURAT \n";
 cout<<"\n\t\t\t\t 520,Sector C ,Katagram rd, ";
 cout<<"\n\t\t\t\t Surat , ";
 cout<<"\n\t\t\t\t Gujarat(GJ) ";
 cout<<"\n\t\t\t\t Phone:9894525215 ";

 cout<<"\n\n\n\n\t\t\t 2. BENCHMARK CARS \n";
 cout<<"\n\t\t\t\t Sun court, Near Sola Flyover,  ";
 cout<<"\n\t\t\t\t S.G. Road, Sola, ";
 cout<<"\n\t\t\t\t Ahmedabad,  ";
 cout<<"\n\t\t\t\t Gujarat (GJ) ";
 cout<<"\n\t\t\t\t Phone: 80009 62000 ";

 cout<<"\n\n\t PRESS 1 TO GO BACK: ";
 cin>>a;
 if(a==1)
 {
  clrscr();
  deaport();
 }
 else
 close();
}

void bihar()
{
 clrscr();
 int a;
 cout<<"\n\n\n\t\t\t 1. GROGET CHAMPARAN \n";
 cout<<"\n\t\t\t\t 10/15,NH 104, ";
 cout<<"\n\t\t\t\t Champaran,Tirhut, ";
 cout<<"\n\t\t\t\t Bihar.(BR) ";
 cout<<"\n\t\t\t\t Phone:9571596542 ";

 cout<<"\n\n\n\t\t\t 2. GROGET YAJUAR \n";
 cout<<"\n\t\t\t\t 696/32,Ashiana Vihar Apartment,  ";
 cout<<"\n\t\t\t\t Patna ";
 cout<<"\n\t\t\t\t Bihar.(BR) ";
 cout<<"\n\t\t\t\t Phone:9571595454 ";

 cout<<"\n\n\t PRESS 1 TO GO BACK: ";
 cin>>a;
 if(a==1)
 {
  clrscr();
  deaport();
 }
 else
 close();
}

void telangana()
{
 clrscr();
 int a;
 cout<<"\n\n\n\t\t\t 1. SUNDARAM MOTORS \n";
 cout<<"\n\t\t\t\t 6-3-563/A, Erramanzil Colony,  ";
 cout<<"\n\t\t\t\t Banjara Hills Road, ";
 cout<<"\n\t\t\t\t Somajiguda,  ";
 cout<<"\n\t\t\t\t Hyderabad, ";
 cout<<"\n\t\t\t\t Telangana (TS). ";
 cout<<"\n\t\t\t\t Phone:9879878996 ";

 cout<<"\n\n\n\t\t\t 1.GROGET GACHIBOWLI \n";
 cout<<"\n\t\t\t\t 7-56/19, Dargah Road ,  ";
 cout<<"\n\t\t\t\t Radhe Nagar, ";
 cout<<"\n\t\t\t\t Gachi Bowli,Rai Du,  ";
 cout<<"\n\t\t\t\t Hyderabad, ";
 cout<<"\n\t\t\t\t Telangana (TS). ";
 cout<<"\n\t\t\t\t Phone:9879545448 ";

 cout<<"\n\n\t PRESS 1 TO GO BACK: ";
 cin>>a;
 if(a==1)
 {
  clrscr();
  deaport();
 }
 else
 close();
}

//***************
//CUSTOMER PORTAL
//***************

void ser_book()
{
 char book_name[20],v_model[15],v_no[15],date[15];
 float kms;
 int a;
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
 cout<<"\n\n\t PRESS 1 TO GO BACK: ";
 cin>>a;
 if(a==1)
 {
  clrscr();
  custport();
 }
 else
 close();
 getch();
 f1.close();
}

void view_mod()
{
 ifstream f2("ADD_MODEL.DAT",ios::in);
 long int p;
 int m,a;
 cout<<"\nEnter the model to be viewed:";
 cin>>m;
 while(!f2.eof())
 {
  f2.read((char*)&c1,sizeof(car));
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
   cout<<"\n\n\t PRESS 1 TO GO BACK: ";
   cin>>a;
   if(a==1)
   {
    clrscr();
    custport();
   }
   else
   close();
   getch();
  }
 }
}

void custport()
{
 int opt1,opt2;
 clrscr();
 textbackground(9);
 for(int a=1;a<31;a++)
 {
  textcolor(11);
  gotoxy(a,4);
  delay(30);
  cprintf("\n CUSTOMER MENU ");
 }
 for( a=50;a>27;a--)
 {
  textcolor(55);
  gotoxy(a,7);
  delay(30);
  cprintf("\n 1.VIEW MODELS ");
 }
 for( a=50;a>27;a--)
 {
  textcolor(13);
  gotoxy(a,9);
  delay(30);
  cprintf("\n 2.SERVICE BOOKING  ");
 }
 for( a=50;a>27;a--)
 {
  textcolor(15);
  gotoxy(a,11);
  delay(30);
  cprintf("\n 3.EXIT ");
 }
 textcolor(11);
 for(int i=55;i>30;i--)
 {
  delay(20);
  gotoxy(i,16);cprintf(" ENTER YOUR CHOICE  ");
 }
 for(i=55;i>38;i--)
 {
  delay(20);
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
      clrscr();
	  view_mod();
	  break;
  case 2:
      clrscr();
	  ser_book();
	  break;
  case 3:
      clrscr();
	  output3();
	  break;
  default:
      cout<<"\n ENTER THE CORRECT CHOICE[1-3]:";
	  cin>>opt2;
	  switch(opt2)
	  {
	   case 1:
	       clrscr();
		   view_mod();
		   break;
	   case 2:
	       clrscr();
		   ser_book();
		   break;
	   case 3:
	       clrscr();
		   output3();
		   break;
	   default:
	       cout<<"\n\n\t\t\t\t THANK YOU";
	  }
 }
 getch();
}

//************
//ADMIN PORTAL
//************

void car::modifymod()
{
 fstream file("ADD_MODEL.DAT",ios::in|ios::out|ios::app);
 long pos;
 int w,a;
 cout<<"\nEnter the model to be modified:";
 cin>>w;
 while(!file.eof())
 {
  file.read((char*)&c1,sizeof(car));
  pos=file.tellg();
  if(w==c1.getmod())
  {
   cout<<"\n\t\t\t ENTER THE NEW RECORD";
   cout<<"\n\t\t\t  *****************";
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
   cout<<"\n\n\t PRESS 1 TO GO BACK: ";
   cin>>a;
   if(a==1)
   {
    clrscr();
    admlog();
   }
   else
   close();
   break;
  }
 }
 file.close();
}

void car::modadd()
{
 int a;
 char ch='y';
 car c2;
 ofstream fout("ADD_MODEL.DAT",ios::out|ios::binary|ios::app);
 do
 {
  cout<<"\nEnter the following details:";
  cout<<"\nModel:";
  cin>>c2.model;
  cout<<"\nType:";
  gets(c2.type);
  cout<<"\nSeating Capacity:";
  cin>>c2.seatcap;
  cout<<"\nVariants(LUXURY,SPORTS,FAMILY):";
  gets(c2.var);
  cout<<"\nEngine:";
  gets(c2.engine);
  cout<<"\nTop Speed:";
  cin>>c2.top_speed;
  cout<<"\nFuel Tank Capacity(in lits):";
  cin>>c2.fuel_cap;
  cout<<"\nMileage:";
  cin>>c2.mil;
  cout<<"\nHorse Power:";
  cin>>c2.hp;
  cout<<"\nCC:";
  cin>>c2.cc;
  cout<<"\nGround Clearence(in mm):";
  cin>>c2.grdclr;
  cout<<"\nWheel Size:";
  cin>>c2.whlsz;
  cout<<"\nWeight(in kgs):";
  cin>>c2.weight;
  cout<<"\nEstimated Price Range(From-To):";
  cin>>c2.frange>>c2.trange;
  fout.write((char*)&c2,sizeof(car));
  cout<<"\nDo u want to add more vehicle?";
  cin>>ch;
 }while(ch=='Y'||ch=='y');
 fout.close();
 cout<<"\n\n\t PRESS 1 TO GO BACK: ";
 cin>>a;
 if(a==1)
 {
  clrscr();
  admlog();
 }
 else
 close();
}

void admlog()
{
 clrscr();
 int pass;
 cout<<"\n Enter Your Access Code:";
 cin>>pass;
 if(pass!=2020)
 output3();
 else
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
   delay(30);
   cprintf("\n ADMIN MENU ");
  }
  for( a=50;a>27;a--)
  {
   textcolor(55);
   gotoxy(a,7);
   delay(30);
   cprintf("\n 1.ADD A NEW MODEL ");
  }
  for( a=50;a>27;a--)
  {
   textcolor(13);
   gotoxy(a,9);
   delay(30);
   cprintf("\n 2.MODIFY EXISTING MODEL  ");
  }
  for( a=50;a>27;a--)
  {
   textcolor(15);
   gotoxy(a,11);
   delay(30);
   cprintf("\n 3.EXIT ");
  }
  textcolor(11);
  for(int i=55;i>30;i--)
  {
   delay(20);
   gotoxy(i,16);cprintf(" ENTER YOUR CHOICE  ");
  }
  for(i=55;i>38;i--)
  {
   delay(20);
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
       clrscr();
	   c1.modadd();
	   break;
   case 2:
       clrscr();
	   c1.modifymod();
	   break;
   case 3:
       clrscr();
	   output3();
	   break;
   default:
       clrscr();
	   cout<<"\n\t ENTER THE CORRECT CHOICE [1-4]:";
	   cin>>opt2;
	   switch(opt2)
	   {
	    case 1:
	        clrscr();
		    c1.modadd();
		    break;
	    case 2:
	        clrscr();
		    c1.modifymod();
		    break;
	    case 3:
	        clrscr();
		    output3();
		    break;
	    default:
	        cout<<"\n\t THANK YOU";
	   }
  }
  getch();
 }
}

//*****************
//INTRODUCTION PAGE
//*****************

void output1()
{
 clrscr();
 for(int i=2;i<10;i++)
 {
  textcolor(11);
  textbackground(9);
  delay(50);
  gotoxy(i,5);  cputs(" ÛÛÛÛÛÛÛÛÛÛ                                                              ");
  gotoxy(i,6);  cputs(" ÛÛ      ÛÛ                                                              ");
  gotoxy(i,7);  cputs(" ÛÛ              ÜÜÜÜ ÜÜÜÜ ÜÜÜÜ ÜÜÜÜ ÜÜÜÜ ÜÜÜÜÜ                      ");
  gotoxy(i,8);  cputs(" ÛÛ              Û    Û  Û Û  Û Û    Û      Û                        ");
  gotoxy(i,9);  cputs(" ÛÛ              Û ÜÜ ÛÛßß Û  Û Û ÜÜ Ûßßß   Û                        ");
  gotoxy(i,10); cputs(" ÛÛ   ÛÛÛÛÛÛÛÛ   ÛÜÜÛ Û ßÜ ÛÜÜÛ ÛÜÜÛ ÛÜÜÜ   Û                        ");
  gotoxy(i,11); cputs(" ÛÛ   ß  ÛÛ  ß                                                           ");
  gotoxy(i,12); cputs(" ÛÛ      ÛÛ            ÜÜÜÜÜ ÜÜÜÜ Ü   Ü ÜÜÜÜÜ ÜÜÜÜÜ ÜÜÜÜ ÜÜÜÜ    ");
  gotoxy(i,13); cputs(" ÛÛÛÛÛÛÛÛÛÛ              Û   Û    Ûß» Û   Û     Û   Û  Û Û       ");
  gotoxy(i,14); cputs("         ÛÛ              Û   Û ÜÜ Û ß»Û   Û     Û   Û  Û ßßßÛ    ");
  gotoxy(i,15); cout<<"      Ü  ÛÛ  Ü         ÜÜÛÜÜ ÛÜÜÛ Û  ßÛ ÜÜÛÜÜ   Û   ÛÜÜÛ ÜÜÜÛ     ";
  gotoxy(i,16); cout<<"      ÛÛÛÛÛÛÛÛ                                                            ";

  gotoxy(50-i,19);cout<<" NoThInG BeAtS LuXuRy.... ";
  delay(50);
 }
 delay(500);cout<<"\n\n\n\t\t\t  PRESS ENTER TO CONTINUE ";
 getch();
}

//*********************
//SUB INTRODUCTION PAGE
//*********************

void output2()
{
 clrscr();
 for(int i=1;i<9;i++)
 {
  delay(50);
  gotoxy(i+2,7);  cputs(" Û       Û  Ûßßßßß  Û           ");
  gotoxy(i+2,8);  cputs(" Û       Û  Û       Û           ");
  gotoxy(i+2,9);  cputs(" Û       Û  Û       Û           ");
  gotoxy(i+2,10); cputs(" Û   Û   Û  Ûßßßßß  Û           ");
  gotoxy(i+2,11); cputs(" Û Üß ßÜ Û  Û       Û           ");
  gotoxy(i+2,12); cputs(" ÛÛ     ÛÛ  ÛÜÜÜÜÜ  ÛÜÜÜÜÜÜ     ");

  gotoxy(45-i,7);  cputs("  Ûßßßßß  ÛßßßßßÛ  ÛÛ     ÛÛ  Ûßßßßß      \n");
  gotoxy(45-i,8);  cputs("  Û       Û     Û  Û ßÜ Üß Û  Û           \n");
  gotoxy(45-i,9);  cputs("  Û       Û     Û  Û   Û   Û  Û           \n");
  gotoxy(45-i,10); cputs("  Û       Û     Û  Û       Û  Ûßßßßß      \n");
  gotoxy(45-i,11); cputs("  Û       Û     Û  Û       Û  Û           \n");
  gotoxy(45-i,12); cputs("  ÛÜÜÜÜÜ  ÛÜÜÜÜÜÛ  Û       Û  ÛÜÜÜÜÜ    \n\n");
 }
 cout<<"\n\n\t\t\t IT'S OUR PLEASURE\n\n\t\t\t\t\tTO SERVE YOU ";
 for(i=20;i<58;i++)
 {
  delay(60);
  gotoxy(i,20);cprintf("");
 }
 getch();
}

//*********
//MAIN MENU
//*********

void output3()
{
 int choice1;
 int choice2;
 clrscr();
 textbackground(9);
 for(int a=1;a<31;a++)
 {
  textcolor(11);
  gotoxy(a,4);
  delay(30);
  cprintf("\n MAIN MENU ");
 }
 for( a=50;a>27;a--)
 {
  textcolor(55);
  gotoxy(a,7);
  delay(30);
  cprintf("\n 1.ADMIN LOGIN ");
 }
 for( a=50;a>27;a--)
 {
  textcolor(13);
  gotoxy(a,9);
  delay(30);
  cprintf("\n 2.CUSTOMER PORTAL ");
 }
 for( a=50;a>27;a--)
 {
  textcolor(14);
  gotoxy(a,11);
  delay(30);
  cprintf("\n 3.DEALER PORTAL ");
 }
 for( a=50;a>27;a--)
 {
  textcolor(15);
  gotoxy(a,13);
  delay(30);
  cprintf("\n 4.EXIT ");
 }
 textcolor(11);
 for(int i=55;i>30;i--)
 {
  delay(20);
  gotoxy(i,16);cprintf(" ENTER YOUR CHOICE  ");
 }
 for(i=55;i>38;i--)
 {
  delay(20);
  textcolor(13);
  gotoxy(i,18);cprintf("      ÉÍÍÍÍ»       ");
  gotoxy(i,19);cprintf("   ÉÍÍ¼    ÈÍ»     ");
  gotoxy(i,20);cprintf("   ÈÍoÍÍÍÍooÍ¼     ");
 }
 textcolor(13);
 gotoxy(47,19);cin>>choice1;
 switch(choice1)
 {
  case 1:
      clrscr();
	  admlog();
	  break;
  case 2:
      clrscr();
	  custport();
	  break;
  case 3:
      clrscr();
	  deaport();
	  break;
  case 4:
      clrscr();
	  close();
	  break;
  default:
      textcolor(11);
      for(int i=55;i>30;i--)
      {
       delay(40);
       gotoxy(i,16);cprintf(" ENTER THE CORRECT CHOICE[1-4]: ");
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
      gotoxy(47,19);cin>>choice2;
      switch(choice2)
      {
       case 1:
           clrscr();
	       admlog();
	       break;
       case 2:
           clrscr();
           custport();
	       break;
       case 3:
           clrscr();
	       deaport();
           break;
       case 4:
           clrscr();
	       close();
	       break;
       default:
           cout<<"\n\t THANK YOU FOR VISITING";
      }
 }
}

//****************
//CLOSING FUNCTION
//****************

void close()
{
 clrscr();
 textcolor(11);
 for(int i=1;i<7;i++)
 {
  gotoxy(i,5);  cputs("       ßßßÛßßß  Û    Û  ÛßßßßÛ ");
  gotoxy(i,6);  cputs("          Û     Û    Û  Û    Û ");
  gotoxy(i,7);  cputs("          Û     ÛÜÜÜÜÛ  Û    Û ");
  gotoxy(i,8);  cputs("          Û     Û    Û  ÛßßßßÛ ");
  gotoxy(i,9);  cputs("          Û     Û    Û  Û    Û ");
  gotoxy(i,10); cputs("          ß     ß    ß  ß    ß ");

  gotoxy(42-i,5);  cputs("   Ûß»    Û  Û   Üß             \n");
  gotoxy(42-i,6);  cputs("   Û ß»   Û  Û Üß               \n");
  gotoxy(42-i,7);  cputs("   Û  ß»  Û  ÛÛ                 \n");
  gotoxy(42-i,8);  cputs("   Û   ß» Û  ÛßÜ                \n");
  gotoxy(42-i,9);  cputs("   Û    ß»Û  Û  ßÜ              \n");
  gotoxy(42-i,10); cputs("   ß     ßß  ß    ß         \n\n\n");

  gotoxy(i+11,12); cputs("      ß»     Û  ÛßßßßÛ  Û    Û  ");
  gotoxy(i+11,13); cputs("       ß»   Û   Û    Û  Û    Û  ");
  gotoxy(i+11,14); cputs("        ß» Û    Û    Û  Û    Û  ");
  gotoxy(i+11,15); cputs("         ßÛ     Û    Û  Û    Û  ");
  gotoxy(i+11,16); cputs("          Û     ÛÜÜÜÜÛ  ÛÜÜÜÜÛ  ");
  }
  delay(1000);
  exit(0);
}

//*************
//MAIN FUNCTION
//*************

void main()
{
 clrscr();
 output1();
 output2();
 output3();
 getch();
}
