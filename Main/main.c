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
    int a = 10;
    addFirst(list, &a);
    addLast(list, &a);
    removeElemt(list, &a);
    reverseList(list);
    displayList(list);

    return 0u;
}
/***************************************
 * end
 *
***************************************/