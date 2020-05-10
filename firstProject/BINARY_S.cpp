/*#include<iostream>
using namespace std;
int main()
{
	int i, n, arr[100], key, first, mid, last;
	cout << "Enter the size of array for binary search : ";
	cin >> n;

	cout << "Enter the elments for the array for binary seeach : ";
	for (i = 0; i < n; i++)
		cin >> arr[i];

	first = 0;
	last = n - 1;
	mid = (first + last) / 2;

	//cout << "First is : " << first << "\nlast is : " << last << "\nMid is : " << mid;

	cout << "Enter the number you want to search : ";
	cin >> key;

	while(first <= last)
	{
		if (arr[mid] < key)
		{
			first = mid + 1;
		}
		else if (arr[mid] == key)
		{
			cout << key << " is present in the array.\n" << endl;;
			break;
		}
		else
			last = mid - 1;

		mid = (first + last) / 2;
	}
	if (first > last)
		cout << "Not found! " << key << " isn't present in the array.\n" << endl;

	return 0;
}*/