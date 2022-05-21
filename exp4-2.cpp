#include <iostream>
#include <sys/wait.h>
#include <unistd.h>
using namespace std;

int main()
{
    pid_t id1 = fork();
    pid_t id2 = fork();
    if(id1 > 0 && id2 > 0)
    {
        cout<<"In child process "<<getpid()<<endl;
        wait(NULL);
	cout<<"In child process with parent "<<getppid()<<endl;
    }
    if (id1 > 0 && id2 > 0){
        wait(NULL);
        wait(NULL);
        cout<<"parent terminated"<<endl;
    }
    else if(id1 == 0 && id2 == 0){
        sleep(2);
        wait(NULL);
        cout<<"1st child terminated"<<endl;
    }
    else if(id1 > 0 && id2 == 0){
        sleep(1);
        cout<<"2nd child terminated"<<endl;
    }
    else{
        cout<<"Grand child terminated"<<endl;
        exit(0);
    }
}
