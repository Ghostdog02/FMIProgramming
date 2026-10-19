#include <iostream>

using namespace std;

int main()
{
    int n = 151;
    int copy = n;
    int reverse = 0;
    int digit = 0;

    while (copy != 0)
    {
        digit = copy % 10;
        copy /= 10;
        reverse = (reverse * 10) + digit;
    }

    if (reverse == n)
    {
        cout << "Number " << n << " is a palindrome" << endl;
    }

    else
    {
        cout << "Number " << n << " is not a palindrome" << endl;
    }

    return 0;
}