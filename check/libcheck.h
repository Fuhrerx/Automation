/*
   This code checks for all the essential libraries/header files for the execution of the main file (MLAuto.c)
   Currently the whole library/headers consists of 14 files :
                                    -> App folder
                                        - app.c
                                        - app.dll
                                        - dll.h
                                        - main.so
                                        - MLAuto.exe
                                        - MLAuto.c
                                        - MLAuto.py
                                    -> Scikit folder
                                        - sk_imports.h
                                        - sk_models.h
                                    -> Structure folder
                                        - cells.h
                                        - PyList.h
                                        - utils.h
                                    -> Torch folder
                                        - torch_imports.h
                                        - models_pytorch.h
*/

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
    printf("\n>> Starting debug checks for all essential files...\n");

    FILE *LIB_CHECK;

    if ((LIB_CHECK = fopen(app_c, "r")) != NULL)
    {
        printf("\n>> File '%s' exists and is readable.\n", app_c);
        fclose(LIB_CHECK);
    }
    else
    {
        printf("\n>> File '%s' does not exist or cannot be read.\n", app_c);
        return false;
    }
    if ((LIB_CHECK = fopen(dll_h, "r")) != NULL)
    {
        printf("\n>> File '%s' exists and is readable.\n", dll_h);
        fclose(LIB_CHECK);
    }
    else
    {
        printf("\n>> File '%s' does not exist or cannot be read.\n", dll_h);
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
    if ((LIB_CHECK = fopen(libs_h, "r")) != NULL)
    {
        printf("\n>> File '%s' exists and is readable.\n", libs_h);
        fclose(LIB_CHECK);
    }
    else
    {
        printf("\n>> File '%s' does not exist or cannot be read.\n", libs_h);
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
    if ((LIB_CHECK = fopen(start_prog_h, "r")) != NULL)
    {
        printf("\n>> File '%s' exists and is readable.\n", start_prog_h);
        fclose(LIB_CHECK);
    }
    else
    {
        printf("\n>> File '%s' does not exist or cannot be read.\n", start_prog_h);
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

    printf("\n>> All 17 files exist and are readable. Debug check passed successfully!\n");

    return true;
}
