/********************************************************************************************************************
* AUTHOR : Ngoc Dang Tran;
* STUDENT ID : 1197865;
* ASSIGNMENT A8: Inheritence
* CLASS : CS1B;
* SECTION : MW: 9:30am - 11:50am;
* DUE DATE : 03/01/2021;
********************************************************************************************************************/

#ifndef PERSONTYPE_H_
#define PERSONTYPE_H_

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class personType
{
private:
	string fName;
	string lName;
	string address;
	double height;
	string dOB;
	char gender;
public:
	personType();		//Default constructor
	personType(string, string);		//Constructor with parameters
	personType(string, string ,string, double, string , char);		//Constructor with parameters
	~personType(); 		//Destructor

	//Setters
	void setfName(string);
	void setlName(string);
	void setAdd(string);
	void setHeight(double);
	void setDOB(string);
	void setGender(char);

	//Getters
	string getfName() const;
	string getlName() const;
	string getAdd() const;
	double getHeight() const;
	string getDOB() const;
	char getGender() const;


	//Prints function
	void print() const;

};
#endif /* PERSONTYPE_H_ */
