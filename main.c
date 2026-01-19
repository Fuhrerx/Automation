//
// Copyright Akshay Babu (c) 2026, All rights reserved.
// This is : Build v1.2.5(beta), since its open source any edits or
// alterations are allowed by the author for code resusablility
// and workflow automation, please feel free to edit or report any
// issues.
//

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <direct.h>
#include <errno.h>
#include <string.h>

#include "utils.h"

int main(int argc, char *argv[])
{
    ask_dir_name();
    ask_dir_path();
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

        m_model_build();

        model_build();

        m_model_evaluation();

        printf("\n");
        printf("File written successfully at %s", relative_path);
        printf("\n");

        fclose(fp);

        return EXIT_SUCCESS;
    }

    return 0;
}
