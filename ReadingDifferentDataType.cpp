#include <iostream>
using namespace std;
int main()
{
	int age;
	cout << "Enter age : ";
	cin >> age;

	double weight;
	cout << "Enter weight : ";
	cin >> weight;

	char group;
	cout << "Enter group: ";
	cin >> group;

	string name;
	cout << "Enter name: ";
	cin >> name;

	cout << "I am " << name << " belongs to group " << group << endl;
	cout << "My weight is " << weight << " and age is " << age << endl;
	return 0;
}
