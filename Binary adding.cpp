#include <iostream>
#include <algorithm>

using namespace std;

string addBinary(string a,string b)
{
    string result = "";
    int carry = 0;
    int len1 = a.length();
    int len2 = b.length();

    if (len1 < len2)
    {
        a.insert(a.begin(), len2 - len1, '0');
    }
    else if (len2 < len1)
    {
        b.insert(b.begin(), len1 - len2, '0');
    }

     for (int i = a.length() - 1; i >= 0; i--) {
        int bit1 = a[i] - '0';
        int bit2 = b[i] - '0';

        int sum = bit1 + bit2 + carry;

        result += (sum % 2) + '0';

        carry = sum / 2;
    }

    if (carry) {
        result += '1';
    }

    reverse(result.begin(), result.end());

    return result;
}

int main()
{
    string a, b;

    cout << "Enter first binary string: ";
    cin >> a;

    cout << "Enter second binary string: ";
    cin >> b;

    string result = addBinary(a, b);

    cout << "Sum of the binary strings: " << result << endl;

    return 0;
}
