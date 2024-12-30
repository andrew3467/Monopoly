

#include "Tungsten.h"


void Update()
{
    TUNGSTEN_INFO("Hello World!");
}

int main()
{
    Tungsten::Engine engine("Monopoly");

    engine.Run(&Update);


    return 0;
}
