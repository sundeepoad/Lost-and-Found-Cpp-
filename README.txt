OOP Group Project

"Lost and Found" Management System:

This project aims to make a "Lost and Found" management system that will help 
users find their lost items more systematically. Users are also allowed 
to add entries of items they find.  

Files included in this project:
items.h
items.cc
manager.h
manager.cc
test_items.cc


The project is developed using g++ compiler in Sublime text. To run the codes one must have a working g++ compiler installed in their System. All of the above files should be in the same folder to run project. 

-Running on windows:

1. Goto command prompt
2. Get inside the project folder using cd folder_name  eg: cd desktop/ cd folder_name
3. Now type "g++ test_items.cc items.cc manager.cc" and press ENTER
an executable file is created in the same directory named "a.exe"
4. On command prompt write a.exe and press ENTER.


-Running on Mac:
1. Goto terminal
2. Get inside the project folder using cd folder_name
3. Now type clang++ test_items.cc items.cc manager.cc and press ENTER
an executable file is created in the same directory named "a.out"
4. On terminal window write ./a.out and press ENTER

NOTE: CLRSCR has different implementation for MAC. Please uncomment the line
in clrscr function in file manager.cc and comment line 18. 

-Interaction:

To interact with the project, user is requested to follow the instructions provided in the screen. 


This is an undergrad semester project so it has few restrictions.
-Restrictions:
1. You must know the properties asked while searching an item.
2. Searching will be successful if you answer the questions correctly, no matter you lie. 
3. One who finds item(s) must wait until the item is searched successfully. 
4. A convention has been made to write all of the specifications in lower case. 
 

Style Guide:
We have used a proper style guide while coding. 'Google C++ Style Guide' for the project.
Style guide link:  https://google.github.io/styleguide/cppguide.html

Developed by:
Sundeep Kumar

