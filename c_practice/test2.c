#include <stdio.h>
#include <stdbool.h>
#include "bsd-waitpid.h"
main()
{
	int ooo = system("rv=$(i2cget -y 0 0x54 0x1b b); echo \"rv is :$rv\" ; exit 7");
	printf("ooo is : %d\n",ooo);
	++ooo;
	bool ans = ((_W_INT(ooo)) & 0377);
	printf("ans is : %d\n",ans);
	
	int idx;
 	if (( idx = system("rv=$(i2cget -y 0 0x54 0x1b b); exit 7")) > 0)
 	{
		printf("idx is :%d\n\n",idx);
   		idx = WEXITSTATUS(idx);
		printf("idx after WEXITSTATUS(ids) is : %d\n",idx);
  	}

        getchar();
}
