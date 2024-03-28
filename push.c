#include "monty.h"
/**
 * is_number - it describes the character pointer
 * @n: It is a character pointer
 * Return: Always 0
 */
short is_number(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (!isdigit(n[i]))
			return (0);
		i++;
	}
	return (1);
}
/**
 * push - adds a new node at the beginning of a dlinked list
 * @top: double pointer to the stack
 * @l: Line number of the instruction
 */
void push(stack_t **top, unsigned int l)
{
	char *n;
	stack_t *new;

	if (!top)
		return;
	new = malloc(sizeof(stack_t));
	if (!new)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	n = strtok(NULL, " \n");

	if (n != NULL && is_number(n) == 1)
	{
		new->n = atoi(n);
		new->next = *top;
		new->prev = NULL;
		if (*top)
			(*top)->prev = new;
		*top = new;
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", l);
		exit(EXIT_FAILURE);
	}
}

