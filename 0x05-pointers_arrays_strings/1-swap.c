#include "main.h"

/**
 * reset_to_98 - swap values of a and b
 *
 * @a: pointer a
 * @b: pointer b
 */

void swap_int(int *a, int *b)
{
int hold;
hold = *a;
*a = *b;
*b = hold;
}
