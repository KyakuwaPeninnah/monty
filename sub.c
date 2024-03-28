#include "monty.h"

/**
 * sub - Subtracts the top element from the second top element of the stack
 * @top: Pointer to the head of the stack
 * @l: Line number of the instruction
 */
void sub(stack_t **top, unsigned int l)
{
	stack_t *temp = *top;

	if (temp == NULL || temp->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", l);
		exit(EXIT_FAILURE);
	}
	temp->next->n -= temp->n;
	pop(top, l);
}

