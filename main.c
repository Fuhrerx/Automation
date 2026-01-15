#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <direct.h>
#include <errno.h>
#include <string.h>

#include "utils.h"

int main(int argc, char *argv[])
{
    dir_check();

    if (fp == NULL)
    {
        printf("Error opening file with relative path: %s\n", strerror(errno));
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

        printf("\n");
        printf("File written successfully at %s\n", relative_path);
        printf("\n");

        fclose(fp);

        return EXIT_SUCCESS;
    }

    return 0;
}
