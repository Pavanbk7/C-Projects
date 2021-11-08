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

    //List processing Apis
    void (*addFirst)(struct SList*, void *);
    void (*addLast)(struct SList*, void * );
    void (*removeElemt)(struct SList*, void *);
    void (*reverseList)(struct SList*);
    void (*displayList)(struct SList*);
};

typedef struct SList SList_t;
typedef struct node Node_t;

/***************************************
 * @function : SListInit
 *
***************************************/
SList_t* SListInit();

/***************************************
 * end
 *
***************************************/

#endif //SINGLYLINKEDLIST_H