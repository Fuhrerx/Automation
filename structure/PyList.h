//
// Use list_(func name) naming for pylist creation
//
#pragma once

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <direct.h>
#include <errno.h>
#include <string.h>

#include "../scikit/sk_imports.h"
#include "utils.h"

extern FILE *fp;

extern char list_log_l();
extern char list_log_r();
extern void list_pairplot();
extern void list_model_X();
extern void list_model_y();

extern char list_log_l()
{
    int n, i;
    printf("\n>> Enter the number of list elements/columns to log transform : \n-- ");
    scanf("%d", &n);

    char values[n][25];

    printf("\n>> Enter new names of %d list elements/columns : \n-- ", n);
    for (i = 0; i < n; ++i)
    {
        scanf("%s", values[i]);
    }
    if (strcmp(values[i], "exit") == 0)
    {
        exit(1);
    }

    fprintf(fp, "df = df[");
    for (i = 0; i < n; ++i)
    {
        fprintf(fp, "\"%s\"", values[i]);
        if (i < n - 1)
        {
            fprintf(fp, ", ");
        }
    }
    fprintf(fp, "]");
}

extern char list_log_r()
{
    int n, i;
    printf("\n>> Enter the number of list elements/columns to log transform : \n-- ");
    scanf("%d", &n);

    char values[n][25];

    printf("\n>> Enter the name(s) of %d list elements/columns that should be transformed : \n-- ", n);
    for (i = 0; i < n; ++i)
    {
        scanf("%s", values[i]);
    }

    fprintf(fp, "np.log2(df[");
    for (i = 0; i < n; ++i)
    {
        fprintf(fp, "\"%s\"", values[i]);
        if (i < n - 1)
        {
            fprintf(fp, ", ");
        }
    }
    fprintf(fp, "])\n");
}

extern void list_pairplot()
{
    int n, i;
    printf("\n>> Enter the number of list elements/columns to store on pairplot : \n-- ");
    scanf("%d", &n);

    char values[n][25];

    for (i = 1; i <= n; i++)
    {
        printf("\n>> Enter the name(s) of %d list elements/columns : \n-- ", n);
        scanf("%s", values[i]);
    }
    if (strcmp(values[i], "exit") == 0)
    {
        exit(1);
    }

    fprintf(fp, "df_numrc = df[[");
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

extern void list_model_X()
{
    int n, i;

    if (strcmp(ans_pytorch, "no") == 0)
    {
        printf("\n>> Enter the number of list elements/columns to store on X train/test : \n-- ");
        scanf("%d", &n);

        char values[n][25];

        printf("\n>> Enter name(s) of %d list elements/columns : \n-- ", n);
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
}

extern void list_model_y()
{
    int n, i;

    if (strcmp(ans_pytorch, "no") == 0)
    {
        printf("\n>> Enter the number of list elements/columns to store on y train/test : \n-- ");
        scanf("%d", &n);

        char values[n][25];

        printf("\n>> Enter the name(s) of %d list elements/columns : \n-- ", n);
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
}