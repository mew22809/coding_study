#include <stdio.h>
#include "mew_func_test.h"
int main(int argc, char *argv[]){
	int a = 1;
	int b = mew_func(a);
	printf("integer is %d\n",b);
	printf("argc is %d\n",argc);
	if (argc > 0)
	{
		printf("argv[1] is %s\n",argv[1]);
	}
	return 0;
}
