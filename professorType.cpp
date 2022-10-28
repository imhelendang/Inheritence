#include "professorType.h"
#include "personType.h"

//											Constructors
professorType::professorType():personType()
{
	eID = "UNKNOWN";
	dp = "UNKNOWN";
	degree = "UNKNOWN";
}

//           						fName,             lName//
professorType::professorType(string firstName, string lastName)
			:personType(firstName, lastName)
{
	setEID("UNKNOWN");
	setDP("UNKNOWN");
	setDegree("UNKNOWN");
}

//Constructor with parameters
professorType::professorType(string firstName, string lastName, string oneAddress, double tall, string birth, char fM
   	   	   ,  string employeeID, string depart, string dips)
						:personType(firstName, lastName, oneAddress, tall, birth, fM)
{
	setEID(employeeID);
	setDP(depart);
	setDegree(dips);
}

//												Setters
//Function to set employee ID according to the parameters.
//Postcondition: eID = employeeID
void professorType::setEID(string employeeID)
{
	eID = employeeID;
}

//Function to set name of department according to the parameters.
//Postcondition: dp = depart
void professorType::setDP(string depart)
{
	dp = depart;
}

//Function to set name of degrees according to the parameters.
//Postcondition: degree = dips
void professorType::setDegree(string dips)
{
	degree = dips;
}

//												Getters
//Function to return the employee ID.
//Postcondition: The value of eID is returned.
string professorType::getEID() const
{
	return eID;
}

//Function to return the name of department.
//Postcondition: The value of dp is returned.
string professorType::getDP() const
{
	return dp;
}

//Function to return the name of degree(s).
//Postcondition: The value of degree is returned.
string professorType::getDegree() const
{
	return degree;
}

//											Methods
//Prints function
//Function to output the first name, last name, address, height, dob, gender, employeeID, department, degree
void professorType::print() const
{
	cout << left;
	personType::print();
	cout << left << "*Number ID:  " << setw(10) << getEID() << setw(57) << right << "*";
	cout << left << "\n*Department: " << setw(29) << getDP() << setw(38) << right << "*";
	cout << left << "\n*Degree(s): " << setw(24) << getDegree() << setw(44) << right << "*";
	cout << left << "\n********************************************************************************" << endl << endl;
}

//Equals function
bool professorType::equals(string type) const
{
	bool set = false;
	return set;
}
