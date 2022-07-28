#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked-> checking malloc
 *@b: param b
 */
void *malloc_checked(unsigned int b);
{
	void *p;

	p = mallock (b);
	if (p ==NULL)
	|	exit(98);
	return (p);

}
