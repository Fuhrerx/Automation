#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <direct.h>
#include <errno.h>
#include <string.h>

#include "imports.h"

FILE *fp;

void ask_sns();
void ask_model();

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
        ask_model();

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

void ask_model()
{
    int ans1;

    printf("What model are you planning to use : \n");
    printf("Linear Regresssion (1)\nLogistic Regression (2)\nDecision Trees classifier (3)\nDecision Tree regressor (4)\nXGBoost classifier (5)\nXGBoost regressor (6)\n");
    printf("Choose : ");
    scanf("%d", &ans1);

    switch (ans1)
    {
    case 1:
        fprintf(fp, sk_lin);
        fprintf(fp, "\n");
        break;

    case 2:
        fprintf(fp, sk_log);
        fprintf(fp, "\n");
        break;

    case 3:
        fprintf(fp, sk_dec_class);
        fprintf(fp, "\n");
        break;

    case 4:
        fprintf(fp, sk_dec_reg);
        fprintf(fp, "\n");
        break;

    case 5:
        fprintf(fp, xgboost_class);
        fprintf(fp, "\n");
        break;

    case 6:
        fprintf(fp, xgboost_reg);
        fprintf(fp, "\n");
        break;

    default:
        printf("invalid");
    }
}