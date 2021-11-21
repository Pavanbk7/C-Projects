/**************************************
 * C-Projects : main.c
 *
 * @author : https://github.com/Pavanbk7
 *
***************************************/

#include<stdio.h>

#include "../Introduction/Introduction.h"
#include "../DataStructures/SinglyLinkedList.h"

/***************************************
 * @main
 *
***************************************/
int main()
{
    //Contains a intro msg to the C-Projects repository
    IntroFunc();

    SList_t* list = SListInit();
    addFirst(list, 10);
    addLast(list, 10);
    removeElemt(list, 10);
    reverseList(list);
    displayList(list);

    return 0u;
}
/***************************************
 * end
 *
***************************************/