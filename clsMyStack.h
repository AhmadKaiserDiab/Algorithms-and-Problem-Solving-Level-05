#pragma once
#include <iostream>
#include "clsMyQueue.h"
using namespace std;

// Building "Stack" Using Queue
template <class T>
class clsMyStack : public clsMyQueue <T>
{
    public :
        void Push(T Item)
        {
            clsMyQueue <T> :: InsertAtFront(Item);
        }

        T Top()
        {
            return clsMyQueue <T> :: Front();
        }

        T Bottom()
        {
            return clsMyQueue <T> :: Back();
        }

};