#include <stdio.h>
#include "ft_printf.h"
int main()
{
	int *p = NULL;
	printf("%p\n", p);
	ft_printf("%p", p);
}
