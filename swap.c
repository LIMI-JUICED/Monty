#include "monty.h"

/**
 * swap - function that swaps the top two elements on the stack
 * @stack: pointer to the top of the stack
 * @line_number: line number of instructions
 * Return: void exit with -1 on failure
 */
void swap(stack_t **stack, unsigned int line_number)
{
	int temp;

	if (len(stack) < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n" line_number);
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}
