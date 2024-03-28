#include "monty.h"

/**
 * pall - prints all the elements of a stack
 * @l: not used
 * @top: its a pointer
 */
void  pall(stack_t **top, unsigned int l)
{
	stack_t *t = *top;
	(void)l;
	if (!t)
		return;
	while (t)
	{
		printf("%d\n", t->n);
		t = t->next;
	}
}

