#include "clsDblLinkedList.h"

int main()
{
    clsDblLinkedList <int> MyLinkedList;

    MyLinkedList.InsertAtBeginning(5);
    MyLinkedList.InsertAtBeginning(4);
    MyLinkedList.InsertAtBeginning(3);
    MyLinkedList.InsertAtBeginning(2);
    MyLinkedList.InsertAtBeginning(1);
    MyLinkedList.PrintList();
    
    MyLinkedList.InsertAfter(4,1000);
    MyLinkedList.PrintList();
    return 0;
}