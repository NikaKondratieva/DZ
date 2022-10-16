#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

extern char** environ;

int main(int argc, char** argv)
{
    if(argc == 1)
    {
        printf("Enter -h for help\n");
        return 0;
    }
    char* opts = "ha:";
    int opt;
    while( (opt = getopt(argc, argv, opts)) != -1 )  {
        switch (opt) {
            case 'h':{
                printf("-h  |Print help|\n");
                printf("-a  |Enter name of environment variable|\n");
                break;
            }

            case 'a':  {
                char* envname = optarg;
                char* val = getenv(envname);
                printf("%s = %s\n",envname,val);
                break;
            }
        }
    }
    return 0;
}
