#include "Blade.h"
#include "Output.h"
#include "SelectMenu.h"

int main()

{
    short indBlade(0);
    //select shape of blade
    std::string txtBladeShape[] = { "Normal Blade", "Real Tanto", "Gut Hook", "Hawkbill"};
    selectMenu(txtBladeShape, 4, "SHAPE", indBlade);
    printMenu(txtBladeShape, 4, "SHAPE", indBlade);

    Blade blade((char*)arrBladeShape[indBlade], (char*)arrMaterial[BRASS], (char*)arrQuality[MIDDLE]);
    showBladeProperty(blade);

    return 0;
}