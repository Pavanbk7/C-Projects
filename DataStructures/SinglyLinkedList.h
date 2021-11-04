/**************************************
 * LinkedList program in C
 *
 * @author : https://github.com/Pavanbk7
 *
***************************************/


/***************************************
 * @Structure : Node
 *
***************************************/
struct
{
    int data;
    struct Node* nextNode;
} Node;

/***************************************
 * @function : addFirst
 *
***************************************/
void addFirst(int element);

/***************************************
 * @function : addLast
 *
***************************************/
void addLast(int element);

/***************************************
 * @function : removeElemt
 *
***************************************/
void removeElemt(int element);

/***************************************
 * @function : displayList
 *
***************************************/
void displayList();

/***************************************
 * @function : createList
 *
***************************************/
void createList();