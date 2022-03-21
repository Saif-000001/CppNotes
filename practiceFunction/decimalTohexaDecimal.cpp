#include <iostream>
using namespace std;

string decimalToHexaDecimal(int n);

int main()
{
    int n;
    cin >> n;

    cout << decimalToHexaDecimal(n) << endl;
    return 0;
}

string decimalToHexaDecimal(int n)
{
    int x = 1;
    string ans = "";
    while (x <= n)
    {
        x *= 16;
    }
    x /= 16;
    while (x > 0)
    {
        int lastDigit = n / x;
        n -= lastDigit * x;
        x /= 16;
        if (lastDigit <= 9)
        {
            ans = ans + to_string(lastDigit);
        }
        else
        {
            int c = 'A' + lastDigit - 10;
            ans.push_back(c);
        }
    }
    return ans;
}