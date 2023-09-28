#include "Blade.h"
#include "Output.h"
#include "SelectMenu.h"

int main()

{
    short indBlade(0);
    //select shape of blade
    std::string txtBladeShape[] = { "Normal Blade", "Real Tanto", "Gut Hook", "Hawkbill", "EXIT"};
    selectMenu(txtBladeShape, EXIT_SHAPE, "SHAPE", indBlade);
    printMenu(txtBladeShape, EXIT_SHAPE, "SHAPE", indBlade);
    if (indBlade == sizeBladeShape) 
        indBlade = 0;

    Blade blade((char*)arrBladeShape[indBlade], (char*)arrMaterial[BRASS], (char*)arrQuality[MIDDLE]);
    showBladeProperty(blade);

    return 0;
}