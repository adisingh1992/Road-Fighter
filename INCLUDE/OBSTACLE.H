void obstacle(int x, int y)
	{
	setcolor(4);
	//Outline
	line(x,y,x,y+55);
	line(x+45,y,x+45,y+55);
	arc(x+22,y+45,205,-25,25);
	line(x+5,y-5,x+40,y-5);
	line(x,y,x+5,y-5);
	line(x+40,y-5,x+45,y);
	setfillstyle(1,YELLOW);
	floodfill(x+20,y+20,4);
	setcolor(0);
	//WindShield
	line(x+11,y+40,x+34,y+40);
	line(x+8,y+50,x+11,y+40);
	line(x+34,y+40,x+37,y+50);
	arc(x+22,y+40,220,-30,17);
	setfillstyle(1,GREEN);
	floodfill(x+20,y+42,0);
	//Back Window
	rectangle(x+10,y,x+35,y+10);
	floodfill(x+15,y+5,0);
	line(x+11,y+38,x+34,y+38);
	line(x+11,y+12,x+11,y+38);
	line(x+35,y+12,x+35,y+38);
	//Left Door
	line(x+4,y+16,x+4,y+36);
	line(x+9,y+20,x+9,y+32);
	line(x+4,y+16,x+9,y+20);
	line(x+4,y+36,x+9,y+32);
	floodfill(x+6,y+25,0);
	//Right Door
	line(x+42,y+16,x+42,y+36);
	line(x+37,y+20,x+37,y+32);
	line(x+42,y+16,x+37,y+20);
	line(x+37,y+32,x+42,y+36);
	floodfill(x+40,y+25,0);
	//Tires
	setcolor(WHITE);
	line(x+47,y+10,x+47,y+20);
	line(x-2,y+10,x-2,y+20);
	line(x+47,y+40,x+47,y+50);
	line(x-2,y+40,x-2,y+50);
	line(x+12,y-6,x+32,y-6);
	}

void obstacle_clear(int x, int y)
	{
	setcolor(8);
	//Outline
	line(x,y,x,y+55);
	line(x+45,y,x+45,y+55);
	arc(x+22,y+45,205,-25,25);
	line(x+5,y-5,x+40,y-5);
	line(x,y,x+5,y-5);
	line(x+40,y-5,x+45,y);
	setfillstyle(1,8);
	floodfill(x+20,y+20,8);
	//BackWindow
	setfillstyle(1,8);
	rectangle(x+10,y,x+35,y+10);
	floodfill(x+20,y+5,8);
	//Tires
	setcolor(8);
	line(x+47,y+10,x+47,y+20);
	line(x-2,y+10,x-2,y+20);
	line(x+47,y+40,x+47,y+50);
	line(x-2,y+40,x-2,y+50);
	line(x+12,y-6,x+32,y-6);
	//Left Door
	line(x+4,y+16,x+9,y+20);
	line(x+4,y+36,x+9,y+32);
	//Right Door
	line(x+42,y+16,x+37,y+20);
	line(x+37,y+32,x+42,y+36);
	}