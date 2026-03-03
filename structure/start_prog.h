#pragma once

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <direct.h>
#include <errno.h>
#include <string.h>
#include <ctype.h>

#include "markdown.h"
#include "../scikit/sk_imports.h"
#include "../scikit/sk_models.h"
#include "../py_torch/torch_imports.h"

extern void start_prog();

extern void start_prog()
{
    printf("\n-----------------------------------------------------------\n");
    printf("\n----MACHINE LEARNING PIPEPLINE AUTOMATOR 1.3.2 (MLAuto)----\n");
    printf("\n------Copyright (c) Akshay_babu, All rights reserved!------\n");
    printf("\n----------Type 'exit' to exit from the program!------------\n");
    printf("\n-----------------------------------------------------------\n");
}