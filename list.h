#ifndef LIST_H
#define LIST_H



struct List
{
    void *head;
    
    struct List *next;
};

struct List *addNode(struct List *list,void *head, int dataSize);
void savelist(struct List *list, int dataSize);
struct List *loadList(int dataSize);

#endif
