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

typedef struct
{
    char col_entry[25];
} cols;

extern void read_csv_file();
extern void drop();
extern void hist();
extern void corr();
extern void heatmap();
extern void pairplot();
extern void model();

extern void read_csv_file()
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

extern void drop()
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

extern void hist()
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

extern void corr()
{
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "corr = df.corr()\n");
    fprintf(fp, "corr\n");
}

extern void heatmap()
{
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "sns.heatmap(corr, cmap='Blues', annot=True)\n");
    fprintf(fp, "plt.show\n");
}

extern void pairplot()
{
    int n;
    cols col[n];

    fprintf(fp, CELL);
    fprintf(fp, "\n");

    printf("Enter the no of columns for pairplot : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Enter the coulmn name(s) for pairplot : ");
        scanf("%s", &col);

        fprintf(fp, "df_numrc = df[[\"%s\"]]", col);
    }
}

extern void model()
{
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "X = df[[]]         #add values to train/test\n");
    fprintf(fp, "y = df[[]]         #add values to train\n");
    fprintf(fp, "X_train, X_test, y_train, y_test = train_test_split(X, y, test_size= 0.2, random_state=42)\n");
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "X_train\n");
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "X_test\n");
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "y_train\n");
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "y_test\n");
}