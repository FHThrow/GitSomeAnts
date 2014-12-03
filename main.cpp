using namespace std;

#include "AntClasses.h"



/*
Example::Example(int var1,int var2){
    a = var1;
    b = var2;
}*/




int main(){
    Field *MainField;
    MainField = Field::getField(20,40);
    MainField->createField();
    Creator *MainCreator;
    MainCreator = Creator::getCreator();

    Item *p[3];
    p[1] = MainCreator->getItem(ANTS);
    p[2] = MainCreator->getItem(ANTHILLS);
    p[3] = MainCreator->getItem(FOODS);

}

