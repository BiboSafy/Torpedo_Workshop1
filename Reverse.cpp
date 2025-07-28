#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
    string text;

    cout << "Enter text to be reversed: \n";
    getline(cin, text);

    reverse(text.begin(), text.end());
    cout << "After reversing: "<< text <<endl;

    return 0;
}
