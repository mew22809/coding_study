#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    FILE *fPtr;
    char *s = "fuck u yo man , All are not thieves that dogs bark at.\n"; 
    char *cPtr = s;
     
    fPtr = fopen("oldname.txt", "a");
    if (!fPtr) {
        printf("open file failed ...\n");
        exit(1);
    }
     
    while (*cPtr != '\0') {
        fputc(*cPtr, fPtr);
	fflush(fPtr);
        cPtr++;
    }
    fclose(fPtr);
     
    return 0;
}
