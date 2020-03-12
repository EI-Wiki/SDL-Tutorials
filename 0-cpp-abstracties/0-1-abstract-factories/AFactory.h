/*
 * All rights reserved (c) EI-Wiki 2020
 * This code is under GNU General Public License v3.0
 * More info at ei-wiki.uantwerpen.be/license
 */
#ifndef EIWIKI_AFACTORY_H
#define EIWIKI_AFACTORY_H

#include "AObject.h"

class AFactory
{
public:
    virtual AObject* createObject() = 0;
};

#endif
