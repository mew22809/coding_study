#include <stdio.h>
main(){
	printf("hi...\n");
	long count = 0;
	while( getchar() != EOF)
		++count;
	printf("count is : %ld\n",count);
	system("PAUSE");
}
