#include "monty.h"

/**
 * all_free - set the memo for everything free
 *
 * Return: Nothing
 */
void all_free(void)
{
	c_file();
	free_tok();
	ags_free();
}
