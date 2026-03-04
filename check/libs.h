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

// ../App files
#define app .h "../App/app.h"
#define app .dll "../App/app.dll"
#define main .so "../App/main.so"
#define MLAuto .exe "../App/MLAuto.exe"
#define MLAuto .c "../App/MLAuto.c"
#define MLAuto .py "../App/MLAuto.py"

// ../py_torch files
#define torch_imports .h "../py_torch/torch_imports.h"
#define models_pytorch .h "../py_torch/models_pytorch.h"

// ../scikit files
#define sk_imports .h "../scikit/sk_imports.h"
#define sk_models .h "../scikit/sk_models.h"

// ../structure files
#define cells .h "../structure/cells.h"
#define markdown .h "../structure/markdown.h"
#define PyList .h "../structure/PyList.h"
#define utils .h "../structure/utils.h"
#define PyList .h "../structure/PyList.h"
