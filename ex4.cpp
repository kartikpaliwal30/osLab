#include<iostream>
#include<unistd.h>
using namespace std;
int main(){	
	int pid;
	pid = fork();
	if(pid == 0)
	{ cout<<"\nchild process id: "<<getpid()<<endl;
	  cout<<"\nchild process with parent id: "<<getppid()<<endl;
	} return 0; }
