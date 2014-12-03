#ifndef ITEM_H
#define ITEM_H


/* The class Item will never be created and is only a blueprint for all items that will actually be used */

class Item
{
    public:
        virtual int act() = 0; //prevents compiler from looking for an implementation in the base-class
        Item();
        virtual ~Item();
    protected:
    private:
};

#endif // ITEM_H
