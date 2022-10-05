#include "monty.h"

/**
 * m_pstr - print string from stack of ints up to null byte
 * @stack: double pointer to head of stack
 * @line_number: line number of current operation
 * Return: void
 */

void m_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	int i;

	(void)line_number;

	tmp = *stack;
	while (tmp != NULL)
	{
		i = tmp->n;
		if (!isascii(i) || i == 0)
			break;
		putchar(i);
		tmp = tmp->next;
		if (tmp == *stack)
			break;
	}
	putchar('\n');
}
