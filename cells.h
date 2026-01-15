#pragma once

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <direct.h>
#include <errno.h>
#include <string.h>

#include "utils.h"
#include "imports.h"
#include "markdown.h"

FILE *fp;

void read_csv_file();

void read_csv_file()
{
    char csv_dir[200];

    printf("Enter the directory of the CSV file : ");
    scanf("%s", csv_dir);

    fprintf(fp, "df = pd.read_csv(r\"%s\")\n", csv_dir);
    fprintf(fp, "df\n");
    fprintf(fp, CELL);
    fprintf(fp, "\ndf.info()\n");
    fprintf(fp, CELL);
    fprintf(fp, "\ndf.describe()");
}