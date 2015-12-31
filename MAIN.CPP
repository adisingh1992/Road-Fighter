#include<iostream.h>
#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
#include<loading.h>
#include<obstacle.h>
#include<gearbox.h>
#include<layout.h>
#include<car.h>

void accident();

void main()
	{
	int x=250, y=350, i, choice, roadx;
	int gdriver = DETECT, gmode;
	speed=15, nos_count=0;
	initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
	loader();//printing the scenery
	speed_layout(); //printing layout for the speed-o-meter
	layout(); //printing the road layout
	vehicle(x, y); //printing the vehicles initial value
	road(); //printing the footpath layout
	getch();
		while(1)
			{
			needle_clear();
			roadx=0;
			gearbox();
			if(nos_count==0 && speed==0)
				speed=15;
			int y1=0,x1=200+(rand()%4*50); //initialising x & y axis for obstacles
			int y2=0,x2=200+(rand()%4*50); //initialising x & y axis for obstacles
			int y3=0,x3=200+(rand()%4*50); //initialising x & y axis for obstacles
			while(y1<getmaxy()+15)
				{
				needle();
				if(roadx%5==0)
					road();
				roadx++;
				obstacle_clear(x1,y1); //function to clear obstacles
				obstacle_clear(x2,y2); //function to clear obstacles
				obstacle_clear(x3,y3); //function to clear obstacles
				y1+=10;
				y2+=10;
				y3+=10;
				obstacle(x1,y1);    //function to call obstacles
				obstacle(x2,y2);    //function to call obstacles
				obstacle(x3,y3);    //function to call obstacles
				vehicle(x,y);  //function to call our vehicle
				delay(speed);
				if(kbhit())
					{
					vehicle(x,y);  //function to call our vehicle
					choice=getch();
					switch(choice)
						{
						case 120: needle_clear();
							  speed=0;
							  nos_count=5;
							  gearbox();
							  break;
						case 27: exit(0);
						case 75: clear(x,y);  //function to clear our vehicle
							 if(x>200)
								x=x-50;
							   if((x==x1)||(x==x2)||(x==x3))
							   if( ( ((y-y1)<100)&&((y-y1)>0) ) || ( ((y-y2)<100)&&((y-y2)>0)) || ( ((y-y3)<100)&&((y-y3)>0)))
								{
									accident();
								}
							 vehicle(x,y);  //function to call our vehicle
							 break;
						case 77: clear(x,y);  //function to clear our vehicle
							 if(x<350)
								x=x+50;
							   if((x==x1)||(x==x2)||(x==x3))
							   if( ( ((y-y1)<100)&&((y-y1)>0) ) || ( ((y-y2)<100)&&((y-y2)>0)) || ( ((y-y3)<100)&&((y-y3)>0)))
								{
									accident();
								}
							 vehicle(x,y);  //function to call our vehicle
							 break;
						case 72: clear(x,y);  //function to clear our vehicle
							 needle_clear();
							 if(speed<=5)
								speed=5;
							 else
								speed-=5;
							 vehicle(x,y);  //function to call our vehicle
							 break;
						case 80: clear(x,y);  //function to clear our vehicle
							 needle_clear();
							 if(speed>=20)
								speed=25;
							 else
								speed+=5;
							 vehicle(x,y);  //function to call our vehicle
							 break;
						} //end of switch
					} // end of if(kbhit)
					if((x==x1)||(x==x2)||(x==x3))
							   if( ( ((y-y1)<100)&&((y-y1)>0) ) || ( ((y-y2)<100)&&((y-y2)>0)) || ( ((y-y3)<100)&&((y-y3)>0)))
								{
								    accident();
								}
				} // end of inner-while
				nos_count--;
		     } // end of outer-while
	} // end of main

void accident()
	{
	cleardevice();
	int choice;
	setcolor(4);
	settextstyle(3,0,5);
	outtextxy(getmaxx()/2-60,getmaxy()/2-50,"BOOM..!!");
	outtextxy(50,getmaxy()/2,"THAT WAS A NASTY CRASH");
	settextstyle(2,0,5);
	setcolor(15);
	outtextxy(190,350,"Press 'C' To Continue OR 'E' To Exit");
	choice=getch();
	if(choice=='c'||choice=='C')
		main();
	else if(choice=='e'||choice=='E')
		exit(1);
	else
		accident();
}