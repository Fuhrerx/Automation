//
// Copyright (c) 2026 Akshay_Babu, All rights reserved.
// This is : Build v1.3.1(beta), since its open source and under MIT Licence any edits or
// alterations are allowed by the author for code resusablility
// and workflow automation, please feel free to edit or report any
// issues.
//

// #pragma once

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <direct.h>
#include <errno.h>
#include <string.h>

#include "utils.h"

extern int app(); // TODO : use only for app creation

int main(int argc, char *argv[])
{
    // ask_dir_name(); // TODO : ADD CUSTOM NAME AND PATH
    // ask_dir_path();
    start_prog();

    dir_check();

    if (fp == NULL)
    {
        printf("\nError opening file with relative path: %s\n", strerror(errno));
        printf("\n");

        return EXIT_FAILURE;
    }
    else
    {
        m_libs();

        base_imports();
        ask_torch();
        ask_model();

        m_read_csv();

        read_csv_file();
        drop();

        m_plot();

        hist();
        corr();
        heatmap();
        pairplot();

        log_transform();

        m_feature_scaling();

        std_scaler();

        m_model_build();

        model_build();

        m_model_evaluation();

        model_eval();

        printf("\n");
        printf("File written successfully at %s", relative_path);
        printf("\n");

        fclose(fp);

        return EXIT_SUCCESS;
    }
    return 0;
}

extern int app()
{
    // ask_dir_name(); // TODO : ADD CUSTOM NAME AND PATH
    // ask_dir_path();
    start_prog();

    dir_check();

    if (fp == NULL)
    {
        printf("\nError opening file with relative path: %s\n", strerror(errno));
        printf("\n");

        return EXIT_FAILURE;
    }
    else
    {
        m_libs();

        base_imports();
        ask_torch();
        ask_model();

        m_read_csv();

        read_csv_file();
        drop();

        m_plot();

        hist();
        corr();
        heatmap();
        pairplot();

        log_transform();

        m_feature_scaling();

        std_scaler();

        m_model_build();

        model_build();

        m_model_evaluation();

        model_eval();

        printf("\n");
        printf("File written successfully at %s", relative_path);
        printf("\n");

        fclose(fp);

        return EXIT_SUCCESS;
    }
    return 0;
}
