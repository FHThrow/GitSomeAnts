#ifndef FOOD_H
#define FOOD_H

#include "Item.h"


class Food:public Item
{
    public:
        int act();
        Food();
        virtual ~Food();
    protected:
    private:
};

#endif // FOOD_H
