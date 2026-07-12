#include <stdio.h>

int main(int argc, char *argv[])
{
    if(argc > 1)
    {
        printf("Program name = %s\n",argv[0] );
    }
    else
    {
        printf("No command-line argument provided.\n");
    }

    return 0;
}
