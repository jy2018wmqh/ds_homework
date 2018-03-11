#include <stdio.h>
#include "../Include/list.h"

int main()
{
	Node head;
	initlist(&head);
	int i;
	for(i=0;i<10;i++)
	{
		//insert_head(&head,i);
		insert_tail(&head,i);
	}
	insert_pos(&head,3,10);
	show(&head);

	delete_head(&head);
    delete_tail(&head);
	delete_pos(&head,3);
	show(&head);
	printf("%d\n",search(&head,8));

	reverse(&head);
	show(&head);
	printf("%d\n",search(&head,8));
	return 0;
}
