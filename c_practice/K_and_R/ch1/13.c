#include <stdio.h>
#define IN_WORD 1
#define OUT_WORD 0
void main()
{
        int c, state, nc=0, statistics_of_length[51]={0};
        while( (c=getchar()) != EOF )
        {
                if( (c==' ') || (c=='\t') || (c=='\n') )
                {
                        state = OUT_WORD;
                        if ( nc >= 1 )  statistics_of_length[nc]++;
                }
                else if (state == OUT_WORD)
                {
                        state = IN_WORD;
                        nc = 1;
                }
                else    nc++;
        }

        for(nc = 1; nc<=50 ; nc++)
        {
//                printf("\nnumber of %3d-length words is : %3d", nc, statistics_of_length[nc]);
                printf("\nnumber of %3d-length words is : ", nc);
                c=0;
                while( (statistics_of_length[nc] - c++)>0 )     printf("*"); 
        }
}
