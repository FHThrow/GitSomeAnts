#ifndef CREATOR_H
#define CREATOR_H

#include "Item.h"
#include "Ant.h"
#include "AntHill.h"
#include "Food.h"

class Creator
{
    public:
        Creator();
        virtual ~Creator();
        static Creator *getCreator();
        Item *getItem(int type);
    protected:
    private:
        static Creator* ThatsMe;
};

#endif // CREATOR_H
