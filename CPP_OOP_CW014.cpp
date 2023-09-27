#include <iostream>
#include "Blade.h"

using std::cout;

int main()

{
    cout << "Parametric!\n";
    Blade blade((char*)arrBladeShape[HAWKBILL], (char*)arrMaterial[BRASS], (char*)arrQuality[MIDDLE]);
    cout << blade.getBladeShape() << "\n";
    cout << blade.getMaterial() << "\n";
    cout << blade.getHardness() << "\n";
    cout << blade.getResielence() << "\n";
    cout << blade.getDurality() << "\n";
    cout << blade.getBladeLength() << "\n";
    cout << blade.getBladeWeight() << "\n";


    return 0;
}