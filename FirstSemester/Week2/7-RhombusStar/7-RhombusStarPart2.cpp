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

    if (n == 1)
    {
        cout << "*" << endl;
        return 0;
    }

    int spaceInBetweenCount = 0;

    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < n / 2 - i; j++)
        {
            cout << " ";
        }
        
        if (i == 0)
        {
            cout << "*" << endl;
        }

        else
        {
            cout << "*";

            for (int i = 0; i < spaceInBetweenCount; i++)
            {
                cout << " ";
            }

            cout << "*" << endl;
            
        }

        if (i != 0)
        {
            spaceInBetweenCount += 2;
        }

        else
        {
            spaceInBetweenCount++;
        }
    }

    cout << "*";

    for (int i = 0; i < n - 2; i++)
    {
        cout << " ";
    }
    
    cout << "*" << endl;
    spaceInBetweenCount -= 2;

    for (int i = n / 2 + 1; i < n; i++)
    {
        for (int j = 0; j < i - n / 2; j++)
        {
            cout << " ";
        }
        
        if (i == n - 1)
        {
            cout << "*" << endl;
        }

        else
        {
            cout << "*";

            for (int i = 0; i < spaceInBetweenCount; i++)
            {
                cout << " ";
            }

            cout << "*" << endl;
            
        }

        spaceInBetweenCount -= 2; 
    }
    
}