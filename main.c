#include <stdio.h>
#include <string.h>

void print_arguments(char** args, int len){
    int i = 0;
    while (i < len){
        printf("arguments: %s\n", args[i]);
        i++;
    }
}

int main (int argc, char** argv) {
    if (!argc || !strlen(argv[0])){
        return -1;
    }
    print_arguments(argv, argc);
    return 0;
}