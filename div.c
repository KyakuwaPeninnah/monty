#include "monty.h"

/**
 * divide - Divides the second top element by the top element of the stack
 * @top: Pointer to the head of the stack
 * @l: Line number of the instruction
 */
void divide(stack_t **top, unsigned int l)
{
	stack_t *temp = *top;

	if (temp == NULL || temp->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", l);
		exit(EXIT_FAILURE);
	}

	if (temp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", l);
		exit(EXIT_FAILURE);
	}
	temp->next->n /= temp->n;
	pop(top, l);
}

