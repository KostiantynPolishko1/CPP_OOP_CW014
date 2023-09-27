#include <iostream>
#include "Steel.h"

using std::cout;

int main()
{
    cout << "Default!\n";
    Steel steel;

    cout << steel.getTypeSteel() << "\n";
    cout << steel.getHardness() << "\n";
    cout << steel.getResielence() << "\n";

    cout << "Parametric!\n";
    Steel steel2((char*)arrTypeSteel[2]);

    cout << steel2.getTypeSteel() << "\n";
    cout << steel2.getHardness() << "\n";
    cout << steel2.getResielence() << "\n";

    return 0;
}