#include<iostream>
using namespace std;
#include<conio.h>
#include <windows.h> 
#include <time.h> 
#include<stdio.h>
#include<stdlib.h>
#include<string>


void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);
	    
 }
