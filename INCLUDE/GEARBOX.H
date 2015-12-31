int speed,nos_count;
void speed_layout()
	{
	setcolor(15);
	outtextxy(540,145,"20");
	outtextxy(600,185,"40");
	outtextxy(620,240,"60");
	outtextxy(600,295,"80");
	outtextxy(535,330,"100");
	circle(540,240,5);
	floodfill(540,242,WHITE);
	setcolor(RED);
	arc(540,240,270,90,100);
	}

void needle()
	{
	setcolor(YELLOW);
	if(speed==20)
		line(540,240,540,160);
	else if(speed==15)
		line(540,240,600,195);
	else if(speed==10)
		line(540,240,615,240);
	else if(speed==5)
		line(540,240,595,290);
	else if(speed==0)
		line(540,240,540,320);
	}

void needle_clear()
	{
	setcolor(0);
	if(speed==20)
		line(540,240,540,160);
	else if(speed==15)
		line(540,240,600,195);
	else if(speed==10)
		line(540,240,615,240);
	else if(speed==5)
		line(540,240,595,290);
	else if(speed==0)
		line(540,240,540,320);
	}

void clear_gearbox()
	{
	int i;
	char temp[1];
	setcolor(0);
	settextstyle(0,0,5);
	for(i=1;i<=5;i++)
		{
		sprintf(temp,"%d",i);
		outtextxy(getmaxx()-50,20,temp);
		}
	settextstyle(0,0,0);
	}

void gearbox()
	{
	clear_gearbox();
	int g1;
	char gear[10];
	setcolor(RED);
	if(speed==0)
		g1=5;
	else if(speed==5)
		g1=4;
	else if(speed==10)
		g1=3;
	else if(speed==15)
		g1=2;
	else if(speed==20)
		g1=1;
	sprintf(gear,"%d",g1);
	settextstyle(0,0,5);
	outtextxy(getmaxx()-50,20,gear);
	settextstyle(0,0,0);
	}