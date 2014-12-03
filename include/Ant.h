#ifndef ANT_H
#define ANT_H

#include "Item.h"

class Ant:public Item
{
    public:
        int act();
        Ant();
        virtual ~Ant();
    protected:
    private:
};

#endif // ANT_H
