#include<stdio.h>
#include<unistd.h>

int main() {
   int pid;
   pid = fork();
   
   if (pid == 0) {
      printf("Child process: Running Hello World Program\n");
      execl("./helloworld", "./helloworld", (char *)0);
      printf("This wouldn't print\n");
   } else { 
      sleep(3);
      printf("Parent process: Running While loop Program\n");
      execl("./while_loop", "./while_loop", (char *)0);
      printf("Won't reach here\n");
   }
   return 0;
}
