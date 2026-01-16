#pragma once

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <direct.h>
#include <errno.h>
#include <string.h>

#include "utils.h"
#include "imports.h"

void list();

void list()
{
    int n, i;
    printf("Enter the number of list elements to store : ");
    scanf("%d", &n);

    char *values = (char *)malloc(n * sizeof(char));
    if (values == NULL)
    {
        printf("Memory allocation failed\n");
    }

    printf("Enter %d list elements : \n", n);
    for (i = 0; i < n; ++i)
    {
        scanf("%s", &values[i]);
    }

    printf("Displaying integers in array (like Python list format):\n");
    printf("[");
    for (i = 0; i < n; ++i)
    {
        printf("%s", values[i]);
        if (i < n - 1)
        {
            printf(", ");
        }
    }
    printf("]\n");

    free(values);
}