/**************************************
 * Singly Linked List program in C
 *
 * @author : https://github.com/Pavanbk7
 *
***************************************/

#include <stdio.h>
#include <stdlib.h>
#include "SinglyLinkedList.h"

static void addF(SList_t* L, void *element);
static void addL(SList_t* L, void *element);
static void removeE(SList_t* L, void *element);
static void displayL(SList_t* L);
static void reverseL(SList_t* L);

/***************************************
 * @function : addF
 *
***************************************/
static void addF(SList_t* L, void * element)
{
    printf("               Inside the Add first function\n");
    Node_t* tempNode = (Node_t *)malloc(sizeof(Node_t));
    tempNode->data = element;
    tempNode->nextNode = NULL;

    if(NULL != L)
    {
        if(NULL == L->tail)
        {
            L->tail = tempNode;
            L->head = tempNode;
        }
        else
        {
            L->head->nextNode = tempNode;
            L->head = tempNode;
        }
    }
}

/***************************************
 * @function : addL
 *
***************************************/
static void addL(SList_t* L, void *element)
{
    printf("               Inside the Add last function\n");
}

/***************************************
 * @function : removeE
 *
***************************************/
static void removeE(SList_t* L, void *element)
{
    printf("               Inside the remove element function\n");
}

/***************************************
 * @function : displayL
 *
***************************************/
static void displayL(SList_t* L)
{
    printf("               Inside the display list function\n");
    if(L != NULL)
    {
        if(L->tail != NULL)
        {
            printf("                   %d",*(int *)(L->tail->data));
        }
        else
        {

        }
    }
    else
    {

    }
    printf("\n");
}

/***************************************
 * @function : reverseL
 *
***************************************/
static void reverseL(SList_t* L)
{
    printf("               Inside the reverse list function\n");
}

/***************************************
 * @function : SListInit
 *
***************************************/
SList_t* SListInit()
{
    SList_t *list;
    list = (SList_t *)malloc(sizeof(SList_t));
    list->addFirst = &addF;
    list->addLast = &addL;
    list->removeElemt = &removeE;
    list->displayList = &displayL;
    list->reverseList = &reverseL;
    list->tail = NULL;
    list->head = NULL;

    return list;
}
/***************************************
 * end
 *
***************************************/