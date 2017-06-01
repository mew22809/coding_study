#include <stdio.h>
typedef void (*FUNCPTR)(int,char);

void abc(){};

main(){
	const int *(*(*const xyz)[10])(const char *);
	
	void *voidptr = ( void (*)() )0;

	//---segfault example.3
	/*char *p=NULL;
	{
		char c='T';
		p=&c;
	}
	*p='R';*/

	//---segfault example.2
	char *str = "Foo";
	*str = 'b';

	//---segfault example.3
	//int *p=NULL;
	//*p=3;
	int a=0x1;
	int b=0x40;
	int c=0x80;
	int d=0x8000;
	int e=(a|b|c|d);
	abc();
	FILE *pidptr;
	int **intptr;
	FUNCPTR funcptr;
	printf("size of function pointer is : %d\n",sizeof(funcptr));
	printf("size of FUNCPTR is : %d\n",sizeof(FUNCPTR));
	printf("hi ~\n");
	getchar();
}
