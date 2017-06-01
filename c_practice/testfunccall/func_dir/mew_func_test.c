#include <stdio.h>
#include "mew_func_test.h"
int mew_func(int tmp)
{
	printf("func has been called");
	return tmp+1;
}
