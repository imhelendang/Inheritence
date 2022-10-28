/********************************************************************************************************************
* AUTHOR : Ngoc Dang Tran;
* STUDENT ID : 1197865;
* ASSIGNMENT A8: Inheritance
* CLASS : CS1B;
* SECTION : MW: 9:30am - 11:50am;
* DUE DATE : 03/01/2021;
********************************************************************************************************************/

#include "personType.h"


//													Setters
//Function to set fName according to the parameters.
//Postcondition: firstName = firstName
void personType::setfName(string firstName)
{
	fName = firstName;
	return;
}

//Function to set lName according to the parameters.
//Postcondition: lName = lastName
void personType::setlName(string lastName)
{
	lName = lastName;
	return;
}

//Function to set address according to the parameters.
//Postcondition: address = oneAddress
void personType::setAdd(string oneAddress)
{
	address = oneAddress;
	return;
}

//Function to set height according to the parameters.
//Postcondition: height = tall
void personType::setHeight(double tall)
{
	if (tall >= 0)
		height = tall;
	else
		height = 0;
	return;
}

//Function to set dOB according to the parameters.
//Postcondition: dOB = birht
void personType::setDOB(string birth)
{
	dOB = birth;
	return;
}

//Function to set gender according to the parameters.
//Postcondition: gender = fM
void personType::setGender(char fM)
{
	gender = fM;
	return;
}

//													Getters
//Default constructor
personType::personType()
{
	setfName("UNKNWON");
	setlName("UNKNWON");
	setAdd("UNKNWON, UNKNWON");
	setHeight(00);
	setDOB("UNKNWON 00, 0000");
	setGender('X');
}

//Constructor with parameters
personType::personType(string firstName, string lastName)
{
	setfName(firstName);
	setlName(lastName);
	setAdd("UNKNWON, UNKNWON");
	setHeight(00);
	setDOB("UNKNWON 00, 0000");
	setGender('X');
}

//Constructor with parameters
personType::personType(string firstName, string lastName, string oneAddress, double tall, string birth, char fM)
{
	setfName(firstName);
	setlName(lastName);
	setAdd(oneAddress);
	setHeight(tall);
	setDOB(birth);
	setGender(fM);
}

//Destructor
personType::~personType()
{
	cout << "Destructor called.." << endl;
	cout << "Object is deleted." << endl;

}

//Function to return the first name.
//Postcondition: The value of fName is returned.
string personType::getfName() const
{
	return fName;
}

//Function to return the last name.
//Postcondition: The value of lName is returned.
string personType::getlName() const
{
	return lName;
}

//Function to return the address.
//Postcondition: The value of address is returned.
string personType::getAdd() const
{
	return address;
}

//Function to return the height.
//Postcondition: The value of height is returned.
double  personType::getHeight() const
{
	return height;
}

//Function to return the date of birth.
//Postcondition: The value of dOB is returned.
string  personType::getDOB() const
{
	return dOB;
}

//Function to return the gender.
//Postcondition: The value of gender is returned.
char  personType::getGender() const
{
	return gender;
}

//Prints function
//Function to output the first name, last name, address, height, date of birth, gender
//         in the form fName, lName, height, address, dOB, gender.
void  personType::print() const
{
	cout << left;
	cout << "********************************************************************************" << endl;
	cout << "*Full name: " << setw(21) << getfName() + " " + getlName() << setw(47) << right << "*";
	cout << left << "\n*Address: " << setw(30) << getAdd() << setw(40) << right << "*";
	cout << left << "\n*Height: " << setw(10) << getHeight() << setw(61) << right << "*";
	cout << left << "\n*Date of Birth: " << setw(20) << getDOB() << setw(44) << right << "*";
	cout << left << "\n*Gender: " << getGender() << setw(70) << right << "*";
	cout << left << "\n********************************************************************************"<< endl;

}
