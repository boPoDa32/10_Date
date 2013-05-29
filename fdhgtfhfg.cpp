// fdhgtfhfg.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include "Date.h" // include Time class definition

int main()
{
  setlocale(0, "Russian");
	//","АПРЕЛЬ","МАЙ","ИЮНЬ","ИЮЛЬ","АВУСТ","СЕНТЯБРЬ","ОКТЯБРЬ","НОЯБРЬ","ЕКАБРЬ"};
	
   Date wakeUp(2, 28, 2013 ); // non-constant object
   wakeUp.print();
   getch();
} // end main
