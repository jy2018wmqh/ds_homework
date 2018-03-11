#include <stdio.h>
#include "../Include/list.h"

void show(List plist)
{
	Node *p;
	for(p=plist->next;p!=NULL;p=p->next)
	{
		printf("%d ",p->data);
	}
	printf("\n");
}
