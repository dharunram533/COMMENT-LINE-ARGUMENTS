#include <stdio.h>

int main(int argc, char *argv[])
{
    int i, j, count;

    if (argc == 1)
    {
        printf("No command-line arguments entered.\n");
        return 0;
    };

    for (i = 1; i < argc; i++)
    {
        count = 0;

        for (j = 0; argv[i][j] != '\0'; j++)
        {
            count++;
        }
        printf("Length     : %d\n\n", count);
    }

    return 0;
}
