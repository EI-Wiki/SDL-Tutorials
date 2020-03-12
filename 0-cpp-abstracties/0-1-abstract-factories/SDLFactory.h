/*
 * All rights reserved (c) EI-Wiki 2020
 * This code is under GNU General Public License v3.0
 * More info at ei-wiki.uantwerpen.be/license
 */

#ifndef EIWIKI_SDLFACTORY_H
#define EIWIKI_SDLFACTORY_H

#include "AFactory.h"
#include "SDLObject.h"

class SDLFactory : public AFactory
{
public:
    AObject* createObject() override;
};


#endif
