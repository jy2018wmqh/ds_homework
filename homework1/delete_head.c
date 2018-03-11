#include <stdbool.h>
#include <stdlib.h>
#include "../Include/list.h"

bool delete_head(List plist)
{
	if(plist->next == NULL)
	{
		return false;
	}

	Node *p = plist->next;
	plist->next = p->next;
	free(p);

	return true;
}
