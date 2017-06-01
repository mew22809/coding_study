#include <stdio.h>
main(){
	int a;
	int b=0;
	while( (a=getchar()) != EOF )
		if( a == '\n' )
			++b;
	printf("b is : %d\n",b);
}
