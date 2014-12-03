#include "Field.h"

Field *Field::ThatsMe = NULL;

Field *Field::getField(int x, int y){
   if(ThatsMe != NULL){
    return ThatsMe;
   }
   else{
    ThatsMe = new Field(x, y);
    return ThatsMe;
   }
}

Field::Field(int x, int y){
 SizeX = x;
 SizeY = y;
 First = NULL;
}

void Field::createField(){
    Area *help;
    Area *current;
    Area *backup;
    First = new Area(0,0);
    current = First;
    int i, j,cnt;
    for(i = 0; i < SizeY;i++){
        for(j = 0; j< SizeX; j++){

            if(i == 0){
                if(j == SizeX - 1){
                    current->East = NULL;
                }
                help = current;
                current = new Area(j+1,i);
                current->North = NULL;
                current->West = help;
                help->East = current;
            }

            else if(i < SizeY - 1){
                if(j == SizeX - 1){
                    current->East = NULL;
                }
                current->South = NULL;
                help = current;
                current = new Area(j+1,i);
                help->East = current;
                current->West = help;

            }

            else{
                if(j == SizeX - 1){
                    current->East = NULL;
                }
                help = current;
                current = new Area(j+1,i);
                help->East = current;
                current->West = help;

            }
        }
        help = First;
        cnt = 0;
        if(i == 0){
            help->South = new Area(0,1);
            current = help->South;
            current->North = First;


        }
        else if(i < SizeY - 1){
            for(cnt = 0; cnt < i;cnt++){
                current = current->South;
            }
            backup = current;
            help = current->North;
            for(cnt = 0;cnt < SizeX - 1;cnt++){
                help = help->East;
                current = current->East;
                current->North = help;
                help->South = current;
            }
            current = backup;

        }
        else{
            for(cnt = 0; cnt < i;cnt++){
                current = current->South;
            }
            current->South = new Area(0,i);
            backup = current;
            help = current->North;

             for(cnt = 0;cnt < SizeX - 1;cnt++){
                help = help->East;
                current = current->East;
                current->North = help;
                help->South = current;
            }
            current = backup;


        }

    }

}

void Field::printField(){

}
