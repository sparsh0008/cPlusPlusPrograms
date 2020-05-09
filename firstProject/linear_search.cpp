#include<iostream>
using namespace std;

int main()
{
	int i, n, arr[100], pos;
	cout << "Enter the size of array : ";
	cin >> n;

	cout << "Enter the elements for the array : ";
	for (i = 0; i < n; i++)
		cin >> arr[i];

	cout << "Enter the number you want to search : ";
	cin >> pos;

	for (i = 0; i < n; i++)
	{
		if (arr[i] == pos)    /* If required element is found */
		{
			cout << pos << " is present in the array.\n" << endl;
			break;
		}
	}
	if (i == n)
		cout << pos << " isn't present in the array.\n" << endl;

	return 0;
}