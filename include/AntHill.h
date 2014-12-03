#ifndef ANTHILL_H
#define ANTHILL_H

#include "Item.h"


class AntHill:public Item
{
    public:
        int act();
        AntHill();
        virtual ~AntHill();
    protected:
    private:
};

#endif // ANTHILL_H
