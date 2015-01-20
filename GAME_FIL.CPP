#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<DOS.h>
#include<fstream.h>
#include<string.h>

/////*************************************************///////////


class point
{
	friend block;
	public:
	int x,y;
	void ppoint(int a,int b)
	{
	 x=a;
	 y=b;
	}
};

/////*************************************************///////////

int total=0;


struct score
{
 int scr;
 char name[15];
};

/////*************************************************///////////

int filerecords=0;

class block
{     public:
	block *t,*d,*l,*r;
	point tl,tr,dl,dr;

	void create();
};

/////*************************************************///////////

block mes[25];

void block::create()
{
	mes[0].t=0 ;
	mes[0].d=0 ;
	mes[0].l=0;
	mes[0].r=&mes[1] ;
	mes[0].tl.ppoint(50,50) ;
	mes[0].tr.ppoint(100,50) ;
	mes[0].dl.ppoint(50,100) ;
	mes[0].dr.ppoint(100,100) ;

	/////////////////////////

	mes[1].t=0 ;
	mes[1].d=0 ;
	mes[1].l=&mes[0];
	mes[1].r=&mes[2] ;
	mes[1].tl.ppoint(100,50) ;
	mes[1].tr.ppoint(150,50) ;
	mes[1].dl.ppoint(100,100) ;
	mes[1].dr.ppoint(150,100) ;

	/////////////////////////

	mes[2].t=0 ;
	mes[2].d=&mes[6] ;
	mes[2].l=&mes[1];
	mes[2].r=&mes[3] ;
	mes[2].tl.ppoint(150,50) ;
	mes[2].tr.ppoint(200,50) ;
	mes[2].dl.ppoint(150,100) ;
	mes[2].dr.ppoint(200,100) ;

	/////////////////////////

	mes[3].t=0 ;
	mes[3].d=&mes[8] ;
	mes[3].l=&mes[2];
	mes[3].r=&mes[4] ;
	mes[3].tl.ppoint(200,50) ;
	mes[3].tr.ppoint(250,50) ;
	mes[3].dl.ppoint(200,100) ;
	mes[3].dr.ppoint(250,100) ;

	/////////////////////////

	mes[4].t=0 ;
	mes[4].d=&mes[9] ;
	mes[4].l=&mes[3];
	mes[4].r=0 ;
	mes[4].tl.ppoint(250,50) ;
	mes[4].tr.ppoint(300,50) ;
	mes[4].dl.ppoint(250,100) ;
	mes[4].dr.ppoint(300,100) ;

	/////////////////////////

	mes[5].t=0 ;
	mes[5].d=&mes[10] ;
	mes[5].l=0;
	mes[5].r=&mes[6] ;
	mes[5].tl.ppoint(50,100) ;
	mes[5].tr.ppoint(100,100) ;
	mes[5].dl.ppoint(50,150) ;
	mes[5].dr.ppoint(100,150) ;

	/////////////////////////

	mes[6].t=&mes[1] ;
	mes[6].d=&mes[11] ;
	mes[6].l=&mes[5];
	mes[6].r=&mes[7] ;
	mes[6].tl.ppoint(100,100) ;
	mes[6].tr.ppoint(150,100) ;
	mes[6].dl.ppoint(100,150) ;
	mes[6].dr.ppoint(150,150) ;

	/////////////////////////

	mes[7].t=0 ;
	mes[7].d=0 ;
	mes[7].l=&mes[6];
	mes[7].r=&mes[8] ;
	mes[7].tl.ppoint(150,100) ;
	mes[7].tr.ppoint(200,100) ;
	mes[7].dl.ppoint(150,150) ;
	mes[7].dr.ppoint(200,150) ;

	/////////////////////////

	mes[8].t=&mes[3] ;
	mes[8].d=&mes[13] ;
	mes[8].l=&mes[7];
	mes[8].r=0 ;
	mes[8].tl.ppoint(200,100) ;
	mes[8].tr.ppoint(250,100) ;
	mes[8].dl.ppoint(200,150) ;
	mes[8].dr.ppoint(250,150) ;

	/////////////////////////

	mes[9].t=&mes[4] ;
	mes[9].d=&mes[14] ;
	mes[9].l=0;
	mes[9].r=0 ;
	mes[9].tl.ppoint(250,100) ;
	mes[9].tr.ppoint(300,100) ;
	mes[9].dl.ppoint(250,150) ;
	mes[9].dr.ppoint(300,150) ;

	/////////////////////////

	mes[10].t=&mes[5] ;
	mes[10].d=0 ;
	mes[10].l=0;
	mes[10].r=0 ;
	mes[10].tl.ppoint(50,150) ;
	mes[10].tr.ppoint(100,150) ;
	mes[10].dl.ppoint(50,200) ;
	mes[10].dr.ppoint(100,200) ;

	/////////////////////////

	mes[11].t=&mes[6] ;
	mes[11].d=&mes[16] ;
	mes[11].l=0;
	mes[11].r=0 ;
	mes[11].tl.ppoint(100,150) ;
	mes[11].tr.ppoint(150,150) ;
	mes[11].dl.ppoint(100,200) ;
	mes[11].dr.ppoint(150,200) ;

	/////////////////////////

	mes[12].t=0 ;
	mes[12].d=&mes[17] ;
	mes[12].l=0;
	mes[12].r=0 ;
	mes[12].tl.ppoint(150,150) ;
	mes[12].tr.ppoint(200,150) ;
	mes[12].dl.ppoint(150,200) ;
	mes[12].dr.ppoint(200,200) ;

	/////////////////////////

	mes[13].t=&mes[8] ;
	mes[13].d=&mes[18] ;
	mes[13].l=0;
	mes[13].r=0 ;
	mes[13].tl.ppoint(200,150) ;
	mes[13].tr.ppoint(250,150) ;
	mes[13].dl.ppoint(200,200) ;
	mes[13].dr.ppoint(250,200) ;

	/////////////////////////

	mes[14].t=&mes[9] ;
	mes[14].d=&mes[19] ;
	mes[14].l=0;
	mes[14].r=0 ;
	mes[14].tl.ppoint(250,150) ;
	mes[14].tr.ppoint(300,150) ;
	mes[14].dl.ppoint(250,200) ;
	mes[14].dr.ppoint(300,200) ;

	/////////////////////////

	mes[15].t=0 ;
	mes[15].d=&mes[20] ;
	mes[15].l=0;
	mes[15].r=&mes[16] ;
	mes[15].tl.ppoint(50,200) ;
	mes[15].tr.ppoint(100,200) ;
	mes[15].dl.ppoint(50,250) ;
	mes[15].dr.ppoint(100,250) ;

	/////////////////////////

	mes[16].t=&mes[11] ;
	mes[16].d=&mes[21] ;
	mes[16].l=&mes[15];
	mes[16].r=0 ;
	mes[16].tl.ppoint(100,200) ;
	mes[16].tr.ppoint(150,200) ;
	mes[16].dl.ppoint(100,250) ;
	mes[16].dr.ppoint(150,250) ;

	/////////////////////////

	mes[17].t=&mes[12] ;
	mes[17].d=&mes[22] ;
	mes[17].l=0;
	mes[17].r=0 ;
	mes[17].tl.ppoint(150,200) ;
	mes[17].tr.ppoint(200,200) ;
	mes[17].dl.ppoint(150,250) ;
	mes[17].dr.ppoint(200,250) ;

	/////////////////////////

	mes[18].t=&mes[13] ;
	mes[18].d=&mes[23];
	mes[18].l=0;
	mes[18].r=0 ;
	mes[18].tl.ppoint(200,200) ;
	mes[18].tr.ppoint(250,200) ;
	mes[18].dl.ppoint(200,250) ;
	mes[18].dr.ppoint(250,250) ;

	/////////////////////////

	mes[19].t=&mes[14] ;
	mes[19].d=0 ;
	mes[19].l=0;
	mes[19].r=0 ;
	mes[19].tl.ppoint(250,200) ;
	mes[19].tr.ppoint(300,200) ;
	mes[19].dl.ppoint(250,250) ;
	mes[19].dr.ppoint(300,250) ;

	/////////////////////////

	mes[20].t=&mes[15] ;
	mes[20].d=0 ;
	mes[20].l=0;
	mes[20].r=0 ;
	mes[20].tl.ppoint(50,250) ;
	mes[20].tr.ppoint(100,250) ;
	mes[20].dl.ppoint(50,300) ;
	mes[20].dr.ppoint(100,300) ;

	/////////////////////////

	mes[21].t=&mes[16] ;
	mes[21].d=0 ;
	mes[21].l=0;
	mes[21].r=&mes[22] ;
	mes[21].tl.ppoint(100,250) ;
	mes[21].tr.ppoint(150,250) ;
	mes[21].dl.ppoint(100,300) ;
	mes[21].dr.ppoint(150,300) ;

	/////////////////////////

	mes[22].t=&mes[17] ;
	mes[22].d=0 ;
	mes[22].l=&mes[21];
	mes[22].r=0 ;
	mes[22].tl.ppoint(150,250) ;
	mes[22].tr.ppoint(200,250) ;
	mes[22].dl.ppoint(150,300) ;
	mes[22].dr.ppoint(200,300) ;

	/////////////////////////

	mes[23].t=&mes[18] ;
	mes[23].d=0 ;
	mes[23].l=0;
	mes[23].r=&mes[24] ;
	mes[23].tl.ppoint(200,250) ;
	mes[23].tr.ppoint(250,250) ;
	mes[23].dl.ppoint(200,300) ;
	mes[23].dr.ppoint(250,300) ;

	/////////////////////////

	mes[24].t=0 ;
	mes[24].d=0 ;
	mes[24].l=&mes[23];
	mes[24].r=0 ;
	mes[24].tl.ppoint(250,250) ;
	mes[24].tr.ppoint(300,250) ;
	mes[24].dl.ppoint(250,300) ;
	mes[24].dr.ppoint(300,300) ;

	/////////////////////////

}
/////*************************************************///////////

//////////////////////////////////
void defaultfile()
{
  fstream f;
  f.open("game.dat",ios::out|ios::in|ios::binary);
  score s;
  s.scr=0;
  strcpy(s.name,"XYZ");
  total=0;
  f.seekp(0,ios::beg);
  f.write((char *)&total,sizeof(total));
  for(int i=0;i<10;i++)
  {
	f.seekp(sizeof(s)*i+sizeof(total),ios::beg);
	f.write((char *)&s,sizeof(s));

  }
  f.close();
}
//////////////////////////////////

void loading()
{
	int gd=DETECT,gm=0;
	clrscr();
	initgraph(&gd,&gm," ");
	double i ;
	int a,b,x,y,c,d;
	x=getmaxx();
	y=getmaxy();
	i=0;
	a=0;
	b=9;
	x=x/2;
	y=y/2;

	while(i<1440)
       {
	if(b==8)
	cleardevice();

	circle(x,y,50) ;
	circle(x,y,40) ;
	arc(x,y,a,b,41);
	arc(x,y,a,b,42) ;
	arc(x,y,a,b,43)  ;
	arc(x,y,a,b,44)   ;
	arc(x,y,a,b,45)     ;
	arc(x,y,a,b,46)      ;
	arc(x,y,a,b,47)       ;
	arc(x,y,a,b,48)        ;
	arc(x,y,a,b,49)         ;
	i++;
	a++;
	b++;
	if(a==360)
	a=0;
	if(b==360)
	{
	b=0;
	delay(100);
	}

	gotoxy(34,20);
	cout<<"Loading Game .....";
	delay(5);
	}
	closegraph();


}

/////*************************************************///////////

void linedr(point *a,point *b)
{
	int x1,x2,y1,y2;
	x1=a->x;
	y1=a->y;
	x2=b->x;
	y2=b->y;
	line(x1,y1,x2,y2);
}

/////*************************************************///////////

void mescrt()
{
  block *p;
  for(int i=0;i<25;i++)
  {
	p=&mes[i];
	if(p->t==0)
	linedr(&p->tl,&p->tr);
	if(p->d==0)
	linedr(&p->dl,&p->dr);
	if(p->l==0)
	linedr(&p->tl,&p->dl);
	if(p->r==0)
	linedr(&p->tr,&p->dr);

  }
}

/////*************************************************///////////

void cross(point *a,point *b,point *c,point *d)
{
	int x1,x2,x3,x4,y1,y2,y3,y4;
	x1=a->x+10;
	y1=a->y+10;
	x2=b->x-10;
	y2=b->y+10;
	x3=c->x+10;
	y3=c->y-10;
	x4=d->x-10;
	y4=d->y-10;
	line(x1,y1,x4,y4);
	line(x2,y2,x3,y3);
}

/////*************************************************///////////

void dispplayer(block *p)
{
 cross(&p->tl,&p->tr,&p->dl,&p->dr);
}

/////*************************************************///////////

void insertfile(score s)
{
	fstream f;
	f.open("game.dat",ios::in|ios::out|ios::binary);
	f.seekg(0,ios::beg);
	f.read((char *)&total,sizeof(total));

	total++;
	if(total==10)
	{
		cout<<"\nRecord full!!!!! Deleting the records.....";
		defaultfile();
	}
	f.seekp(0,ios::beg);
	f.write((char *)&total,sizeof(total));
	f.seekp(sizeof(total)+sizeof(s)*total,ios::beg);
	f.write((char *)&s,sizeof(s));
	cout<<"\nScores in DataBase::";
	for(int i=1;i<total;i++)
	{
	 f.seekg(sizeof(total)+i*sizeof(s),ios::beg);
	 f.read((char *)&s,sizeof(s));
	 cout<<"\nName ::"<<s.name<<"\tScore::"<<s.scr;

	}
	getch();
	f.close();

}
int cnt=0,flag=0;

/////*************************************************///////////

void main()
{
	int gd=DETECT,gm=0;
	fstream f;
	cout<<"\n\t\tPlay Using NumPad:\n\n\t\t\t 8(up)\n\t\t 4(left)         6(right)\n\t\t\t 2(down)\n";
	cout<<"\n\n\t\tPress X to stop during play";
	f.open("game.dat",ios::in|ios::out|ios::binary);
	f.seekg(0,ios::beg);
	f.read((char *)&total,sizeof(total));
	cout<<"\n\n\t\tPress any key :: ";
	if(total==0)
	defaultfile();
	getch();
 xyz:	loading();
	initgraph(&gd,&gm," ");
	block *p,a;
	a.create();
	p=&mes[0];

	while(p!=&mes[24])
	{
		cleardevice();
		mescrt();
		dispplayer(p) ;
		gotoxy(8,5);
		cout<<"Start";
		gotoxy(33,18);
		cout<<"End";
		int i;
		i=getch();
		if(cnt==8)
		flag=1;
		if(cnt<8&&flag==0)
		cnt++;
		else
		cnt--;
		if(i==120||i==88)
		break;
		if(i==50&&p->d!=0)
		{
			p=p->d;
			continue;
		}
		if(i==52&&p->l!=0)
		{
			p=p->l;
			continue;
		}
		if(i==54&&p->r!=0)
		{
			p=p->r;
			continue;
		}
		if(i==56&&p->t!=0)
		{
			p=p->t;
			continue;
		}
	}
	closegraph();
	if(p==&mes[24])

	cout<<"\n...:::YOU WON:::...\n\nYour Score is::"<<cnt*100;
	if(cnt==8)
	cout<<"\nCongo... Your Score is highest!!!!\n";
	cout<<"\nInserting Record to DataBase....\nEnter your Name :: ";
	score s;
	cin>>s.name;
	s.scr=cnt*100;
	insertfile(s);
	cout<<"\nPress R to play again .....";
	char ch;
	ch=getch();
	if(ch=='R'||ch=='r')
	{
	cnt=0;
	flag=0;
	goto xyz;
	}

}