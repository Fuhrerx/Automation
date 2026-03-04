#pragma once

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <direct.h>
#include <errno.h>
#include <string.h>

#include "../scikit/sk_imports.h"
#include "../structure/cells.h"
#include "../structure/PyList.h"
#include "../structure/utils.h"

bool file_exists(const char *filename);

FILE *LIB_CHECK;

bool file_exists(const char *filename)
{
    FILE *file;
    // Try to open the file in read mode ("r")
    if ((file = fopen(filename, "r")) != NULL)
    {
        // If successful, the file exists and is readable. Close the file.
        fclose(file);
        return printf("\n>> File '%s' exists and is readable.\n", filename);
    }
    else
    {
        // If fopen returns NULL, the file does not exist or an error occurred.
        return printf("\n>> File '%s' does not exist or cannot be read.\n", filename);
    }
}