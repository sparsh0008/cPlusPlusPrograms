#include<iostream>
using namespace std;
int main()
{
	int n, arr[100], i, p, temp, flag = 0;
	cout << "Enter the size of an array : ";
	cin >> n;

	cout << "Enter the elements of array : " << endl;
	for (i = 0; i < n; i++)
		cin >> arr[i];

	//concept for insertion sort

    for (i = 1; i <= n - 1; i++)
    {
        temp = arr[i];

        for (p = i - 1; p >= 0; p--)
        {
            if (arr[p] > temp)
            {
                arr[p + 1] = arr[p];
                flag = 1;
            }
            else
                break;
        }
        if (flag)
            arr[p + 1] = temp;
    }

    cout << "Sorted Array is : \n";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "\n";
    }
}