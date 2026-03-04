//
// For main.so creation, do not execute this file, instead execute the App/MLAuto.c in the App directory
// and then run the command : `gcc -shared -o main.so -fPIC app.c` in the terminal to create the
// main.so file in the App directory, for 64 bit app.dll creation using msys2 terminal, use the command :
// `gcc -shared -o app.dll -Wl,--out-implib,libapp.a -fPIC app.c`
//

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <direct.h>
#include <errno.h>
#include <string.h>

#include "../structure/utils.h"

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        printf("\n>> Welcome to MLAuto CLI!\n");
        printf("\n>> Usage : \t./MLAuto [-flag]\n");
        printf("\n>> For Flag info, use [-h] flag.\n");

        return EXIT_SUCCESS;
    }
    else if (strcmp(argv[1], "-h") == 0)
    {
        printf("\n>> Help :\n");
        printf("\n>> [-h]\t\tShow this help section\n");
        printf("\n>> [-v]\t\tShow version info\n");
        printf("\n>> [-d]\t\tDebug mode\n");
        printf("\n>> [-w]\t\tWrite output to file\n");
        printf("\n>> [-r]\t\tRead input from file\n");

        return EXIT_SUCCESS;
    }
    else if (strcmp(argv[1], "-v") == 0)
    {
        printf("\n>> MLAuto Version : 1.3.2 (beta)\n");
        printf("\n>> Copyright (c) Akshay_Babu, All rights reserved!\n");

        return EXIT_SUCCESS;
    }
    else if (strcmp(argv[1], "-d") == 0)
    {
        printf("\n>> Debug mode activated!\n");
        debug();

        return EXIT_SUCCESS;
    }
    else if (strcmp(argv[1], "-w") == 0)
    {
        cli();

        return EXIT_SUCCESS;
    }
    else if (strcmp(argv[1], "-r") == 0)
    {
        cli();

        return EXIT_SUCCESS;
    }
    else
    {
        printf("\n>> Invalid flag! Use [-h] for help.\n");

        return EXIT_FAILURE;
    }

    return 0;
}

int cli()
{
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