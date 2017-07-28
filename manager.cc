/* FileL manager.cc  
   Author:  Mohammad Kazim -> Clrscr, Menu and Remove Functions  
		    Sundeep Kumar -> Add and Search
   Description: Functions for running the program and,
   				carrying operations in it are defined.
 */ 
#include <stdio.h>
#include <fstream>  //  For file IO
#include <iostream>
#include <string>

#include "manager.h"
#include "items.h"



void clrscr() {
   system("cls");  //  Clears Screen in Command Line Windows
  /*  system("clear");  */  //  Clear Screen for MAC
}


void Manager::Menu() {
  char ch;
  do {
    clrscr();
    std::cout << "\n\n\n\tLOST AND FOUND MANAGEMENT SYSTEM";
    std::cout << "\n\n\n\tMAIN MENU";
    std::cout << "\n\n\t(1) ADD";
    std::cout << "\n\n\t(2) SEARCH";
    std::cout << "\n\n\t(3) EXIT";
    std::cout << "\n\n\tPlease Select Your Option (1-3) ";  
    std::cin >> ch;

    switch (ch) {

        case '1': {  //  "ADD"
            clrscr();  //  Clears screen before calling Add.
            Add();
            break;
        	}

        case '2':  {  //  "SEARCH"
            clrscr();  //  Clears Screen before going to Search Menu
            Search();
            break;
            }

        case '3':  //  "EXIT"
        	exit(0);
            
        default:  {
        	std::cout<<"\a";
        	}  //  End of switch
    } 
  }
  while(ch != '3');
}


void Manager::Remove(std::string deleteline) {
    std::string line;
    std::ifstream fin;  //  Obj for input file 
    fin.open("temp.txt");  
    std::ofstream temp;
    temp.open("test.txt");	//  open output file
//  Reads every line from input file & write in input file
    while (getline(fin,line)) {  
      if (line != deleteline) {	
        temp << line << std::endl;
      }
    }
    fin.close();
    remove("test.txt");
    rename("test.txt","temp.txt");  //  temp -> to test.txt
    temp.close();
}


std::string Manager::Add() {
    ItemsLost *item;
	int choice;
  	std::ofstream MyFile;
  	MyFile.open("test.txt", std::ios_base::app);  //  Opens file in Append mode
	do {
		std::cout << "\n\n\tWHAT KIND OF ITEM DO YOU WANT TO SEARCH? \n\n";
		std::cout << "\t1. MOBILE\n";
	  	std::cout << "\t2. BOTTLE\n";
	  	std::cout << "\t3. ID CARD\n";
	  	std::cout << "\t4. MONEY\n";
	  	std::cout << "\t5. NOTEBOOK\n";
	  	std::cout << "\t6. USB\n";
	  	std::cout << "\t7. STATIONARY\n";
	    std::cout << "\t8. OTHERS\n";
	    std::cout << "\t9. EXIT TO MAIN MENU\n\n";
	  	std::cout << "\tYOUR CHOICE HERE: ";
		std::cin >> choice;

 		switch (choice) {

		case 1: {  //  Item pointer refers to respective Class Object. 
		  item = new Mobile;  
		  break;
		  }

		case 2: {
		  item = new Bottle;
		  break;
		  }

		case 3: {
		  item = new IdCard;
		  break;
		  }

		case 4: {
		  item = new Money;
		  break;
		  }

		case 5: {
		  item = new Notebook;
		  break;
		  }

		case 6: {
		  item = new USB;
		  break;
		  }

		case 7: {
		  item = new Stationary;
		  break;
		  }

		case 8: {
		  item = new Others;
		  break;
		  }

		case 9: {  //  Menu Function called.
		  Menu();
		  }

		default: {
	      std::cout<<"\tWRITE A CORRECT CHOICE\n";
		  }
	    }

	MyFile << item->GetItemInfo() << std::endl;  // Writes in the file
	std::cout << "\n\tITEM ADDED SUCCESSFULLY" << std::endl;
	std::cout << std::endl << std::endl;
	}
	while (choice > 8 || choice < 1);
	MyFile.close();
	delete item;  //  Pointer Deallocated
 
 //  Options to go to main menu or exit.
	int choose;
	std::cout << "\tWRITE 1 TO GO TO MAIN MENU : \n";
	std::cout << "\tWRITE 0 TO EXIT : ";
	std::cin >> choose;
	if (choose == 1) {
	  Menu();
	}
	else if (choose == 0) {
	  exit(0);
	}
	else {
	  std::cout<<"PLEASE CHOOSE A CORRECT OPTION\n";
	}
}


void Manager::Search() {
  ItemsLost *item; 
  int choice;
  bool flag = false;  //  Flag for stopping unnecessary search
  std::string line,match;	
  do {
      std::cout << "\n\n\tWHAT KIND OF ITEM DO YOU WANT TO SEARCH? \n\n";
	  std::cout << "\t1. MOBILE\n";
	  std::cout << "\t2. BOTTLE\n";
	  std::cout << "\t3. ID CARD\n";
	  std::cout << "\t4. MONEY\n";
	  std::cout << "\t5. NOTEBOOK\n";
	  std::cout << "\t6. USB\n";
	  std::cout << "\t7. STATIONARY\n";
	  std::cout << "\t8. OTHERS\n";
	  std::cout << "\t9. EXIT TO MAIN MENU\n\n";
	  std::cout << "\tYOUR CHOICE HERE: ";
	  std::cin >> choice;
 	
 	  switch (choice) {

	  case 1: {
	    item = new Mobile;
	    break;
		}

      case 2: {
	    item = new Bottle;
		break;
		}

	  case 3: {
	    item = new IdCard;
	    break;
	    }

	  case 4: {
	    item = new Money;
		break;
	    }

	  case 5: {
        item = new Notebook;
	    break;
   	    }

	  case 6: {
        item = new USB;
		break;
		}

	  case 7: {
        item = new Stationary;
	    break;
		  }

	  case 8: {
	    item = new Others;
		break;
		}

	  case 9: {
	  	Menu();
	    }

	  default: {
		std::cout<<"\tPLEASE WRITE A CORRECT CHOICE\n";
		} 
	  }

	  match = item->GetItemInfo();  //  GetItemInfo called for respective class.
  }  //  Do's End bracket
  while (choice > 8 || choice < 1);

  std::ifstream myfile ("test.txt");  //  Opening file to read it. 
  if (myfile.is_open()) {
    while ((getline (myfile,line)) && (flag != true)) {
      if (line == match) {
    		std::cout << "\tYOU FOUND IT \n";
    		flag = true;
    		Remove(match);  //  Remove called when an item is found successfully.
      }
    }
  if (flag != true) {
    std::cout << "\n\tSORRY ITEM NOT FOUND" << std::endl;
  }
}
  myfile.close();
  delete item;  //  Pointer Deallocated.

//  Choice for going to main menu or exit. 
  int choose;
  std::cout << "\n\tWRITE 1 TO GO TO MAIN MENU : \n";
  std::cout << "\tWRITE 0 TO EXIT : ";	
  std::cin >> choose;
  if (choose == 1) {
    Menu();
  }
  else if (choose == 0) {
    exit(0);
  }
  else {
    std::cout << "PLEASE CHOOSE A CORRECT OPTION\n";
  }
}














