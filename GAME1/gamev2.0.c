#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

#include"box.h"
#include"printfxo.c"
// x = 1 o = 2
int p=35 , q=5;
char ch,CH;
int key =1;
int X=35, Y=5;
int tempX,tempY;
int moves;
int winx = 1 , winy = 1;
int draw=1;
int horizontalx,horizontaly;
int verticalx,verticaly;
int diagonalx,diagonaly;
int restart=2;
int i,j;

char c[3][3];
					
void grid()
{
	int i;
	for(i=0 ; i<35 ; i++)
	{
		gotoxy(p+19,q+i);
		printf("%c",186);
		
		gotoxy(p+19+19+1,q+i);
		printf("%c",186);	
	}
	
	for(i=0 ; i<60 ; i++)
	{
		gotoxy(p+i,q+11);
		printf("%c",205);
		
		gotoxy(p+i,q+11+11+1);
		printf("%c",205);
	}
	gotoxy(p+19,q+11);
	printf("%c",206);
	gotoxy(p+19+19+1,q+11);
	printf("%c",206);
	gotoxy(p+19,q+11+11+1);
	printf("%c",206);
	gotoxy(p+19+19+1,q+11+11+1);
	printf("%c",206);
}


int main()
{
	while(restart)
	{
		grid();
		while(key != 0 && winx !=0 && winy != 0 && moves!=9)
		{
			if(kbhit())
			{
				ch = getch();
				if(ch == 27)
					exit(0);
				moveOrprint(ch);	
			}
			winCheck();
		}
		gotoxy(70,50);
		printf("%d",restart);
		if(!winx)
		{
			gotoxy(60,20);
			printf("X  W I N S");
		}
		else if(!winy)
		{
			gotoxy(60,20);
			printf("O  W I N S");
		}
		else
		{
			gotoxy(60,20);
			printf("D R A W");
		}
		gotoxy(70,50);
		printf("E N T E R  '1'  T O  R E P L A Y  A N D  '0'  T O  E X I T");
		scanf("%d",&restart);
		if(restart == 0)
			exit(0);
		clearBoard();	
		system("cls");
	}
	return 0;
}
void moveOrprint(char ch)  
{
	int key=0;
	switch(ch)
	{
		case 72:{
			key =1;
			tempY = Y;
			Y = Y-12;
			if(Y < 5)
				Y = 5;
			break;
		}
		case 77:{
			key =1;
			tempX = X;
			X = X+20;
			if(X > 35 + 58)
				X = 35;
			break;
		}
		case 75:{
			key =1;
			tempX = X;
			X = X-20;
			if(X < 35)
				X = 35;
			break;
		}
		case 80:{
			key =1;
			tempY = Y;
			Y = Y+12;
			if(Y > 5+34)
				Y = 5;
			break;

		}
		case 'x':{
			printx(X,Y);
			check(X,Y,1);
			break;
		}
		case 'o':{
			printo(X,Y);
			check(X,Y,2);
			break;
		}
		default:{
			key = 0;
			break;
		}
	} // switch
	if(key) // if any arrow key is pressed and location of cannon is updated
	{
		gotoxy(tempX,tempY);
		boxErase(18,10,tempX,tempY);
		gotoxy(X,Y);
		box(18,10,X,Y);
		tempX = X;
		tempY = Y;
	}	
}

void check(int xcord , int ycord , int input)
{
	if(xcord == x && ycord == y)
	{
		c[0][0] = input;
		moves++;
	}	
	else if(xcord == x+20 && ycord == y)
	{
		c[0][1] = input;
		moves++;	
	}	
	else if(xcord == x+20+20 && ycord == y)
	{
		c[0][2] = input;
		moves++;
	}	
	/////////////////////////////////////////
	else if(xcord == x && ycord == y+11+1)
	{
		c[1][0] = input;
		moves++;
	}	
	else if(xcord == x+20 && ycord ==y+11+1)
	{
		c[1][1] = input;
		moves++;
	}	
	else if(xcord == x+20+20 && ycord == y+11+1)
	{
		c[1][2] = input;
		moves++;
	}
//////////////////////////////////////////////
	else if(xcord == x && ycord == y+11+11+2)
	{
		c[2][0] = input;
		moves++;
	}	
	else if(xcord == x+20 && ycord == y+11+11+2)
	{
		c[2][1] = input;
		moves++;
	}
	else if(xcord == x+20+20 && ycord == y+11+11+2)
	{
		c[2][2] = input;
		moves++;
	}		
}

void winCheck()
{
	int i,j;
	
	if(moves >= 3)
	{
		//checking horizontal vertical rows
		for(i=0 ; i<3 ; i++)
		{
			if(c[i][0]== 1 && c[i][1]==1 && c[i][2] ==1)
				horizontalx++;
				
			else if(c[i][0]== 2 && c[i][1]==2 && c[i][2] ==2)
				horizontaly++;
		
			else if(c[0][i]== 1 && c[1][i]==1 && c[2][i] ==1)
				verticalx++;
			
			else if(c[0][i]== 2 && c[1][i]==2 && c[2][i] ==2)
				verticaly++;
		}	
		//checking diagnols
		if(c[0][0] == 1 && c[1][1] == 1 && c[2][2] == 1)
			diagonalx++;
		else if(c[0][0] == 2 && c[1][1] == 2 && c[2][2] == 2)	
			diagonaly++;
		else if(c[0][2] == 1 && c[1][1] == 1 && c[2][0] == 1)
			diagonalx++;
		else if(c[0][2] == 2 && c[1][1] == 2 && c[2][0] == 2)
			diagonaly++;		
			
		if(horizontalx || verticalx || diagonalx)
			winx=0;
		else if(horizontaly || verticaly || diagonaly)
			winy=0;			
	}
	return;
}
void clearBoard()
{
	key =1;
	winx=1;
	winy=1;
	draw = 1;
	moves = 0;
	horizontalx=0;
	horizontaly=0;
	verticalx=0;
	verticaly=0;
	diagonalx=0;
	diagonaly=0;
	for(i=0 ; i<3 ; i++)
		for(j=0 ; j<3 ; j++)
		{
			c[i][j] = 0;
		}
}


