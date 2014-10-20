#include <stdio.h>
int main(void)
{
   char c1[] = "World";
   char c2[] = "Hello World";
   int retVal = my_strcmp(c1, c2);
   printf("Return value is %d\n", retVal);
   return retVal;
}

int my_strcmp(void *s1, void *s2) {
   const unsigned char *p0 = (const unsigned char*) s1;
   const unsigned char *p1 = (const unsigned char*) s2;

   while((*p0 != '\0') && (*p0 == *p1)) {
      printf("*p0 = %c\t  *p1 = %c\n", *p0, *p1);
      p0++;
      p1++;
   }
   return *p0 - *p1;
}
