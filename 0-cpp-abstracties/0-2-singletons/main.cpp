#include "SingletonClass.h"

int main(int argc, char *argv[])
{
    // Roep de methode aan van de singleton
    SingletonClass::getInstance().doStuff();

    return 0;
}