void vehicle(int x, int y)
	{
	setcolor(0);
	//Top Part
	arc(x+25,y+10,0,180,25);
	line(x,y+10,x,y+60);
	line(x+50,y+10,x+50,y+60);
	//Windshield
	line(x+10,y+25,x+40,y+25);
	line(x+7,y+16,x+10,y+25);
	line(x+40,y+25,x+43,y+16);
	arc(x+25,y+35,50,130,26);
	setfillstyle(1,1);
	floodfill(x+25,y+15,0);
	rectangle(x+12,y+50,x+38,y+60);
	floodfill(x+20,y+55,0);
	//Left Door
	line(x+4,y+28,x+4,y+47);
	line(x+9,y+32,x+9,y+44);
	line(x+4,y+28,x+9,y+32);
	line(x+4,y+47,x+9,y+44);
	floodfill(x+6,y+35,0);
	//Right Door
	line(x+46,y+28,x+46,y+47);
	line(x+41,y+32,x+41,y+44);
	line(x+46,y+28,x+41,y+32);
	line(x+41,y+44,x+46,y+47);
	floodfill(x+42,y+35,0);
	//Roof
	line(x+11,y+30,x+11,y+47);
	line(x+11,y+48,x+39,y+48);
	line(x+39,y+30,x+39,y+47);
	//SideLines
	line(x+2,y,x+2,y+60);
	line(x+48,y,x+48,y+60);
	//Headlights
	setfillstyle(1,YELLOW);
	arc(x+7,y-2,170,80,4);
	floodfill(x+7,y-2,0);
	arc(x+42,y-2,90,0,4);
	floodfill(x+42,y-2,0);
	//Bottom Part
	line(x,y+60,x+8,y+70);
	line(x+8,y+70,x+42,y+70);
	line(x+42,y+70,x+50,y+60);
	//Layout Color
	setfillstyle(1,RED);
	floodfill(x+25,y+30,0);
	//Tires
	setcolor(WHITE);
	line(x+52,y+15,x+52,y+25);
	line(x-2,y+15,x-2,y+25);
	line(x+52,y+45,x+52,y+55);
	line(x-2,y+45,x-2,y+55);
	line(x+15,y+72,x+35,y+72);
	}

void clear(int x, int y)
	{
	setcolor(8);
	setfillstyle(1,8);
	floodfill(x+5,y+5,8);
	line(x,y+6,x,y+60);
	line(x+50,y+6,x+50,y+60);
	line(x+52,y+15,x+52,y+25);
	line(x-2,y+15,x-2,y+25);
	line(x+52,y+45,x+52,y+55);
	line(x-2,y+45,x-2,y+55);
	line(x+15,y+72,x+35,y+72);
	}