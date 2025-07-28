#include <iostream>
#include <algorithm>

using namespace std;



int main()
{
    int size;
    int x;
    int result;
    cout << "Enter size of array: \n";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements: \n";
    for (int i = 0;i < size ; i++)
    {
        cin >> arr[i];
    }

    sort(arr ,arr + size, greater<int>() );

    cout << "The 3 highest integers are : " << endl;
    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;

    return 0;
}
