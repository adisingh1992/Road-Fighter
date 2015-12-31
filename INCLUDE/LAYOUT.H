int position=0;
void layout()
	{
	int i;
	setcolor(BLUE);
	rectangle(194,0,405,478);
	setfillstyle(SOLID_FILL,8);
	floodfill(196,10,BLUE);
	outtextxy(0,80,"Press x To Activate NOS");
	outtextxy(0,120,"Press Up & Down Arrow");
	outtextxy(0,130,"Keys To Change Gears");
	//Road
	rectangle(185,0,415,478);
	for(i=0;i<getmaxy()-20;i+=40)
		{
		line(185,i,194,i);
		line(405,i,415,i);
		}
	}

void road()
	{
	setcolor(BLUE);
	int i,j;

	if(position==0)
		{
		//Left Side
		setfillstyle(2,9);
		for(i=65;i<=475;i+=80)
			floodfill(190,i,BLUE);
		setfillstyle(2,4);
		for(j=25;j<=475;j+=80)
			floodfill(190,j,BLUE);
		//Right Side
		setfillstyle(2,9);
		for(i=65;i<=475;i+=80)
			floodfill(410,i,BLUE);
		setfillstyle(2,4);
		for(j=25;j<=475;j+=80)
			floodfill(410,j,BLUE);
		position=1;
		}
	else if(position==1)
		{
		//Left Side
		setfillstyle(2,9);
		for(i=25;i<=475;i+=80)
			floodfill(190,i,BLUE);
		setfillstyle(2,4);
		for(j=65;j<=475;j+=80)
			floodfill(190,j,BLUE);
		//Right Side
		setfillstyle(2,9);
		for(i=25;i<=475;i+=80)
			floodfill(410,i,BLUE);
		setfillstyle(2,4);
		for(j=65;j<=475;j+=80)
			floodfill(410,j,BLUE);
		position=0;
		}
	}
	
