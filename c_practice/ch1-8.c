#include <stdio.h>
main(){
	long bc,tc,nc;
	bc = 0;
	tc = 0;
	nc = 0;
	int x;
	while( (x=getchar()) != EOF ){
		switch(x){
			case ' ':
				++bc;
				break;
			case '\t':
				++tc; break;
			case '\n':
				++nc; break;
			default:
				break;
		}
	}
	printf("bc is :%ld\n",bc);
	printf("tc is :%ld\n",tc);
	printf("nc is :%ld\n",nc);
}
