//#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
//using namespace std;

int i,j;
int x=35 , y=5;
char a[][5] ={'*', ' ', ' ', ' ', '*',
			' ', '*', ' ','*', ' ',
			' ', ' ', '*',' ', ' ',
			' ', '*', ' ','*', ' ',
			'*', ' ', ' ',' ', '*' };
char b[][5]={'*', '*', '*', '*', '*',
			'*', ' ', ' ',' ', '*',
			'*', ' ', ' ',' ', '*',
			'*', ' ', ' ',' ', '*',
			'*', '*', '*','*', '*' };
void printx(int xcord , int ycord)
{

	if(xcord == x && ycord == y)
	{
		gotoxy(x+8,y+4);
		for(i=0 ; i<5 ; i++)
			for(j=0 ; j<5 ; j++)
			{
				gotoxy(x+8+i,y+4+j);
				printf(" ");	
			}
		gotoxy(x+8,y+4);
		for(i=0 ; i<5 ; i++)
			for(j=0 ; j<5 ; j++)
			{
				gotoxy(x+8+i,y+4+j);
				printf("%c",a[i][j]);	
			}
	}
	else if(xcord == x+20 && ycord == y)
	{
		gotoxy(x+20+8,y+4);
		for(i=0 ; i<5 ; i++)
			for(j=0 ; j<5 ; j++)
			{
				gotoxy(x+20+8+i,y+4+j);
				printf("%c",a[i][j]);	
			}
	}
	
	else if(xcord == x+20+20 && ycord == y)
	{
		gotoxy(x+20+20+8,y+4);
		for(i=0 ; i<5 ; i++)
			for(j=0 ; j<5 ; j++)
			{
				gotoxy(x+20+20+8+i,y+4+j);
				printf("%c",a[i][j]);	
			}
	}
	///////////////////////////////////////////////
	else if(xcord == x && ycord == y+11+1)
	{
		gotoxy(x+8,y+11+4);
		for(i=0 ; i<5 ; i++)
			for(j=0 ; j<5 ; j++)
			{
				gotoxy(x+8+i,y+11+4+j);
				printf("%c",a[i][j]);	
			}
	}
	
	else if(xcord == x+20 && ycord ==y+11+1)
	{
		gotoxy(x+20+8,y+11+4);
		for(i=0 ; i<5 ; i++)
			for(j=0 ; j<5 ; j++)
			{
				gotoxy(x+20+8+i,y+11+4+j);
				printf("%c",a[i][j]);	
			}
	}
	
	else if(xcord == x+20+20 && ycord == y+11+1)
	{
		gotoxy(x+20+20+8,y+11+4);
		for(i=0 ; i<5 ; i++)
			for(j=0 ; j<5 ; j++)
			{
				gotoxy(x+20+20+8+i,y+11+4+j);
				printf("%c",a[i][j]);	
			}
	}
	//////////////////////////////////////////////////
	else if(xcord == x && ycord == y+11+11+2)
	{
		gotoxy(x+8,y+11+11+4);
		for(i=0 ; i<5 ; i++)
			for(j=0 ; j<5 ; j++)
			{
				gotoxy(x+8+i,y+11+11+4+j);
				printf("%c",a[i][j]);	
			}
	}
	
	else if(xcord == x+20 && ycord == y+11+11+2)
	{
		gotoxy(x+20+8,y+11+11+4);
		for(i=0 ; i<5 ; i++)
			for(j=0 ; j<5 ; j++)
			{
				gotoxy(x+20+8+i,y+11+11+4+j);
				printf("%c",a[i][j]);	
			}
	}
	
	else if(xcord == x+20+20 && ycord == y+11+11+2)
	{
		gotoxy(x+20+20+8,y+11+11+4);
		for(i=0 ; i<5; i++)
			for(j=0 ; j<5 ; j++)
			{
				gotoxy(x+20+20+8+i,y+11+11+4+j);
				printf("%c",a[i][j]);	
			}
	}
	///////////////////////////////////////////////////////
	return;
}
void printo(int xcord , int ycord)
{
	if(xcord == x && ycord == y)
	{
		gotoxy(x+8,y+4);
		for(i=0 ; i<5 ; i++)
			for(j=0 ; j<5 ; j++)
			{
				gotoxy(x+8+i,y+4+j);
				printf(" ");	
			}
		gotoxy(x+8,y+4);
		for(i=0 ; i<5 ; i++)
			for(j=0 ; j<5 ; j++)
			{
				gotoxy(x+8+i,y+4+j);
				printf("%c",b[i][j]);	
			}
	}
	else if(xcord == x+20 && ycord == y)
	{
		gotoxy(x+20+8,y+4);
		for(i=0 ; i<5 ; i++)
			for(j=0 ; j<5 ; j++)
			{
				gotoxy(x+20+8+i,y+4+j);
				printf("%c",b[i][j]);	
			}
	}
	
	else if(xcord == x+20+20 && ycord == y)
	{
		gotoxy(x+20+20+8,y+4);
		for(i=0 ; i<5 ; i++)
			for(j=0 ; j<5 ; j++)
			{
				gotoxy(x+20+20+8+i,y+4+j);
				printf("%c",b[i][j]);	
			}
	}
	///////////////////////////////////////////////
	else if(xcord == x && ycord == y+11+1)
	{
		gotoxy(x+8,y+11+4);
		for(i=0 ; i<5 ; i++)
			for(j=0 ; j<5 ; j++)
			{
				gotoxy(x+8+i,y+11+4+j);
				printf("%c",b[i][j]);	
			}
	}
	
	else if(xcord == x+20 && ycord ==y+11+1)
	{
		gotoxy(x+20+8,y+11+4);
		for(i=0 ; i<5 ; i++)
			for(j=0 ; j<5 ; j++)
			{
				gotoxy(x+20+8+i,y+11+4+j);
				printf("%c",b[i][j]);	
			}
	}
	
	else if(xcord == x+20+20 && ycord == y+11+1)
	{
		gotoxy(x+20+20+8,y+11+4);
		for(i=0 ; i<5 ; i++)
			for(j=0 ; j<5 ; j++)
			{
				gotoxy(x+20+20+8+i,y+11+4+j);
				printf("%c",b[i][j]);	
			}
	}
	//////////////////////////////////////////////////
	else if(xcord == x && ycord == y+11+11+2)
	{
		gotoxy(x+8,y+11+11+4);
		for(i=0 ; i<5 ; i++)
			for(j=0 ; j<5 ; j++)
			{
				gotoxy(x+8+i,y+11+11+4+j);
				printf("%c",b[i][j]);	
			}
	}
	
	else if(xcord == x+20 && ycord == y+11+11+2)
	{
		gotoxy(x+20+8,y+11+11+4);
		for(i=0 ; i<5 ; i++)
			for(j=0 ; j<5 ; j++)
			{
				gotoxy(x+20+8+i,y+11+11+4+j);
				printf("%c",b[i][j]);	
			}
	}
	
	else if(xcord == x+20+20 && ycord == y+11+11+2)
	{
		gotoxy(x+20+20+8,y+11+11+4);
		for(i=0 ; i<5 ; i++)
			for(j=0 ; j<5 ; j++)
			{
				gotoxy(x+20+20+8+i,y+11+11+4+j);
				printf("%c",b[i][j]);	
			}
	}
	///////////////////////////////////////////////////////
	return;
}

