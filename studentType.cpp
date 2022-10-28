#include "studentType.h"
#include "personType.h"

//											Constructors
studentType::studentType():personType()
{
	id = "UNKNOWN";
	gpa = 0;
	classification = "UNKNOWN";
}

//           fName, lName//
studentType::studentType(string firstName, string lastName)
			:personType(firstName, lastName)
{
	setID("EMPTY");
	setGPA(0);
	setClassification("EMPTY");
}

//Constructor with parameters
studentType::studentType(string firstName, string lastName, string oneAddress, double tall, string birth, char fM
   	   	   , double gPA, string classi, string numID)
						:personType(firstName, lastName, oneAddress, tall, birth, fM)
{
	setID(numID);
	setGPA(gPA);
	setClassification(classi);
}

//												Setters
//Function to set GPA according to the parameters.
//Postcondition: gpa = gPA
void studentType::setGPA(double gPA)
{
	gpa = gPA;
}

//Function to set id according to the parameters.
//Postcondition: id = numID
void studentType::setID(string numID)
{
	id = numID;
}

//Function to set classification according to the parameters.
//Postcondition: classification = classi
void studentType::setClassification(string classi)
{
	classification = classi;
}

//												Getters
//Function to return the gpa.
//Postcondition: The value of gpa is returned.
double studentType::getGPA() const
{
	return gpa;
}

//Function to return the number ID.
//Postcondition: The value of id is returned.
string studentType::getID() const
{
	return id;
}

//Function to return the classification (fresh man/ junior/ senior).
//Postcondition: The value of classification is returned.
string studentType::getClassification() const
{
	return classification;
}

//											Methods
//Prints function
//Function to output the first name, last name, GPA, classification, number ID according to the form
void studentType::print() const
{
	cout << left;
	personType::print();
	cout << left << "*Number ID:  " << setw(10) << getID() << setw(57) << right << "*";
	cout << left << "\n*GPA: " << setw(16) << getGPA() << setw(58) << right << "*";
	cout << left << "\n*Classification: " << setw(19) << getClassification() << setw(44) << right << "*";
	cout << left << "\n********************************************************************************" << endl << endl;
}

//Equals function
//Function to compare the 2 students to each other
//
bool studentType::equals(const studentType other[], const int num) const
{
	bool set = false;

	if(getGPA() < other[num].getGPA())
		set = true;

	return set;
}
