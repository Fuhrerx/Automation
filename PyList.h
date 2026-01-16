#pragma once

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <direct.h>
#include <errno.h>
#include <string.h>

#include "utils.h"
#include "imports.h"

FILE *fp;

void list_model_X();
void list_model_y();

void list_model_X()
{
    int n, i;
    printf("Enter the number of list elements to store on X train/test : ");
    scanf("%d", &n);

    char values[n][25];

    printf("Enter %d list elements : \n", n);
    for (i = 0; i < n; ++i)
    {
        scanf("%s", values[i]);
    }

    fprintf(fp, "X = df[[");
    for (i = 0; i < n; ++i)
    {
        fprintf(fp, "\"%s\"", values[i]);
        if (i < n - 1)
        {
            fprintf(fp, ", ");
        }
    }
    fprintf(fp, "]]\n");
}

void list_model_y()
{
    int n, i;
    printf("Enter the number of list elements to store on y train/test : ");
    scanf("%d", &n);

    char values[n][25];

    printf("Enter %d list elements : \n", n);
    for (i = 0; i < n; ++i)
    {
        scanf("%s", values[i]);
    }

    fprintf(fp, "y = df[[");
    for (i = 0; i < n; ++i)
    {
        fprintf(fp, "\"%s\"", values[i]);
        if (i < n - 1)
        {
            fprintf(fp, ", ");
        }
    }
    fprintf(fp, "]]\n");
}
