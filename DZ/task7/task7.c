#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

extern char** environment;
int main(int argc, char** argv)
{
    if(argc == 1)
    {
        printf("Enter -h for help\n");
        return 0;
    }
    char* opts = "hc:";
    char* envname;
    char* envval;
    int opt;
    while( (opt = getopt(argc, argv, opts)) != -1 ) {
        switch (opt) {
            case 'h': {
                printf("-c  |Enter name of environment variable|\n");
                return 0;
            }

            case 'c': {
                envname = optarg;
                char* val = getenv(envname);
                printf("Value of %s = %s\n",envname,val);
                unsetenv(envname);
                val = getenv(envname);
                if(!val)
                {
                    printf("Current value of %s = %s\n",envname,val);
                    break;
                }
                break;
            }
        }
    }
    return 0;
}
