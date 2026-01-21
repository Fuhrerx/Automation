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

#include "utils.h"
#include "imports.h"

FILE *fp;

extern char list_log_l();
extern char list_log_r();
extern void list_pairplot();
extern void list_model_X();
extern void list_model_y();

extern char list_log_l()
{
    int n, i;
    printf("Enter the number of list elements to log transform : ");
    scanf("%d", &n);

    char values[n][25];

    printf("\nEnter new names of %d list elements : \n", n);
    for (i = 0; i < n; ++i)
    {
        scanf("%s", values[i]);
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
    printf("Enter the number of list elements to log transform : ");
    scanf("%d", &n);

    char values[n][25];

    printf("\nEnter %d list elements that should be transformed : \n", n);
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
    printf("\nEnter the number of list elements to store on pairplot : ");
    scanf("%d", &n);

    char values[n][25];

    printf("\nEnter %d list elements : \n", n);
    for (i = 0; i < n; ++i)
    {
        scanf("%s", values[i]);
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
    printf("\nEnter the number of list elements to store on X train/test : ");
    scanf("%d", &n);

    char values[n][25];

    printf("\nEnter %d list elements : \n", n);
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

extern void list_model_y()
{
    int n, i;
    printf("\nEnter the number of list elements to store on y train/test : ");
    scanf("%d", &n);

    char values[n][25];

    printf("\nEnter %d list elements : \n", n);
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
