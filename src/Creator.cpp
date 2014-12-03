#include "Creator.h"
#include <iostream>

Creator *Creator::ThatsMe = NULL;

Creator::Creator()
{
    //ctor
}

Creator::~Creator()
{
    //dtor
}

Creator *Creator::getCreator(){
   if(ThatsMe != NULL){
    return ThatsMe;
   }
   else{
    ThatsMe = new Creator();
    return ThatsMe;
   }
}

Item *Creator::getItem(int type){
    if(type == 1){
        return new Ant();
    }
    else if(type == 2){
        return new AntHill();
    }
    else if(type == 3){
        return new Food();
    }
    else return NULL;
}
