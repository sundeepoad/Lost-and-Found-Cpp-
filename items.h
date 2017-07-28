/* File: items.h
   Author: Sundeep kumar
   Description: Contains declaration of Several classes and Virtual functions.
*/
#ifndef ITEMS_H_
#define ITEMS_H_

#include <iostream>
#include <string>


//  Using Abstration and Encapsulation
//  Super Base Class
class ItemsLost {
 public:  //  Purely virtual function to be defined in each item class
   virtual std::string GetItemInfo() = 0;  
 
 protected:
   std::string obj_;  //  Variable to be used to determine type of object 
};


class Items : public ItemsLost {
 public:   
   virtual std::string GetItemInfo() = 0;
	
 protected:
   std::string color_, brand_;
};


//  Inherited from Items
class Mobile : public Items {
 public:
   std::string GetItemInfo();

 private:
   std::string model_;
};


//  Inherited from Items
class Bottle : public Items {
 public:
   std::string GetItemInfo();

 private:
   std::string bottle_id;
};


class IdCard : public ItemsLost {
 public:
   std::string GetItemInfo();

 private:
   std::string id_, institute_;
};


class Money : public ItemsLost {
 public:
   std::string GetItemInfo();

 private:
   std::string amount_,currency_;
};


class Notebook : public Items {
 public:
   std::string GetItemInfo();
};


class USB : public Items {
 public:
   std::string GetItemInfo();

 private:
   std::string memory_;
};


class Stationary : public Items {
 public:
   std::string GetItemInfo();
 
 private:
   std::string type_;
};


class Others : public Items {
 public:
   std::string GetItemInfo();

 private:
   std::string item_type;
};


#endif