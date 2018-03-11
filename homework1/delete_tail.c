#include <stdbool.h>
#include <stdlib.h>
#include "../Include/list.h"

static Node *SearchPri(List plist,int key)
{
	Node *p;
	for(p=plist;p->next!=NULL;p=p->next)
	{
		if(p->next->data == key)
		{
			return p;
		}
	}
	return NULL;
}
bool delete_tail(List plist)
{
	if(plist->next == NULL)
	{
		return false;
	}

	Node *p;
	for(p=plist;p->next!=NULL;p=p->next)  ;
	Node *q = SearchPri(plist,p->data);
	q->next = p->next;
	free(p);
	return true;
}
