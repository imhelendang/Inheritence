#include "personType.h"
#include "studentType.h"
#include "professorType.h"

/********************************************************************************************************************
* AUTHOR : Ngoc Dang Tran;
* STUDENT ID : 1197865;
* ASSIGNMENT A8: Inheritance
* CLASS : CS1B;
* SECTION : MW: 9:30am - 11:50am;
* DUE DATE : 03/15/2021;
*********************************************************************************************************************
* Purpose: Create a program that allows the user to create 3 studnet, 2 person and assign values to the following attributes:
*		   first name, last name, address, height, date of birth and gender.
*		   Then, derive a studentType class from the personType class with the following additional attributes.
*********************************************************************************************************************
* Algorithm: After creating the 5 different people, neatly print them.
*********************************************************************************************************************
* Sample:
* Print the information:
********************************************************************************
*First name:                                                              	   *
*Last name:                                                                	   *
*Address:                                        							          			 *
*Height:                                   		                                 *
*Date of Birth:       							                               						 *
*Gender:                                                                       *
********************************************************************************
*GPA:                                        							       							 *
*Classification:                                   		                         *
*ID:       							                                            					 *
*********************************************************************************************************************/

int main()
{
	system("clear");
	//Data table
	string firstName, lastName, oneAddress, birth, classi, numID, employeeId, depart, dips;
	double tall, gPA;
	char fM, discard;
	int x = 0;
	const int NO_STUDENT = 2;
	const int NO_PROFESSOR = 2;
	personType person;
	studentType student[NO_STUDENT];
	professorType professor[NO_PROFESSOR];

	cout << left;
	cout << "Please input information according to the form below!" << endl;
	cout << "For personType:" << endl;
	//Inputting values for personType objects
	cout << "\nFirst Name: ";
	getline(cin, firstName);
	cout << "Last Name: ";
	getline(cin, lastName);
	cout << "Address: ";
	getline(cin, oneAddress);
	cout << "Height: ";
	cin >> tall;
	cin.ignore(1000, '\n');
	cout << "Date of Birth: ";
	getline(cin, birth);
	cout << "Gender: ";
	cin >> fM;
	cin.ignore(1000, '\n');
	person.setfName(firstName);
	person.setlName(lastName);
	person.setAdd(oneAddress);
	person.setHeight(tall);
	person.setDOB(birth);
	person.setGender(fM);

	system("clear");
	cout << "\nFor studentType:" << endl;
	//Inputting values for studentType objects
	for (int index = 0; index < NO_STUDENT; index++)
	{
		cout << "\nFirst Name: ";
		getline(cin, firstName);
		cout << "Last Name: ";
		getline(cin, lastName);
		cout << "Address: ";
		getline(cin, oneAddress);
		cout << "Height: ";
		cin >> tall;
		cin.ignore(1000, '\n');
		cout << "Date of Birth: ";
		getline(cin, birth);
		cout << "Gender: ";
		cin >> fM;
		cin.ignore(1000, '\n');
		cout << "Student ID: ";
		getline(cin, numID);
		cout << "GPA: ";
		cin >> gPA;
		cin.ignore(1000, '\n');
		cout << "Classification (Freshman, Junior, Senior): ";
		getline(cin, classi);
		student[index].setfName(firstName);
		student[index].setlName(lastName);
		student[index].setAdd(oneAddress);
		student[index].setHeight(tall);
		student[index].setDOB(birth);
		student[index].setGender(fM);
		student[index].setGPA(gPA);
		student[index].setID(numID);
		student[index].setClassification(classi);
	}

  system("clear");
	cout << "For professorType:" << endl;
	//Inputting values for personType objects
	for (int i = 0; i < NO_PROFESSOR; i++)
	{
		cout << "\nFirst Name: ";
		getline(cin, firstName);
		cout << "Last Name: ";
		getline(cin, lastName);
		cout << "Address: ";
		getline(cin, oneAddress);
		cout << "Height: ";
		cin >> tall;
		cin.ignore(1000, '\n');
		cout << "Date of Birth: ";
		getline(cin, birth);
		cout << "Gender: ";
		cin >> fM;
		cin.ignore(1000, '\n');
		cout << "Employee ID: ";
		getline(cin, employeeId);
		cout << "Department: ";
		getline(cin, depart);
		cout << "Degree(s): ";
		getline(cin, dips);
		professor[i].setfName(firstName);
		professor[i].setlName(lastName);
		professor[i].setAdd(oneAddress);
		professor[i].setHeight(tall);
		professor[i].setDOB(birth);
		professor[i].setGender(fM);
		professor[i].setEID(employeeId);
		professor[i].setDP(depart);
		professor[i].setDegree(dips);
	}
	system("clear");
	//Call print method

	cout << "----------------------------------Print person----------------------------------" << endl;
	person.print();
	cout << endl;
	cout << "Press any key to continue..";
  cin >> discard;

	system("clear");
	cout << "---------------------------------Print student----------------------------------" << endl;
	for(int x = 0; x < NO_STUDENT; x++)
	{
		student[x].print();
	}
	//Call equals method to compare two students to each other (comapre GPA)
	if(student[x].equals(student, x+1))
	{
		cout << student[x].getfName() << " has GPA that is greater than " << student[x+1].getfName() + "'s" << endl;
	}
	else
	{
		cout << student[x].getfName() << " has GPA that is lower than " << student[x+1].getfName() + "'s" << endl;
	}
	cout << "Press any key to continue..";
  cin >> discard;

	system("clear");
	cout << "--------------------------------Print Professor---------------------------------" << endl;
	for(int count = 0; count < NO_PROFESSOR; count++)
	{
		professor[count].print();
	}
	cout << "Press any key to continue..";
    cin >> discard;

	return 0;
}
