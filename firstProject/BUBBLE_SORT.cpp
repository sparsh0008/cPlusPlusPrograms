#include<iostream>
using namespace std;
int main()
{
    int array[100], n, i, k, temp;

    cout << "Enter number of elements\n";
    cin >> n;

    cout << "Enter "<<n<<" integers\n";

    for (i = 0; i < n; i++)
        cin >> array[i];

    for (i = 0; i < n - 1; i++)
    {
        for (k = 0; k < n - i - 1; k++)
        {
            if (array[k] > array[k + 1])
            {
                temp = array[k];
                array[k] = array[k + 1];
                array[k + 1] = temp;
            }
        }
    }
    system("cls");
    cout << "Sorted list in ascending order:\n";

    for (i = 0; i < n; i++)
        cout << array[i] << "\n";

    return 0;
}