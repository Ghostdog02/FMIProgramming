#include <iostream>

using namespace std;

int main()
{
    int fractionNumer1 = 0;
    int fractionDenom1 = 0;
    int fractionNumer2 = 0;
    int fractionDenom2 = 0;
    
    char ch = ' ';

    cin >> fractionNumer1 >> ch >> fractionDenom1 >> fractionNumer2 >> ch >> fractionDenom2;
    
    int greatestCommonDivisor = fractionDenom1;
    int fractionDenom2Copy = fractionDenom2;

    while (fractionDenom2Copy != 0)
    {
        int temp = fractionDenom2Copy;
        fractionDenom2Copy = greatestCommonDivisor % fractionDenom2Copy;
        greatestCommonDivisor = temp;
    }
    
    int commonDenom = (fractionDenom1 * fractionDenom2) / greatestCommonDivisor;

    if (commonDenom < 0)
    {
        commonDenom = -commonDenom;
    }
    

    fractionNumer1 = (commonDenom / fractionDenom1) * fractionNumer1;
    fractionNumer2 = (commonDenom / fractionDenom2) * fractionNumer2;

    int sum = (fractionNumer1 + fractionNumer2);
    int newGreatestCommonDivisor = sum;
    int newDenomCopy = commonDenom;

    while (newDenomCopy != 0)
    {
        int temp = newDenomCopy;
        newDenomCopy = newGreatestCommonDivisor % newDenomCopy;
        newGreatestCommonDivisor = temp;
    }

    if (newGreatestCommonDivisor < 0)
    {
        newGreatestCommonDivisor = -newGreatestCommonDivisor;
    }
    

    int reducedNumer = sum / newGreatestCommonDivisor;
    int reducedDenom = commonDenom / newGreatestCommonDivisor;
    
    if (reducedDenom > 1)
    {
        
        cout << reducedNumer << "\/" << reducedDenom << endl;
    }

    else
    {
        cout << reducedNumer;
    }
}