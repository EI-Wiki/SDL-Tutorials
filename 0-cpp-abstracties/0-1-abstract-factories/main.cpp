/*
 * All rights reserved (c) EI-Wiki 2020
 * This code is under GNU General Public License v3.0
 * More info at ei-wiki.uantwerpen.be/license
 */

#include "AFactory.h"
#include "SDLFactory.h"

void createAndDo(AFactory* factory)
{
    AObject* aObj = factory->createObject();
    aObj->doStuff();
}

int main(int argc, char *argv[])
{
    AFactory* factory = new SDLFactory();
    createAndDo(factory);

    return 0;
}