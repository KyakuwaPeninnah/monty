#include "monty.h"

/**
 * rotr - Rotates the stack to the bottom
 * @top: Pointer to the head of the stack
 * @line_number: Line number of the instruction
 */
void rotr(stack_t **top, unsigned int line_number)
{
	stack_t *temp = *top;
	(void)line_number;

	if (temp == NULL || temp->next == NULL)
	{
		return;
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->prev->next = NULL;
	temp->prev = NULL;
	temp->next = *top;
	(*top)->prev = temp;
	*top = temp;
}

