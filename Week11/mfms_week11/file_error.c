#include <stdio.h>

int main(void)
{
    FILE *fp;

    fp = fopen("missing.txt", "r");

    if (fp == NULL)
    {
        perror("File opening failed");
        return 1;
    }

    printf("File opened successfully!\n");

    fclose(fp);

    return 0;
}