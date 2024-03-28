#include "monty.h"

/**
 * rotl - Rotates the stack to the top
 * @top: Pointer to the head of the stack
 * @line_number: Line number of the instruction
 */
void rotl(stack_t **top, unsigned int line_number)
{
	stack_t *temp;
	(void)line_number;
	temp = *top;

	if (top == NULL || (*top)->next == NULL)
	{
		return;
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = *top;
	temp->prev->next = NULL;
	temp->prev = NULL;
	(*top)->prev = temp;
	(*top) = temp;
}

