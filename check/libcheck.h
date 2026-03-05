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
        fclose(LIB_CHECK);
    }
    else
    {
        printf("\n>> File '%s' does not exist or cannot be read.\n", app_h);
        return false;
    }
    if ((LIB_CHECK = fopen(app_dll, "r")) != NULL)
    {
        printf("\n>> File '%s' exists and is readable.\n", app_dll);
        fclose(LIB_CHECK);
    }
    else
    {
        printf("\n>> File '%s' does not exist or cannot be read.\n", app_dll);
        return false;
    }
    if ((LIB_CHECK = fopen(main_so, "r")) != NULL)
    {
        printf("\n>> File '%s' exists and is readable.\n", main_so);
        fclose(LIB_CHECK);
    }
    else
    {
        printf("\n>> File '%s' does not exist or cannot be read.\n", main_so);
        return false;
    }
    if ((LIB_CHECK = fopen(MLAuto_exe, "r")) != NULL)
    {
        printf("\n>> File '%s' exists and is readable.\n", MLAuto_exe);
        fclose(LIB_CHECK);
    }
    else
    {
        printf("\n>> File '%s' does not exist or cannot be read.\n", MLAuto_exe);
        return false;
    }
    if ((LIB_CHECK = fopen(MLAuto_c, "r")) != NULL)
    {
        printf("\n>> File '%s' exists and is readable.\n", MLAuto_c);
        fclose(LIB_CHECK);
    }
    else
    {
        printf("\n>> File '%s' does not exist or cannot be read.\n", MLAuto_c);
        return false;
    }
    if ((LIB_CHECK = fopen(MLAuto_py, "r")) != NULL)
    {
        printf("\n>> File '%s' exists and is readable.\n", MLAuto_py);
        fclose(LIB_CHECK);
    }
    else
    {
        printf("\n>> File '%s' does not exist or cannot be read.\n", MLAuto_py);
        return false;
    }
    if ((LIB_CHECK = fopen(torch_imports_h, "r")) != NULL)
    {
        printf("\n>> File '%s' exists and is readable.\n", torch_imports_h);
        fclose(LIB_CHECK);
    }
    else
    {
        printf("\n>> File '%s' does not exist or cannot be read.\n", torch_imports_h);
        return false;
    }
    if ((LIB_CHECK = fopen(models_pytorch_h, "r")) != NULL)
    {
        printf("\n>> File '%s' exists and is readable.\n", models_pytorch_h);
        fclose(LIB_CHECK);
    }
    else
    {
        printf("\n>> File '%s' does not exist or cannot be read.\n", models_pytorch_h);
        return false;
    }
    if ((LIB_CHECK = fopen(sk_imports_h, "r")) != NULL)
    {
        printf("\n>> File '%s' exists and is readable.\n", sk_imports_h);
        fclose(LIB_CHECK);
    }
    else
    {
        printf("\n>> File '%s' does not exist or cannot be read.\n", sk_imports_h);
        return false;
    }
    if ((LIB_CHECK = fopen(sk_models_h, "r")) != NULL)
    {
        printf("\n>> File '%s' exists and is readable.\n", sk_models_h);
        fclose(LIB_CHECK);
    }
    else
    {
        printf("\n>> File '%s' does not exist or cannot be read.\n", sk_models_h);
        return false;
    }
    if ((LIB_CHECK = fopen(cells_h, "r")) != NULL)
    {
        printf("\n>> File '%s' exists and is readable.\n", cells_h);
        fclose(LIB_CHECK);
    }
    else
    {
        printf("\n>> File '%s' does not exist or cannot be read.\n", cells_h);
        return false;
    }
    if ((LIB_CHECK = fopen(markdown_h, "r")) != NULL)
    {
        printf("\n>> File '%s' exists and is readable.\n", markdown_h);
        fclose(LIB_CHECK);
    }
    else
    {
        printf("\n>> File '%s' does not exist or cannot be read.\n", markdown_h);
        return false;
    }
    if ((LIB_CHECK = fopen(PyList_h, "r")) != NULL)
    {
        printf("\n>> File '%s' exists and is readable.\n", PyList_h);
        fclose(LIB_CHECK);
    }
    else
    {
        printf("\n>> File '%s' does not exist or cannot be read.\n", PyList_h);
        return false;
    }
    if ((LIB_CHECK = fopen(utils_h, "r")) != NULL)
    {
        printf("\n>> File '%s' exists and is readable.\n", utils_h);
        fclose(LIB_CHECK);
    }
    else
    {
        printf("\n>> File '%s' does not exist or cannot be read.\n", utils_h);
        return false;
    }

    return true;
}
