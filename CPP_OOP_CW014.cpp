#include "Blade.h"
#include "Output.h"

int main()

{
    Blade blade((char*)arrBladeShape[HAWKBILL], (char*)arrMaterial[BRASS], (char*)arrQuality[MIDDLE]);
    showBladeProperty(blade);

    return 0;
}