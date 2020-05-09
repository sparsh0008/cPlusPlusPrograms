#include<iostream>
using namespace std;
int main()
{
	int i = 0, n, key, loc;
	cout << "Enter the size of array : ";
	cin >> n;
	
	int arr[n];
	cout << "Enter the elemnt for search :";
	cin >> key;

	while (i < n)
	{
		if (arr[i] != key)
			i = i + 1;
	}
	if (i < n)
		loc = i;
	else
		loc = -1;

	return 0;

}