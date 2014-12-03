#ifndef AREA_H
#define AREA_H

#include <list>
#include "Item.h"


class Area{
private:
    int CoordX, CoordY;
    std::list<Item*> Items;
public:
    Area *North;
    Area *East;
    Area *South;
    Area *West;
    Area(int x, int y);
    ~Area();

};

#endif // AREA_H
