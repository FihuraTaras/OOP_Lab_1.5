// Generalapp
#include "Date.h"
#include <iostream>

using namespace std;

int main()
{
    Date d1, d2;
    d1.Read();
    d1.Display();
    d2.Read();
    d2.Display();
    
    cout << endl << "Is first date bigger or equal second? " << boolalpha << d1.IsBiggerOrEqual(d2);
}

