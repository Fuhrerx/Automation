//
// App utilities for MLAuto.c file, this is also executabe even from main.c file for bug fixes and development
// use this when you want to deploy as an exe file after an feature/security update.
//
// To devs :
// Dont forget to change any new code updates in main.c file to here, otherwise you may not see the new features
// added in the MLAuto.c/exe file

#pragma once

#include <stdio.h>

#include "../structure/utils.h"

int app();

__declspec(dllexport) int app()
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

        printf("\nFile written successfully at %s\n", relative_path);

        fclose(fp);

        return EXIT_SUCCESS;
    }
    return 0;
}