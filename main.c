#include "monty.h"
stack_t *stack = NULL;
/**
 * main - Monty program entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	unsigned int ln;
	char line[1024];
	FILE *script;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	script =  fopen(argv[1], "r");

	if (script == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	ln = 1;
	while (fgets(line, 1024, script))
	{
		if (strtok(line, " \n") != NULL)
			search_instruction(line, ln);
		ln++;
	}
	return (0);
}

/**
 * search_instruction - it searches characters
 * @l: unassigned integer
 * @line: character pointer
 **/
void search_instruction(char *line, unsigned int l)
{
	unsigned int i;
	instruction_t list[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"sub", sub},
		{"divide", divide},
		{"nop",nop},
		{"multiply", multiply},
		{"modulo", modulo},
		{"pchar", pchar},
		{"pstr", pstr},
		{"rotl", rotl},
		{"rotr", rotr}
	};
	for (i = 0; i < sizeof(list) / sizeof(instruction_t); i++)
	{

		if (strcmp(list[i].opcode, line) == 0)
		{
			list[i].f(&stack, l);
			return;
		}
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", l, line);
	exit(EXIT_FAILURE);
}

