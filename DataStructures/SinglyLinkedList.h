#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_H

/**************************************
 * LinkedList program in C
 *
 * @author : https://github.com/Pavanbk7
 *
***************************************/

struct node
{
    // data and nextNode link
    void* data;
    struct node* nextNode;
};

/***************************************
 * @structure : SList
 *
***************************************/
struct SList
{
    //Tail and head
    struct node* tail;
    struct node* head;

};

typedef struct SList SList_t;
typedef struct node Node_t;

/***************************************
 * @function : SListInit
 *
***************************************/
SList_t* SListInit();

/***************************************
 * @function : addFirst
 *
***************************************/
extern void addFirst(SList_t* L, void * element);

/***************************************
 * @function : addLast
 *
***************************************/
extern void addLast(SList_t* L, void *element);

/***************************************
 * @function : removeElemt
 *
***************************************/
extern void removeElemt(SList_t* L, void *element);

/***************************************
 * @function : displayList
 *
***************************************/
extern void displayList(SList_t* L);

/***************************************
 * @function : reverseL
 *
***************************************/
extern void reverseList(SList_t* L);

/***************************************
 * end
 *
***************************************/

#endif //SINGLYLINKEDLIST_H