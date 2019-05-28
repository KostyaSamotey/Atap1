#include <iostream>

using namespace std;

int main()
{
	int *arr; // вказ≥вник дл€ вид≥ленн€ пам'€т≥ п≥д масив
	int size; // розм≥р масиву

	cin >> size; 

	if (size <= 0) // розм≥р масиву маЇ бути => 0
	{
		return 1;
	}

	arr = new int[size]; // вид≥ленн€ пам'€т≥ п≥д масив


	for (int i = 0; i < size; i++) 
	{
		cin >> arr[i]; //заповненн€ масиву
	}

	int temp; // тимчасова зм≥нн€ дл€ обм≥ну чисел м≥сц€ми
	
	for (int i = 0; i < size - 1; i++) // цикл сортуванн€
	{
		for (int j = 0; j < size - i - 1; j++) 
		{
			if (arr[j] > arr[j + 1]) 
			{
				// обм≥н м≥сц€ми
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	// 
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " "; // вив≥д в≥дсортованого масиву
	}
	cout << endl;

	delete[] arr; // зв≥льненн€ пам'€т≥;

	return 0;
}
