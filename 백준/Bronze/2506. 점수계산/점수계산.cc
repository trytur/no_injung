#include <iostream>
using namespace std;

int main()
{	
	int sum = 0;
	int add = 1;
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;

		if (num == 0)
			add = 1;
		else
		{
			sum += add;
			add++;
		}
	}

	cout << sum;
}