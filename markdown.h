//
// Please follow m_(func_name) naming markdown functions
//
#pragma once

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <direct.h>
#include <errno.h>
#include <string.h>

#include "utils.h"
#include "scikit/imports.h"

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
extern void m_log_transform();
extern void m_feature_scaling();
extern void m_model_build();
extern void m_model_evaluation();

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

extern void m_log_transform()
{
    fprintf(fp, CELL_MARKDOWN);
    fprintf(fp, "\n");
    fprintf(fp, SUB_HEAD);
    fprintf(fp, L_BOLD);
    fprintf(fp, "Log Transform");
    fprintf(fp, R_BOLD);
    fprintf(fp, "\n");
}

extern void m_feature_scaling()
{
    fprintf(fp, CELL_MARKDOWN);
    fprintf(fp, "\n");
    fprintf(fp, SUB_HEAD);
    fprintf(fp, L_BOLD);
    fprintf(fp, "Feature Scaling");
    fprintf(fp, R_BOLD);
    fprintf(fp, "\n");
}

extern void m_model_build()
{
    fprintf(fp, CELL_MARKDOWN);
    fprintf(fp, "\n");
    fprintf(fp, SUB_HEAD);
    fprintf(fp, L_BOLD);
    fprintf(fp, "Building Model");
    fprintf(fp, R_BOLD);
    fprintf(fp, "\n");
}

extern void m_model_evaluation()
{
    fprintf(fp, CELL_MARKDOWN);
    fprintf(fp, "\n");
    fprintf(fp, SUB_HEAD);
    fprintf(fp, L_BOLD);
    fprintf(fp, "Evaluating model");
    fprintf(fp, R_BOLD);
    fprintf(fp, "\n");
}
