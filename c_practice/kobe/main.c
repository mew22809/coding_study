#include <stdio.h>
#include "function_kobe.h"
main()
{
	printf("hi , this is mew...\n");
	kobe('K');

#ifdef KB81
	int data[]={
		#include "kobe_data.h"
	};
	printf("data of kobe\'4\' is : %d\n",data[3]);
#endif

}
