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
const char L_BOLD[5] = " **";
const char R_BOLD[5] = "**";

extern void m_libs();
extern void m_read_csv();
extern void m_plot();

extern void m_libs()
{
    fprintf(fp, CELL_MARKDOWN);
    fprintf(fp, "\n");
    fprintf(fp, SUB_HEAD);
    fprintf(fp, L_BOLD);
    fprintf(fp, "Importing Libraries/Frameworks");
    fprintf(fp, R_BOLD);
    fprintf(fp, "\n");
    fprintf(fp, CELL);
    fprintf(fp, "\n");
}

extern void m_read_csv()
{
    fprintf(fp, CELL_MARKDOWN);
    fprintf(fp, "\n");
    fprintf(fp, SUB_HEAD);
    fprintf(fp, L_BOLD);
    fprintf(fp, "Reading CSV file");
    fprintf(fp, R_BOLD);
    fprintf(fp, "\n");
    fprintf(fp, CELL);
    fprintf(fp, "\n");
}

extern void m_plot()
{
    fprintf(fp, CELL_MARKDOWN);
    fprintf(fp, "\n");
    fprintf(fp, SUB_HEAD);
    fprintf(fp, L_BOLD);
    fprintf(fp, "Plotting And EDA");
    fprintf(fp, R_BOLD);
    fprintf(fp, "\n");
}
