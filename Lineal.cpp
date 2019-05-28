#include <iostream>

using namespace std;

int main()
{
	int *array, n, num = 0, k; 

	cin >> n; 

	array = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> array[i]; 
	}

	cin >> k; 

	for (int i = 0; i < n; i++)
	{
		if (array[i] == k)
		{
			num++;
		}
	}
	cout << num << endl;

	delete array;
	return 0;
}
