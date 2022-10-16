#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <getopt.h>
#include <string.h>


int main(int argc,char** argv){
    if(argc == 1)
    {
        printf("Enter -h for help\n");
        return 0;
    }
    char* opts = "ho:c";
    char* fn;
    int opt;
    int mode = 1;
    while( (opt = getopt(argc, argv, opts)) != -1){
        switch (opt){
            case 'h':{
                printf("-h |Print help|\n");
                printf("-o |Path to output file|\n");
                printf("-c |No output| \n");
                break;
            }
            case 'o':{
                fn=optarg;
                printf("Output path: %s\n", fn);
                break;
            }
            case 'c':{
             mode = 0;
                printf("No output!\n");
                break;
            }
        }
    }
return 0;
}
