#include <stdbool.h>
#include <stdlib.h>
#include "../Include/list.h"

bool delete_pos(List plist,int pos)
{
	int i;
	Node *p;
	for(p=plist,i=0;p!=NULL&&i<pos;i++,p=p->next)  ;
	if((i<pos) || (plist->next == NULL))
	{
		return false;
	}

	Node *q = p->next;
	p->next = q->next;
	free(q);
	return true;
}
