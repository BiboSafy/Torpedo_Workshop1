#include <iostream>
#include <algorithm>

using namespace std;

int binarysearch(int arr[] , int x , int Low  ,int High)
{
    int mid;
    while(Low <= High)
    {
        mid = (Low + High)/2;

        if (x == arr[mid])
            return mid;
        else if (x > arr[mid])
            Low = mid + 1;
        else
            High = mid -1;
    }
    return -1;
}

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

    sort(arr ,arr + size);

    cout << "Enter value to search for = ";
    cin >> x;

    result = binarysearch(arr , x , 0 , size - 1);
    if (result == -1)
        cout << "Not Found" << endl;
    else
        cout << "Element is found at index " << result << endl;

    return 0;
}
