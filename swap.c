#include "monty.h"

/**
 * swap - Swaps the top two elements of the stack
 * @top: Pointer to the head of the stack
 * @l: unsigned integer
 */
void swap(stack_t **top, unsigned int l)
{
	stack_t *temp = *top;
	int tmp;

	if (temp == NULL || temp->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", l);
		exit(EXIT_FAILURE);
	}
	tmp = temp->n;
	temp->n = temp->next->n;
	temp->next->n = tmp;
}

