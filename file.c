#include <stdio.h>

int main(void)
{
    FILE *file = fopen("file.csv", "r");

    char line[100];
    while (fgets(line, sizeof(line), file) != NULL)
    {
        printf("%s", line);
    }

    fclose(file);
}