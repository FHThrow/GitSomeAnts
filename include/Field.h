#ifndef FIELD_H
#define FIELD_H
#include "Area.h"
#include <iostream>

class Field{
private:
    int SizeX, SizeY;
    Area *First;
    static Field *ThatsMe;
protected:
    Field(int x, int y);
public:
    static Field *getField(int x, int y);
    void createField();
    void printField();
};


#endif // FIELD_H
