#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Total arguments:%d",argc);
    if(argc > 1)
    {
        printf("First argument = %s\n", argv[1]);
    }
    else
    {
        printf("No command-line argument provided.\n");
    }

    return 0;
}
