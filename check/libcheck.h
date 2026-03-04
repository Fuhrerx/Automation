#pragma once

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <direct.h>
#include <errno.h>
#include <string.h>

#include "libs.h"
#include "../scikit/sk_imports.h"
#include "../structure/cells.h"
#include "../structure/PyList.h"
#include "../structure/utils.h"

bool debug();

bool debug()
{
    FILE *LIB_CHECK;

    if ((LIB_CHECK = fopen(app_h, "r")) != NULL)
    {
        printf("\n>> File '%s' exists and is readable.\n", app_h);
    }
    if ((LIB_CHECK = fopen(app_dll, "r")) != NULL)
    {
        printf("\n>> File '%s' exists and is readable.\n", app_dll);
    }
    if ((LIB_CHECK = fopen(main_so, "r")) != NULL)
    {
        printf("\n>> File '%s' exists and is readable.\n", main_so);
    }
    if ((LIB_CHECK = fopen(MLAuto_exe, "r")) != NULL)
    {
        printf("\n>> File '%s' exists and is readable.\n", MLAuto_exe);
    }
    if ((LIB_CHECK = fopen(MLAuto_c, "r")) != NULL)
    {
        printf("\n>> File '%s' exists and is readable.\n", MLAuto_c);
    }
    if ((LIB_CHECK = fopen(MLAuto_py, "r")) != NULL)
    {
        printf("\n>> File '%s' exists and is readable.\n", MLAuto_py);
    }
    if ((LIB_CHECK = fopen(torch_imports_h, "r")) != NULL)
    {
        printf("\n>> File '%s' exists and is readable.\n", torch_imports_h);
    }
    if ((LIB_CHECK = fopen(models_pytorch_h, "r")) != NULL)
    {
        printf("\n>> File '%s' exists and is readable.\n", models_pytorch_h);
    }
    if ((LIB_CHECK = fopen(sk_imports_h, "r")) != NULL)
    {
        printf("\n>> File '%s' exists and is readable.\n", sk_imports_h);
    }
    if ((LIB_CHECK = fopen(sk_models_h, "r")) != NULL)
    {
        printf("\n>> File '%s' exists and is readable.\n", sk_models_h);
    }
    if ((LIB_CHECK = fopen(cells_h, "r")) != NULL)
    {
        printf("\n>> File '%s' exists and is readable.\n", cells_h);
    }
    if ((LIB_CHECK = fopen(markdown_h, "r")) != NULL)
    {
        printf("\n>> File '%s' exists and is readable.\n", markdown_h);
    }
    if ((LIB_CHECK = fopen(PyList_h, "r")) != NULL)
    {
        printf("\n>> File '%s' exists and is readable.\n", PyList_h);
    }
    if ((LIB_CHECK = fopen(utils_h, "r")) != NULL)
    {
        fclose(LIB_CHECK);
        printf("\n>> File '%s' exists and is readable.\n", utils_h);
    }
    else
    {
        // If fopen returns NULL, the file does not exist or an error occurred.
        return printf("\n>> File '%s' does not exist or cannot be read.\n", app_h);
    }
}