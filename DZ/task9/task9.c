#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/utsname.h>

int main(int argc,char** argv)
{
    struct utsname info;
    uname(&info);
    char buff[255];
    gethostname(buff, 255);

    printf("Name your machine: %s\n",info.nodename);
    printf("Type your machine: %s\n",info.machine);
    printf("System name: %s\n",info.sysname);
    printf("Release your machine: %s\n",info.release);
    printf("Version of your machine: %s\n",info.version);
    printf("Host name your machine: %s\n",buff);
    printf("Host ID your machint: %ld\n",gethostid());
    
    return 0;
}
