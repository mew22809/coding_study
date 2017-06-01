#include <stdio.h>
main()
{
	int ar[3];
	int *ptr1 = ar;
	int *ptr2 = &ar[3];
	int (*aaa)[3];
	int *bbb[3];
	printf("ptr1 is : %p\n",ptr1);
	printf("ptr2 is : %p\n",ptr2);
	getchar();
}
