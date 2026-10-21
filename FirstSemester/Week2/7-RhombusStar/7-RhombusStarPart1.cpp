#include <iostream>

using namespace std;

int main()
{
    int n = 0;

    cin >> n;

    if (n % 2 == 0)
    {
        cout << "Invalid input";
        return 1;
    }

    int starsCount = 1;

    for (int i = 1; i <= n / 2; i++)
    {
        for (int j = 0; j < (n - starsCount) / 2; j++)
        {
            cout << " ";
        }
        
        for (int j = 0; j < starsCount; j++)
        {
            cout << "*";
        }
        

        for (int j = 0; j < (n - starsCount) / 2; j++)
        {
            cout << " ";
        }

        cout << endl;

        starsCount += 2;
    }

    for (int k = 0; k < starsCount; k++)
    {
        cout << "*";
    }
    
    cout << endl;
    starsCount -= 2;    
    
    for (int i = n / 2 + 2; i <= n; i++)
    {
        for (int j = 0; j < (n - starsCount) / 2; j++)
        {
            cout << " ";
        }
        
        for (int j = 0; j < starsCount; j++)
        {
            cout << "*";
        }
        

        for (int j = 0; j < (n - starsCount) / 2; j++)
        {
            cout << " ";
        }

        cout << endl;

        starsCount -= 2;
    }
    
}