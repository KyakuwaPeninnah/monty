#include "monty.h"

/**
 * pstr - Prints a string starting at the top of the stack
 * @top: Pointer to the head of the stack
 * @line_number: Line number of the instruction
 */
void pstr(stack_t **top, unsigned int line_number)
{
	stack_t *temp = *top;
	(void)line_number;

	while (temp != NULL && temp->n != 0)
	{
		if (temp->n < 0 || temp->n > 127)
		{
			break;
		}
		putchar(temp->n);
		temp = temp->next;
	}
	putchar('\n');
}

