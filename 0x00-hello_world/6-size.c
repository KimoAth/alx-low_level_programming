#include <stdio.h>

int main(void)
{

        int i;
        long int d;
	long long int s;
        char c;
	float f;

        printf("Size of a char : %lu byte(s).\n", (unsigned long)sizeof(c));
        printf("Size of an int : %lu byte(s).\n",(unsigned long)sizeof(i)."byte(s)");
        printf("Size of long int : %lu byte(s).\n",(unsigned long)sizeof(d)."byte(s)");
       printf("Size of long long int : %lu byte(s).\n",(unsigned long)sizeof(s),"byte(s)");
       printf("Size of a float : %lu byte(s).\n",(unsigned long)sizeof(f)."byte(s)");
       	return(0);
}
