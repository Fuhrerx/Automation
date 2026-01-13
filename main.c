#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <direct.h>
#include <errno.h>
#include <string.h>

#include "imports.h"

int main()
{
    FILE *fp;
    const char *dir_name = "python_automation";
    const char *relative_path = "python_automation/main.ipynb";
    int result = _mkdir(dir_name);

    if (result == 0)
    {
        printf("Directory '%s' created successfully.\n", dir_name);
    }
    else
    {
        if (errno == EEXIST)
        {
            printf("Directory '%s' already exists.\n", dir_name);
        }
        else
        {
            perror("Error creating directory");
        }
    }

    fp = fopen(relative_path, "w");

    if (fp == NULL)
    {
        printf("Error opening file with relative path: %s\n", strerror(errno));
    }
    else
    {
        fclose(fp);
        printf("File written successfully at %s\n", relative_path);
    }

    fprintf(fp, sns);

    return 0;
}
