#include "monty.h"

/**
 * pall - function to print stacks elements
 * @line_number: Instructions where they appears
 * @stack: pointer to the head
 * Return: Nothing
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	(void)line_number;

	current = *stack;

	while (current != NULL)
	{
		printf("%d", current->n);
		current = current->next;
		printf("\n");
	}
}
