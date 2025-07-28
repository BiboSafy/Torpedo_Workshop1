#include <iostream>

using namespace std;

void swap(int &x,int &y)
{
    int z;
    z = x;
    x = y;
    y = z;

}

int main()
{
    int a,b;
    cout << "Enter First Number: \n";
    cin >> a;
    cout << "Enter Second Number: \n";
    cin >> b;

    swap(a, b);

    cout << "Swapping the 2 numbers\n";
    cout << "First number = "<< a << endl;
    cout << "Second number = "<< b;

    return 0;
}
