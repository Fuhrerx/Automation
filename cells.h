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
void drop();
void hist();
void corr();
void heatmap();
void pairplot();

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
    fprintf(fp, "\ndf.describe()\n");
}

void drop()
{
    int n;
    char cols[25];

    fprintf(fp, CELL);
    fprintf(fp, "\n");

    printf("Enter the no of columns to drop : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Enter the column name : ");
        scanf("%s", &cols);

        fprintf(fp, "df = df.drop(columns= \"%s\", axis= 1, inplace = True)\n", cols);
    }
}

void hist()
{
    int n;
    char cols[25];

    fprintf(fp, CELL);
    fprintf(fp, "\n");

    printf("Enter the no of columns to plot a histogram : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Enter the column name : ");
        scanf("%s", &cols);

        fprintf(fp, "df.hist(\"%s\")\n", cols);
        fprintf(fp, "plt.show\n");
    }
}

void corr()
{
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "corr = df.corr()\n");
    fprintf(fp, "corr\n");
}

void heatmap()
{
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "sns.heatmap(corr, cmap='Blues', annot=True)\n");
    fprintf(fp, "plt.show\n");
}

void pairplot()
{
    typedef struct
    {
        char col_entry[25];
    } cols;

    int n;
    cols col[6];

    fprintf(fp, CELL);
    fprintf(fp, "\n");

    printf("Enter the no of columns for pairplot : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Enter the coulmn name(s) for pairplot : ");
        scanf("%s", &col);

        fprintf(fp, "df_numrc = df[[\"%s\", \"%s\", \"%s\", \"%s\", \"%s\", \"%s\"]]", col);
    }
}