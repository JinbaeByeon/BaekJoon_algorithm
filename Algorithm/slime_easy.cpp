#include <iostream>

using namespace std;

int Get_Count(int n)
{
	int cnt = 0, cnt_scar = 0;
	for (int i = 2; i <= n / 2; i++) {
		if (n%i == 0) {
			++cnt;
			n /= i;
			i = 1;
		}
	}
	while (cnt >= 1) {
		cnt /= 2;
		++cnt_scar;
	}
	return cnt_scar;
}

int main()
{
	int K;

	cin >> K;

	cout << Get_Count(K) << endl;
	
}