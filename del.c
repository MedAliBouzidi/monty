#include "monty.h"

/**
 * del - take ele from top
 *
 * Return: Nothing
*/
void del(void)
{
	stack_t *node;

	node = args->head;
	args->head = node->next;
	free(node);
}

