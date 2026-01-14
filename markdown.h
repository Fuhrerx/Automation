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

const char MAIN_HEAD[7] = "# ###";
const char SUB_HEAD[5] = "# ##";
const char CELL[10] = "# %%%%";
const char CELL_MARKDOWN[20] = "# %%%%[markdown]";
const char BOLD[5] = " **";

void libs();
void read_csv();

void libs()
{
    fprintf(fp, CELL_MARKDOWN);
    fprintf(fp, "\n");
    fprintf(fp, SUB_HEAD);
    fprintf(fp, BOLD);
    fprintf(fp, "Importing Libraries/Frameworks");
    fprintf(fp, BOLD);
    fprintf(fp, "\n");
    fprintf(fp, CELL);
    fprintf(fp, "\n");
}

void read_csv()
{
    fprintf(fp, CELL_MARKDOWN);
    fprintf(fp, "\n");
    fprintf(fp, SUB_HEAD);
    fprintf(fp, BOLD);
    fprintf(fp, "Reading CSV file");
    fprintf(fp, BOLD);
    fprintf(fp, "\n");
    fprintf(fp, CELL);
    fprintf(fp, "\n");
}