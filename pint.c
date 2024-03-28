#include "monty.h"

/**
 * pint - prints all the elements of a stack.
 * @top: pointer to the stack
 * @l: Line number of the instruction
 */
void  pint(stack_t **top, unsigned int l)
{
	if (!*top)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", l);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*top)->n);
}

