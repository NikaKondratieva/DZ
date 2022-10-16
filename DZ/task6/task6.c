#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

extern char** environment;

int main(int argc, char** argv){
    if(argc == 1) {
        printf("Enter -h for help\n");
        return 0;
    }
    int flag = 0;
    char* opts = "ha:b:";
    char* envname;
    char* envval;
    int opt;
    while( (opt = getopt(argc, argv, opts)) != -1 ){
        switch (opt){
            case 'h': {   
                printf("-h    |Enter for help|\n");
                printf("-a    |Enter name of environment variable|\n");
                printf("-b    |Enter value for variable|\n");
                return 0;
            }
            case 'a': {
                envname = optarg;
                char* val = getenv(envname);
                printf("Value of %s = %s\n",envname,val);
                break;
            }
           case 'b': {
                envval = optarg;
                printf("New value: %s\n",envval);
                break;
            }
        }
    }
 if (flag == 2) {
        setenv(envname, envval, 0);
        printf("New value: %s = %s\n",envname,getenv(envname));
    }
    return 0;
}
