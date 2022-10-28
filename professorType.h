#ifndef PROFESSORTYPE_H_
#define PROFESSORTYPE_H_

/********************************************************************************************************************
* AUTHOR : Ngoc Dang Tran;
* STUDENT ID : 1197865;
* ASSIGNMENT A12: Inheritance
* CLASS : CS1B;
* SECTION : MW: 9:30am - 11:50am;
* DUE DATE : 03/17/2021;
********************************************************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
#include "personType.h"

class professorType: public personType
{
public:
   //constructors
	professorType();

   //           fName, lName//
	professorType(string firstName, string lastName);

   //Constructor with paramters
	professorType(string firstName, string lastName, string oneAddress, double tall, string birth, char fM
		   	   	   	   , string employeeID, string depart, string dips);

   //Destructor
   ~professorType() {};


   //setters
   void setEID(string);
   void setDP(string);
   void setDegree(string);

   //getters
   string getEID() const;
   string getDP() const;
   string getDegree() const;

   void print() const; //print method

   bool equals(string) const; //equals method

private:
   string eID; //added every id 'should' be unique
   string dp;
   string degree;
};





#endif /* PROFESSORTYPE_H_ */
