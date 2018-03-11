#include <stdio.h>
#include "../Include/list.h"

Node *search(List plist,int key)
{
	Node *p;
	for(p=plist->next;p!=NULL;p=p->next)
	{
		if(p->data == key)
		{
			return p;
		}
	}
	return NULL;
}
