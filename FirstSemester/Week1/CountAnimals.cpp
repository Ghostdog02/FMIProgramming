#include "iostream"

using namespace std;

int main()
{
    int animals = 0;
    int legs = 0;

    cin >> animals;
    cin >> legs;

    int cows = 0;
    int chickens = 0;

    if (animals * 2 > legs || animals * 4 < legs || legs % 2 != 0)
    {
        cout << "Input parameters are invalid";

        return 0;
    }
   
    chickens = (animals * 4 - legs) / 2;
    cows = animals - chickens;

    cout << "Cows: " << cows << "\n";
    cout << "Chickens: " << chickens << "\n";
    
    return 0;
}