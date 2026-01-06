#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
//    char name[8];
   // char* name = "Hello";
   char c = '\t';
   // printf("%p\n", name);
   printf("%d\n", iscntrl(c));
}