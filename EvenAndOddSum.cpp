#include <iostream>
#include <string>
using namespace std;
int main()
{
	int even1, even2, even3, even4;
	int odd1, odd2, odd3, odd4;
	
	cin >> odd1 >> even1;
	cin >> odd2 >> even2;
	cin >> odd3 >> even3;
	cin >> odd4 >> even4;

	int sum_odd = odd1 + odd2 + odd3 + odd4;
	int sum_even = even1 + even2 + even3 + even4;

	cout << sum_odd << " " << sum_even << endl;

	return 0;
}
