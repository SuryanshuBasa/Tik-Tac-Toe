//#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
//using namespace std;

int i,j;
//int x=35 , y=5;

void clearTiles()
{
		gotoxy(x+8,y+4);
		for(i=0 ; i<5 ; i++)
			for(j=0 ; j<5 ; j++)
			{
				gotoxy(x+8+i,y+4+j);
				printf(" ");	
			}

		gotoxy(x+20+8,y+4);
		for(i=0 ; i<5 ; i++)
			for(j=0 ; j<5 ; j++)
			{
				gotoxy(x+20+8+i,y+4+j);
				printf(" ");	
			}
	
		gotoxy(x+20+20+8,y+4);
		for(i=0 ; i<5 ; i++)
			for(j=0 ; j<5 ; j++)
			{
				gotoxy(x+20+20+8+i,y+4+j);
				printf(" ");	
			}
	///////////////////////////////////////////////
		gotoxy(x+8,y+11+4);
		for(i=0 ; i<5 ; i++)
			for(j=0 ; j<5 ; j++)
			{
				gotoxy(x+8+i,y+11+4+j);
				printf(" ");	
			}

		gotoxy(x+20+8,y+11+4);
		for(i=0 ; i<5 ; i++)
			for(j=0 ; j<5 ; j++)
			{
				gotoxy(x+20+8+i,y+11+4+j);
				printf(" ");	
			}

		gotoxy(x+20+20+8,y+11+4);
		for(i=0 ; i<5 ; i++)
			for(j=0 ; j<5 ; j++)
			{
				gotoxy(x+20+20+8+i,y+11+4+j);
				printf(" ");	
			}
	//////////////////////////////////////////////////
	
		gotoxy(x+8,y+11+11+4);
		for(i=0 ; i<5 ; i++)
			for(j=0 ; j<5 ; j++)
			{
				gotoxy(x+8+i,y+11+11+4+j);
				printf(" ");	
			}

	
	
		gotoxy(x+20+8,y+11+11+4);
		for(i=0 ; i<5 ; i++)
			for(j=0 ; j<5 ; j++)
			{
				gotoxy(x+20+8+i,y+11+11+4+j);
				printf(" ");	
			}

	
		gotoxy(x+20+20+8,y+11+11+4);
		for(i=0 ; i<5; i++)
			for(j=0 ; j<5 ; j++)
			{
				gotoxy(x+20+20+8+i,y+11+11+4+j);
				printf(" ");	
			}
	///////////////////////////////////////////////////////
	return;
}

