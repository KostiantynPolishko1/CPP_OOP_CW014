#include <iostream>
#include "Blade.h"

using std::cout;

int main()
{
   /* cout << "Default!\n";
    Steel steel;

    cout << steel.getTypeSteel() << "\n";
    cout << steel.getHardness() << "\n";
    cout << steel.getResielence() << "\n";*/

    cout << "Parametric!\n";
    /*Material steel2((char*)arrMaterial[1], (char*)arrQuality[2]);

    cout << steel2.getTypeSteel() << "\n";
    cout << steel2.getHardness() << "\n";
    cout << steel2.getResielence() << "\n";
    cout << steel2.getDurality() << "\n";*/

    Blade blade;
    cout << blade.getBladeShape() << "\n";
    cout << blade.getMaterial() << "\n";
    cout << blade.getHardness() << "\n";
    cout << blade.getResielence() << "\n";
    cout << blade.getDurality() << "\n";
    cout << blade.getBladeLength() << "\n";
    cout << blade.getBladeWeight() << "\n";


    return 0;
}