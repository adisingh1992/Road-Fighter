#include<mouse.h>
void pre_loader()
	{
	setcolor(8);
	rectangle(0,0,getmaxx(),getmaxy());
	setfillstyle(1,2);
	floodfill(10,10,8);
	line(0,200,getmaxx(),200);
	setfillstyle(1,BLUE);
	floodfill(10,10,8);
	line(250,getmaxy(),270,315);
	line(270,315,0,230);
	line(390,getmaxy(),370,320);
	line(370,320,getmaxx(),230);
	line(50,200,315,270);
	line(315,270,getmaxx()-50,200);
	setfillstyle(1,8);
	floodfill(320,280,8);

	circle(420,55,25);
	setfillstyle(1,YELLOW);
	floodfill(420,55,8);

	line(0,200,120,120);
	line(120,120,240,200);

	line(165,150,220,125);
	line(220,125,320,200);
	line(265,160,320,130);
	line(320,130,405,170);

	line(360,200,480,120);
	line(480,120,600,200);
	line(535,155,575,125);
	line(575,125,650,160);

	setfillstyle(1,BROWN);
	for(int b=100;b<=600;b+=50)
	floodfill(b,180,8);

	setcolor(WHITE);
	setfillstyle(1,WHITE);
	rectangle(317,330,327,360);
	floodfill(320,335,WHITE);
	rectangle(317,390,327,420);
	floodfill(320,400,WHITE);
	rectangle(317,445,327,475);
	floodfill(320,460,WHITE);
	for(int a=213;a<=215;a++)
	line(20,a,50,a+10);
	for(a=229;a<=231;a++)
	line(70,a,100,a+10);
	for(a=243;a<=245;a++)
	line(120,a,150,a+10);
	for(a=257;a<=259;a++)
	line(170,a,200,a+10);
	for(a=270;a<=272;a++)
	line(220,a,250,a+10);

	for(a=288;a<=290;a++)
	line(370,a,400,a-10);
	for(a=274;a<=276;a++)
	line(420,a,450,a-10);
	for(a=259;a<=261;a++)
	line(470,a,500,a-10);
	for(a=244;a<=246;a++)
	line(520,a,550,a-10);
	for(a=229;a<=231;a++)
	line(570,a,600,a-10);

	setcolor(26);
	settextstyle(1,0,4);
	for(int i=20;i<=200;i+=40)
		for(int j=310;j<=460;j+=50)
			outtextxy(i,j,"^");
	for(int k=10;k<=230;k+=40)
		for(int l=335;l<=440;l+=50)
			outtextxy(k,l,"^");
	for(int x=410;x<=getmaxx()-10;x+=40)
		for(int y=310;y<=470;y+=50)
			outtextxy(x,y,"^");
	for(int p=400;p<=getmaxx()-10;p+=40)
		for(int q=335;q<=470;q+=50)
			outtextxy(p,q,"^");
	for(int x1=130;x1<=490;x1+=40)
		outtextxy(x1,195,"^");
	for(int x2=225;x2<=390;x2+=40)
		outtextxy(x2,215,"^");
	outtextxy(305,235,"^");

	setcolor(0);
	rectangle(10,275,100,305);
	circle(30,290,8);
	circle(55,290,8);
	circle(80,290,8);
	rectangle(530,275,getmaxx()-10,305);
	circle(555,290,8);
	circle(580,290,8);
	circle(605,290,8);

	setfillstyle(1,7);
	floodfill(12,292,0);
	floodfill(532,277,0);

	delay(500);
	setfillstyle(1,RED);
	floodfill(30,290,0);
	floodfill(605,290,0);
	delay(500);
	setfillstyle(1,YELLOW);
	floodfill(55,290,0);
	floodfill(580,290,0);
	delay(500);
	setfillstyle(1,26);
	floodfill(80,290,0);
	floodfill(555,290,0);
	delay(500);
	cleardevice();
	settextstyle(0,0,0);
	setfillstyle(1,0);
	setcolor(15);
	}

void loader()
	{
	pre_loader();
	setcolor(17);
	rectangle(0,0,getmaxx(),getmaxy());
	setfillstyle(1,17);
	floodfill(10,100,17);
	setcolor(YELLOW);
	setfillstyle(1,GREEN);
	fillellipse(160,350,55,35);
	setfillstyle(1,RED);
	fillellipse(460,350,55,35);
	settextstyle(0,0,2);
	outtextxy(433,345,"EXIT");
	setcolor(RED);
	outtextxy(123,345,"START");
	setcolor(4);
	settextstyle(4,0,7);
	outtextxy(50,150,"ROAD FIGHTERS");
	settextstyle(0,0,2);
	setcolor(YELLOW);
	outtextxy(170,240,"Press Start Or Exit");
	settextstyle(0,0,0);
	setlinestyle(0,0,0);
    int button, x, y;
    initmouse();
    showmouseptr();
    getmousepos(&button,&x,&y);

    while(1)
      {
	 getmousepos(&button,&x,&y);
	 if(button==1 && x>105 && x<210 && y>320 && y<385)
		{
		button=-1;
		break;
		}
	 else if(button==1 && x>405 && x<515 && y>320 && y<385)
		{
		button=-1;
		exit(1);
		}
      }
      hidemouseptr();
      cleardevice();
    }