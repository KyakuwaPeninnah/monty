#include "monty.h"

/**
 * add - Adds the top two elements of the stack
 * @top: Pointer to the head of the stack
 * @l: unsigned integer
 */
void add(stack_t **top, unsigned int l)
{
	stack_t *temp = *top;

	if (temp == NULL || temp->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", l);
		exit(EXIT_FAILURE);
	}
	temp->next->n += temp->n;
	pop(top, l);
}

