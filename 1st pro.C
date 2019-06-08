#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
int main()
{

FILE *fp;
int s;
int t; //t for terminate
int i,j;
int a;
int b;
int arr[8];
//int x=270,y=232;
int q; //q for blink and color
int gd=DETECT,gm;
int l; //for review is this table correct
//--------------login------------------------------
int c;
char name[20], add[100],number[100],mail[100];
char oname[20];
char pass[10];
char uck[10];
char pck[10];
 //--------------------------------------------
//1=========================================welcome===========================================


initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setcolor(14);
rectangle(0,0,639,479);
rectangle(5,5,634,474);
rectangle(10,10,629,469);
line(10,10,90,40);
line(560,410,629,469);
line(560,40,629,11);
line(90,410,10,469);
//circle(319,239,75);

setcolor(WHITE);
settextstyle(10,0,4);
outtextxy(160,100,"\nWELCOME TO");
outtextxy(220,200,"ANY-15");
outtextxy(240,300,"GAME");
setcolor(14);
rectangle(100,50,550,400);
rectangle(95,45,555,405);
rectangle(90,40,560,410);
setcolor(3);
for(a=0;a<=489;a=a+10)
{
rectangle(60+a,438,100+a,455);
delay(100);
}

closegraph();

//========================================LOADING


   initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
       settextstyle(DEFAULT_FONT,HORIZ_DIR,7);
outtextxy(80,50,"LOADING...");
for(a=0;a<=500;a=a+10)
{   putpixel(50+a,150,3);
  putpixel(50+a,155,3);
  putpixel(50+a,305,9);
  putpixel(50+a,300,9);
rectangle(50+a,200,100+a,250);
delay(25);
}

closegraph();


 //3========================================ready========================
 q=14;
 do
 {
 printf("\n");
  textcolor(11+BLINK);
  printf("                            ---------------------\n");
cprintf("                              HOW TO PLAY ANY-15");
printf("\n");
printf("                            ---------------------\n\n");

 textcolor(12+BLINK);
 printf("\n");
//delay(500);
cprintf("RULES:");
printf("\n");
textcolor(12+BLINK);
cprintf("------");
printf("\n");
textcolor(q);
cprintf(">> ZERO '0' is not allowded.");
printf("\n");
textcolor(q);
cprintf(">> Only single digit nubers (between 0-10) is allowded.");
printf("\n");
textcolor(q);
cprintf(">> Repeating same number in multiple field is not allowded.");
printf("\n");
textcolor(q);
cprintf(">> Any number can be use in different field.");
printf("\n\n");
textcolor(WHITE+BLINK );
cprintf("--------------------------------------------------------------------------------");
textcolor(12+BLINK);
//delay(1000);
cprintf("\nMETHOD");
printf("\n");
cprintf("-------");
printf("\n");
textcolor(q);
cprintf(">> There are total 9 boxes in 3X3 matrix form. Each boxes must contain at least    one number between (0-10).\n")     ;
printf("\n");
textcolor(15+BLINK);
cprintf("--------------------------------------------------------------------------------");
textcolor(12+BLINK);
cprintf("\nHOW TO WIN");
printf("\n");
cprintf("-----------");
printf("\n");
textcolor(q);
cprintf(">> Arrange number in all boxes or field in such way that in addition of each row   ,each column and their diagonals , the sum must be 15.");

q=getch();

if(q==8)
{ break; }


}
while(1);




//==================================loading section=========================


   initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
   settextstyle(DEFAULT_FONT,HORIZ_DIR,7);
outtextxy(80,50,"LOADING...");
for(a=0;a<=500;a=a+10)
{   putpixel(50+a,150,3);
  putpixel(50+a,155,3);
  putpixel(50+a,305,9);
  putpixel(50+a,300,9);
rectangle(50+a,200,100+a,250);
delay(100);
}

closegraph();






//4=================================file handaling==================================


home:
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
setcolor(14);
outtextxy(180,50,"HEY BUDDIE WELCOME!!");
setcolor(WHITE);
line(0,190,630,190);
line(0,280,630,280);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
setcolor(WHITE);
outtextxy(0,400,"PRESS L FOR LOGIN.....!!");
outtextxy(0,425,"PRESS R FOR NEW USER REGISTRATION......!");

settextstyle(DEFAULT_FONT,HORIZ_DIR,10);
setcolor(WHITE);
outtextxy(0,200,"ANY-GAME");

while(1)
  {

     c=getch();
     if(c=='l' || c=='L')
	goto login;

      if(c=='r' || c=='R')
      break;

      if(c=='T' || c=='t')
	 exit();
  }

  closegraph();



initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
closegraph();



textcolor(14+BLINK);
cprintf("                                 \nENTER PLAYERS DETAILS");
cprintf("                                                           ---------------------");
printf("\n\n\n\n\n\n\n");
  textcolor(9);
cprintf("ENTER YOUR  FIRST NAME:              ");
gets(name);
fp=fopen(name,"w");
if(fp==NULL)
printf("error");


printf("\n");
  textcolor(10);
cprintf("ENTER YOUR PASS-KEY                  ");
gets(pass);


printf("\n");
  textcolor(6);
cprintf("ENTER YOUR ADDRESS:                  ");
gets(add);
printf("\n");
  textcolor(11);
cprintf("ENTER YOUR MOBILE NUMBER:            ");
gets(number);
printf("\n");
  textcolor(12);
cprintf("ENTER YOU MAIL ADDRESS:              ");
gets(mail);
printf("\n");
fprintf(fp," %s \n  %s \n %s \n %s \n %s\n\n\n",name,pass,add,number,mail);
printf("\n\n\n");
textcolor(GREEN+BLINK);
cprintf("                          THANK YOU %s FOR DETAILS",name);
printf("\n");
fclose(fp);
cprintf("                          PRESS ANY KEY TO CONTINUE.......");
getch();

initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
closegraph();

login:
closegraph();
//textcolor(10+BLINK);
printf("\n");
printf("--------------------------------------------------------------------------------");
//printf("\n");
textcolor(10+BLINK);
cprintf("                                     LOGIN");
printf("\n");
printf("--------------------------------------------------------------------------------");
printf("\n\n\n\n\n\n\n");
textcolor(14+BLINK);
//cprintf("--------------------------------------------------------------------------------");
textcolor(WHITE);
cprintf("Enter Your name:             ");
gets(oname);
fp=fopen(oname,"r");
if(fp==NULL)
//DATA FATCHING
textcolor(WHITE);
fscanf(fp,"%s",&name);
fscanf(fp,"%s",&pass);
//DATA COMPARE
cprintf("RE-Enter Your User Name:     ");
gets(uck);
cprintf("Enter Your Password:         ");
gets(pck);
textcolor(14+BLINK);
//cprintf("--------------------------------------------------------------------------------");
if(strcmp(name,uck) == 0 && strcmp(pass,pck) ==0)
{
//textcolor(GREEN);
//cprintf("--------------------------------------------------------------------------------");
 printf("\n\n\n\n");
textcolor(GREEN+BLINK);
cprintf("                        >>>>> LOGIN SUCCESSFUL <<<<<");
printf("\n\n");
cprintf("                      >>>>>PREE ANY KEY TO CONTINUE<<<");
textcolor(GREEN);
//cprintf("--------------------------------------------------------------------------------");

}
else
{
printf("\n\n\n\n");
textcolor(RED+BLINK);
cprintf("                              >>>>> LOGIN FAIL <<<<<");
printf("\n\n");
cprintf("                        >>>>>PREE ANY KEY TO TO GO BACK<<<");
getch();

goto home;

 }
 fclose(fp);

getch();


//5=======================================loading section================================


   initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
      settextstyle(DEFAULT_FONT,HORIZ_DIR,7);
//outtextxy(150,30,"LOADING..");
outtextxy(80,50,"LOADING...");
for(a=0;a<=500;a=a+10)
{   putpixel(50+a,150,3);
  putpixel(50+a,155,3);
  putpixel(50+a,305,9);
  putpixel(50+a,300,9);
rectangle(50+a,200,100+a,250);
delay(100);
}

closegraph();

fflush(stdin);
//6=====================================DATA INPUT============================================
   bin:
textcolor(14+BLINK);
printf("\n");
cprintf("                           ----------------------");
printf("\n");
cprintf("                            *** FILL THE BOX ***   ");
printf("\n");
cprintf("                           -----------------------");
printf("\n\n");
textcolor(12);
cprintf("              Hey,%s GAME is already started.BEST OF LUCK!!...",name);
printf("\n\n");
for(a=0;a<9;a++)
{
re:
printf("\n");
textcolor(WHITE);
cprintf("->> Enter The %d number : ",a+1);
scanf("%d",&arr[a]);
if(arr[a]>9 || arr[a]==0)
{
if(arr[a]>9)
{
textcolor(RED+BLINK);
cprintf("                        **error** : number is greater then 9!!");
printf("\n");
}
else
{
textcolor(RED+BLINK);
cprintf("                        **error** : 0 is not valid!!");
printf("\n");
}
textcolor(GREEN+BLINK);
cprintf("                        Please enter again.....\n");
goto re;
}
     for(b=0;b<a;b++)
     {
     if(arr[a]==arr[b])
     {
     textcolor(RED+BLINK);
     cprintf("                        **error** : dublicate entery!!");
     printf("\n");
     textcolor(GREEN+BLINK);
     cprintf("                        Please enter again.......\n");
      goto re;
      }
      }

}


initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
//to seee the output data
printf("\n\n\n\n\n\n\n\n");
for(i=0;i<9;i++)

	{


	 printf("   %d   ",arr[i]);
	 if(i==2)
	 printf("\n\n\n");
	 if(i==5)
	 printf("\n\n\n");
	 if(i==8)
	 printf("\n\n\n");

 }
setcolor(11);

rectangle(15,120,160,244);

line(60,120,60,244);
line(115,120,115,244);
line(15,158,160,158);
line(15,205,160,205);



/*
rectangle(50,80,350,300);
line(135,80,135,300);
line(270,80,270,300);
line(50,230,350,230);
line(50,150,350,150);     */
setcolor(WHITE) ;
//outtextxy(50,420,"IS THIS CORRECT...?");
outtextxy(230,180,"PRESS 'R' TO MODIFY...");
outtextxy(230,190,"PRESS ANY KEY TO SEE Y0UR RESULT...");

l=getch();
if(l=='r' || l=='R')
{
closegraph();
goto bin;
}
closegraph();





//7=======================================SORRY===========================

//======>

 //checking result
if(arr[0]+arr[1]+arr[2]==15 && arr[3]+arr[4]+arr[5]==15 && arr[6]+arr[7]+arr[8]==15)
  {
  if(arr[0]+arr[3]+arr[6]==15 && arr[1]+arr[4]+arr[7]==15 && arr[2]+arr[5]+arr[8]==15)
   {
    if(arr[0]+arr[4]+arr[8]==15 && arr[2]+arr[4]+arr[6])
    {

initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

rectangle(0,0,639,479);

for(a=0,b=0;a<50;a++,b++)
{
a+=10;

b+=10;

rectangle(0+a,0+a,639-b,479-b);

}

setcolor(YELLOW);
for(a=0;a<50;a++)
{
a+=10;
rectangle(0+a,0+a,639,479);
rectangle(0,0,639-a,479-a);

}

settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
setcolor(WHITE);
outtextxy(215,180,"BINGO") ;
outtextxy(225,220,name) ;
outtextxy(136,265,"YOU DID IT") ;



for(a=0;a<=520;a=a+10)
{
 putpixel(60+a,60,1);
  putpixel(60+a,65,2);
  putpixel(60+a,75,3);
  putpixel(60+a,85,4);
 putpixel(60+a,95,5);
  putpixel(60+a,105,6);
  putpixel(60+a,115,7);
  putpixel(60+a,125,8);
putpixel(60+a,135,9);
  putpixel(60+a,145,10);
  putpixel(60+a,155,11);
  putpixel(60+a,160,12);
 putpixel(60+a,165,13);
  putpixel(60+a,175,14);
  putpixel(60+a,185,15);
  putpixel(60+a,195,1);
   putpixel(60+a,205,2);
  putpixel(60+a,215,3);
  putpixel(60+a,225,4);
  putpixel(60+a,235,5);
 putpixel(60+a,245,6);
  putpixel(60+a,255,7);
  putpixel(60+a,265,8);
  putpixel(60+a,275,9);
putpixel(60+a,285,1);
  putpixel(60+a,295,2);
  putpixel(60+a,305,3);
  putpixel(60+a,315,4);
 putpixel(60+a,325,5);
  putpixel(60+a,335,6);
  putpixel(60+a,345,7);
  putpixel(60+a,355,8);
  putpixel(60+a,365,9);
  putpixel(60+a,375,8);
  putpixel(60+a,385,1);
putpixel(60+a,395,2);
  putpixel(60+a,405,3);
  putpixel(60+a,415,4);

delay(100);
}
getch();
closegraph();
goto last;
 }}}






  //=================================SORRY=========================================


printf("\n\n\n\n\n\n\n\n\n\n");
textcolor(RED+BLINK);
cprintf("--------------------------------------------------------------------------------");
//printf("\n");
textcolor(RED);
cprintf("                  SORRY %s, YOUR ENTERED DATA IS INCORRECT",name);
printf("\n");
cprintf("                           BETTER LUCK NEXT TIME");
printf("\n");
textcolor(RED+BLINK);
cprintf("--------------------------------------------------------------------------------");


getch();


//=======================================last thank q==================================================================

last:
system("CLS");
	      printf("\n\n\n\n");

  printf("\t\t       ----------------------------------");
  printf("\n");
 printf("\t\t\tTHANK YOU FROM OUR PROJECT TEAM");
 printf("\n");
  printf("\t\t       ----------------------------------");
 printf("\n\n\n");
 printf("           Many Many Thank You MR./MRS %s For Engaged To Our Game Till End..",name);
 printf("\n");
 printf("     THIS GAME IS OUR FIRST PROJECT AND WE HOPE YOU LIKE THIS GAME THANK YOU....");






getch();
 return 0;

 }


