#include "monty.h"
/**
  * pop - Removes the top element of a stack
  * @top: Pointer to the head of the stack
  * @l: Line number of the instruction
  */
void pop(stack_t **top, unsigned int l)
{
	stack_t *temp = *top;

	if (temp == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", l);
		exit(EXIT_FAILURE);
	}

	if (temp->next != NULL)
	{
		*top = temp->next;
		temp->next->prev = NULL;
	}
	else
	{
		*top = NULL;
	}
	free(temp);
}

