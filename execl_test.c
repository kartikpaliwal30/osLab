#include<stdio.h>
#include<unistd.h>

void main() {
   execl("./helloworld", "./helloworld", NULL);
   printf("This wouldn't print\n");
   return;
}