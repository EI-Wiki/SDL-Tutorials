/*
 * All rights reserved (c) EI-Wiki 2020
 * This code is under GNU General Public License v3.0
 * More info at ei-wiki.uantwerpen.be/license
 */
#include "SDLFactory.h"

AObject* SDLFactory::createObject()
{
    return new SDLObject();
}
