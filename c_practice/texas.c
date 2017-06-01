#include <stdio.h>
int increase(int abc){
     abc++;
     return abc;
}
main(){
     	unsigned int fnPtr[50];
     	fnPtr[5] = (unsigned int)increase;
     	int b;
  	b = ((int (*)(int))*(fnPtr+5))(6);
	printf("b is : %d",b);
}
