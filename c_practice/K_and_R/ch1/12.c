#include <stdio.h>
#define IN_WORD 1
#define OUT_WORD 0
main(){
	int a[10];
	int c,state;
	state=IN_WORD;
	while( (c=getchar())!=EOF ){
/*		if((c==' ' || c=='\t' || c=='\n') && state==IN_WORD){
			state = OUT_WORD;
			putchar('\n');
		}
		else if(c!=' ' && c!='\t' && c!='\n'){
			state = IN_WORD;
			putchar(c);
		}
*/
                if( (c==' ') || (c=='\t') || (c=='\n') )
                {
                        state = OUT_WORD;
                        putchar('\n');
                }
                else if( state == OUT_WORD )
                {
                        state = IN_WORD;
                        putchar(c);
                }
                else
                {
                        putchar(c);
                }
	}
}
