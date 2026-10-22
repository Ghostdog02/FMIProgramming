#include "iostream"

using namespace std;

int main()
{
    int firstNumber = 0;
    int secondNumber = 0;

    cout << "Enter first number: ";
    cin >> firstNumber;
    cout << "Enter second number: ";
    cin >> secondNumber;
    
    cout << firstNumber << " + " << secondNumber << " = " << firstNumber + secondNumber << std::endl;
    cout << firstNumber << " - " << secondNumber << " = " << firstNumber - secondNumber << std::endl;
    cout << firstNumber << " * " << secondNumber << " = " << firstNumber * secondNumber << std::endl;
    
    if (secondNumber == 0)
    {
        cout << "A division by zero was attempted" << std::endl;
    }

    else
    {
        cout << firstNumber << " / " << secondNumber << " = " << firstNumber / secondNumber << std::endl;
        cout << firstNumber << " % " << secondNumber << " = " << firstNumber % secondNumber << std::endl;
    }
    

    return 0;
}