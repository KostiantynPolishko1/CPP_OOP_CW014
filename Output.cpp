#include "Output.h"

void showBladeProperty(Blade& blade) {

    short i = 0;
    cout << "\n\tBlade Property\n";
    cout << ++i << " Shape:\t\t" << blade.getBladeShape() << "\n";
    cout << ++i << " Material:\t\t" << blade.getMaterial() << "\n";
    cout << ++i << " Quality:\t\t" << blade.getQuality() << "\n";
    cout << ++i << " Hardness, HRB:\t" << blade.getHardness() << "\n";
    cout << ++i << " Resielence, J*m^(-3):\t" << blade.getResielence() << "\n";
    cout << ++i << " Durability N/mm^2:\t" << blade.getDurality() << "\n";
    cout << ++i << " Length, m:\t\t" << blade.getBladeLength() << "\n";
    cout << ++i << " Weight, kg:\t\t" << blade.getBladeWeight() << "\n";
}
;