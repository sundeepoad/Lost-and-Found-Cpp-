/*  ALTHOUGH PARTS WERE DIVIDED BUT WE ASLO CONTRIBUTED IN EACH OTHER'S WORK  */
/* File: test_items.cc
   Author: Yasir Afzal
   Description: Includes code for Running the program.
*/
// To change the font color in command line, comment this & (1) out.
/*  #include <windows.h>  */ 
#include <iostream>
#include <string>

#include "items.h"
#include "manager.h"



int main() {
/*  (1)
	//  Handling font colors
   	HANDLE outcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    CONSOLE_FONT_INFOEX font; 
    SetConsoleTextAttribute(outcon, 0x0B);
*/
	Manager man;
	man.Menu();
    return 0;
}
