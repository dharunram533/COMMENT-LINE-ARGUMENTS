#include <stdio.h>

int main(int argc, char *argv[])
{
    if(argc > 1)
    {
        printf("command-line argument provided.");
    }
    else
    {
        printf("No command-line argument provided.\n");
    }

    return 0;
}
