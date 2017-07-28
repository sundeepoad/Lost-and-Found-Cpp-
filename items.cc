/* File: items.cc
   Author: Yasir Afzal
   Description: Contains implementation of functins declared in items.h
*/
#include <iostream>
#include <string>

#include "items.h"

//  Here the function GetItemInfo() is being used to
//  return the information regarding every Item.
//  GetItemInfo has same name, but different implentation for every class


std::string Mobile::GetItemInfo() {
	std::string mob_query;  //  Variable to store characteristics in one string
	obj_ = "mobile";
	std::cout << "\tCOLOR: ";
	std::cin >> color_;
	std::cout << "\tBRAND: ";
	std::cin >> brand_;
	std::cout << "\tMODEL: ";
	std::cin >> model_;
	mob_query = obj_ + ":" + color_ + ":" + brand_ + ":" + model_;
	return mob_query;
}


std::string Bottle::GetItemInfo() {
	std::string bottle_query;  //  Variable to store characteristics in one string
	obj_ = "bottle";
	std::cout << "\tCOLOR: ";
	std::cin >> color_;
	std::cout << "\tBRAND: ";
	std::cin >> brand_;
	std::cout << "\tBOTTLE ID: ";
	std::cin >> bottle_id;
	bottle_query = obj_ + ":" + color_ + ":" + brand_ + ":" + bottle_id;
	return bottle_query;
}


std::string IdCard::GetItemInfo() {
	std::string id_query;  //  Variable to store characteristics in one string
	obj_ = "id";
	std::cout << "\tINSTITUTE: ";
	std::cin >> institute_;
	std::cout << "\tYOUR ID: ";
	std::cin >> id_;
	id_query = obj_ + ":" + institute_ + ":" + id_;
	return id_query;
}


std::string Money::GetItemInfo() {
	std::string money_query;  //  Variable to store characteristics in one string
	obj_ = "money";
	std::cout << "\tAMOUNT: ";
	std::cin >> amount_;
	std::cout << "\tCURRENCY: ";
	std::cin >> currency_;
	money_query = obj_ + ":" + amount_ + ":" + currency_;
	return money_query;
}


std::string Notebook::GetItemInfo() {
	std::string notebook_query;  //  Variable to store characteristics in one string
	obj_ = "notebook";
	std::cout << "\tCOLOR: ";
	std::cin >> color_;
	std::cout << "\tBRAND: ";
	std::cin >> brand_;
	notebook_query = obj_ + ":" + color_ + ":" + brand_;
	return notebook_query;
}


std::string USB::GetItemInfo() {
	std::string usb_query;  //  Variable to store characteristics in one string
	obj_ = "usb";
	std::cout << "\tCOLOR OF USB: ";
	std::cin >> color_;
	std::cout << "\tBRAND OF USB: ";
	std::cin >> brand_;
	std::cout << "\tMEMORY (write integer number) : ";
	std::cin >> memory_;
	usb_query = obj_ + ":" + color_ + ":" + brand_ + ":" + memory_;
	return usb_query;
}


std::string Stationary::GetItemInfo() {
    std::string stationary_query;  //  Variable to store characteristics in one string
	obj_ = "stationary";
	std::cout << "\tTYPE OF PRODUCT: ";
	std::cin >> type_;
	std::cout << "\tCOLOR : ";
	std::cin >> color_;
	std::cout << "\tBRAND: ";
	std::cin >> brand_;
	stationary_query = obj_ + ":" + color_ + ":" + brand_ + ":" + type_;
	return stationary_query;
}


std::string Others::GetItemInfo() {

	std::string other_query;  //  Variable to store characteristics in one string
	std::cout << "\tTYPE OF OBJECT: ";
	std::cin >> obj_;
	std::cout << "\tCOLOR OF OBJECT: ";
	std::cin >> color_;
	std::cout << "\tBRAND OF OBJECT: ";
	std::cin >> brand_;
	other_query = obj_ + ":" + color_ + ":" + brand_;
	return other_query;
}