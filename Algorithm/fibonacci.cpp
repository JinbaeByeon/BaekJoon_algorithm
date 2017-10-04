#include<iostream>
using namespace std;

int cnt_zero = 0, cnt_one = 0;

int fibonacci(int n) {

	if (n == 0) {
		++cnt_zero;
		return 0;
	}
	else if (n == 1) {
		++cnt_one;
		return 1;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int main()
{
	
	int T = 0;
	int n = 0;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> n;
		fibonacci(n);
		cout << cnt_zero << " " << cnt_one << endl;
		cnt_one = 0;
		cnt_zero = 0;
	}


}