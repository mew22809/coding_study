#include <stdio.h>
main(){
	int c;
	int bf=0;
	while( (c=getchar()) != EOF ){
		if(c==' ' && bf==0){
			bf=1;
			putchar(c);
		}
		else if(c!=' '){
			bf=0;
			putchar(c);
		}
	}
}
