#include <iostream>
using namespace std;

int sum(int n)
{
	if (n == 1) return 1;
	return n + sum(n - 1);
}

int main()
{
	int input = 0;
	while (input<1 || input>1000)
		cin >> input;

	int n = 1;
	while (input != 1 && sum(n) < input) { ++n; }

	int cur = n >= 2 ? sum(n - 1) + 1 : 1;
	int a = n, b = 1;
	for (int i = 0; i<n; i++) {
		if (cur++ == input)
			break;
		else {
			--a;
			++b;
		}
	}
	cout << a << " " << b << endl;
}