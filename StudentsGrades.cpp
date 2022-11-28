#include <iostream>
#include <string>
using namespace std;
int main()
{
	
	string name1;
	cout << "what is the student 1 name:";
	cin >> name1;

	string id1;
	cout << "His id:";
	cin >> id1;

	double grade1;
	cout << "what is his math grade:";
	cin >> grade1;


	string name2;
	cout << "what is the student 2 name:";
	cin >> name2;

	string id2;
	cout << "His id:";
	cin >> id2;

	double grade2;
	cout << "what is his math grade:";
	cin >> grade2;

	cout << "\nstudent grades in math" << endl;
	cout << name1 << "(with id " << id1 << ") got grade:" << grade1 << endl;
	cout << name2 << "(with id " << id2 << ") got grade:" << grade2 << endl;
	cout << "the average grades is " << (grade1 + grade2) / 2 << endl;

	return 0;
}
