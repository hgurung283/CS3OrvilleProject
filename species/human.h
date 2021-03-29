
/**
 * Copyright Notice:
 * Author: Hari Ram Gurung
 * All rights reserved;
 * **/
#ifndef SPECIES_HUMAN_H_
#define SPECIES_HUMAN_H_
#include "species/humanoid.h"
class Human : public Humanoid
{
    private:
            bool _isMale;
    public:
            Human(bool, double, double);
            bool _isMale;
};
 #endif