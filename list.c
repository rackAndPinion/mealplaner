#include "list.h"

#include <stdlib.h>
#include <stdio.h>

struct List *addNode(struct List *list, void *head, int dataSize)
{
  // New pointer to point at the new begining
  struct List *newNode = (struct List *)malloc(sizeof(struct List));
  // New
  newNode->head=head;
  // Insert new node before any other element:
  newNode->next=list;

  return newNode;
}

struct List *removenode(struct List *list)
{
    return NULL;
}

void savelist(struct List *list, int dataSize)
{
	FILE * pFile;
	pFile = fopen ("myfile.bin", "wb");
	while (list != NULL)
	{
		fwrite(list->head, dataSize , 1, pFile);
		list = list->next;
	}
	fclose(pFile);
}

struct List *loadList(int dataSize)
{
	struct List *list;
	struct List *temp_list;
	list = NULL;
	FILE * pFile;

	pFile = fopen("myfile.bin", "rb");


	// obtain file size:
	// int lSize;
	// fseek (pFile , 0 , SEEK_END);
	// lSize = ftell (pFile);
	// rewind (pFile);

	temp_list = (struct List *)malloc(sizeof(struct List));
  void *head = malloc(dataSize);

	while(fread(head, dataSize, 1 , pFile) == 1){

    temp_list->head = head;
		temp_list->next = list;
		list=temp_list;

		temp_list = (struct List *)malloc(sizeof(struct List));
    head = malloc(dataSize);
	}

	return list;
}
