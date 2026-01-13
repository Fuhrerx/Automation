#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <direct.h>
#include <errno.h>
#include <string.h>

#include "imports.h"

FILE *fp;

void ask_sns();

int main()
{
    const char *dir_name = "python_automation";
    const char *relative_path = "python_automation/main.py";
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
        fprintf(fp, pd);
        fprintf(fp, "\n");
        fprintf(fp, np);
        fprintf(fp, "\n");
        fprintf(fp, torch);
        fprintf(fp, "\n");
        fprintf(fp, plt);
        fprintf(fp, "\n");
        fprintf(fp, tts);
        fprintf(fp, "\n");

        ask_sns();

        printf("File written successfully at %s\n", relative_path);
        fclose(fp);
    }

    return 0;
}

void ask_sns()
{
    char ans[4];

    printf("Do you want seaborn library? (yes/no) : ");
    scanf("%s", ans);

    lower(ans);

    if (strcmp(ans, "yes") == 0)
    {
        fprintf(fp, sns);
        fprintf(fp, "\n");
    }
}