//
// Add functions in order for easier navigation
//
#pragma once

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <direct.h>
#include <errno.h>
#include <string.h>

#include "../scikit/imports.h"
#include "markdown.h"
#include "PyList.h"

extern FILE *fp;

typedef struct
{
    char col_entry[25];
} cols;

extern void read_csv_file();
extern void drop();
extern void hist();
extern void log_transform();
extern void std_scaler();
extern void corr();
extern void heatmap();
extern void pairplot();
extern void model_build();
extern void model_eval();

extern void read_csv_file()
{
    char csv_dir[SIZE];

    printf("\n>> Enter the directory of the CSV file : \n-- ");
    scanf("%s", csv_dir);
    if (strcmp(csv_dir, "exit") == 0)
    {
        printf("\n>> Program Terminated!\n");
        exit(1);
    }

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

    printf("\n>> Enter the no of columns to drop (type 0 if none): \n-- ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("\n>> Enter the column name : \n-- ");
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

    printf("\n>> Enter the no of columns to plot a histogram (0 if none) : \n-- ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("\n>> Enter the column name : \n-- ");
        scanf("%s", &cols);

        fprintf(fp, "df.hist(\"%s\")\n", cols);
        fprintf(fp, "plt.show\n");
    }
}

extern void log_transform()
{
    char ans[5];

    printf("\n>> Do you need log scaling/transformation(yes/no) : \n-- ");
    scanf("%s", &ans);
    if (strcmp(ans, "exit") == 0)
    {
        exit(1);
    }

    lower(ans);

    if (strcmp(ans, "yes") == 0)
    {
        m_log_transform();
        fprintf(fp, CELL);
        fprintf(fp, "\n");
        list_log_l();
        fprintf(fp, " = ");
        list_log_r();
    }
    else if (strcmp(ans, "no") == 0)
    {
        printf("\n>> Not applied, move forward!\n");
    }
    else
    {
        system("cls");
        printf("\n>> Invalid input, please use yes or no\n");
        log_transform();
    }
}

extern void std_scaler()
{
    if (ans_reg == 1)
    {
        fprintf(fp, CELL);
        fprintf(fp, "\n");
        fprintf(fp, "scaler = StandardScaler()\n");
        fprintf(fp, "df = scaler.fit_transform(df)\n");
    }
    else if (ans_reg == 2)
    {
        fprintf(fp, CELL);
        fprintf(fp, "\n");
        fprintf(fp, "scaler = StandardScaler()\n");
        fprintf(fp, "df = scaler.fit_transform(df)\n");
    }
    else if (ans_reg == 5)
    {
        fprintf(fp, CELL);
        fprintf(fp, "\n");
        fprintf(fp, "scaler = StandardScaler()\n");
        fprintf(fp, "df = scaler.fit_transform(df)\n");
    }
    else if (ans_reg == 7)
    {
        fprintf(fp, CELL);
        fprintf(fp, "\n");
        fprintf(fp, "scaler = StandardScaler()\n");
        fprintf(fp, "df = scaler.fit_transform(df)\n");
    }
    else if (ans_reg == 8)
    {
        fprintf(fp, CELL);
        fprintf(fp, "\n");
        fprintf(fp, "scaler = StandardScaler()\n");
        fprintf(fp, "df = scaler.fit_transform(df)\n");
    }
    else if (ans_reg == 10)
    {
        fprintf(fp, CELL);
        fprintf(fp, "\n");
        fprintf(fp, "scaler = StandardScaler()\n");
        fprintf(fp, "df = scaler.fit_transform(df)\n");
    }
    else if (ans_class == 1)
    {
        fprintf(fp, CELL);
        fprintf(fp, "\n");
        fprintf(fp, "scaler = StandardScaler()\n");
        fprintf(fp, "df = scaler.fit_transform(df)\n");
    }
    else if (ans_class == 4)
    {
        fprintf(fp, CELL);
        fprintf(fp, "\n");
        fprintf(fp, "scaler = StandardScaler()\n");
        fprintf(fp, "df = scaler.fit_transform(df)\n");
    }
    else if (ans_class == 6)
    {
        fprintf(fp, CELL);
        fprintf(fp, "\n");
        fprintf(fp, "scaler = StandardScaler()\n");
        fprintf(fp, "df = scaler.fit_transform(df)\n");
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
    fprintf(fp, CELL);
    fprintf(fp, "\n");

    list_pairplot();
    fprintf(fp, "sns.pairplot(df_numrc, kind='scatter', plot_kws={'alpha': 0.4})\n");
}

extern void model_build()
{
    if (strcmp(ans_pytorch, "no") == 0)
    {
        fprintf(fp, CELL);
        fprintf(fp, "\n");
        list_model_X();
        list_model_y();
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

        if (model == 1)
        {
            switch (ans_reg)
            {
            case 1:
                r_lin_reg();
                break;

            case 2:
                r_log_reg();
                break;

            case 3:
                r_dec_tree_reg();
                break;

            case 4:
                r_xgbooost_reg();
                break;

            case 5:
                r_lin_ridge_reg();
                break;

            case 6:
                r_ran_for_reg();
                break;

            case 7:
                r_k_nearest_reg();
                break;

            case 8:
                r_lasso_reg();
                break;

            case 9:
                r_elastic_reg();
                break;

            case 10:
                r_svr_reg();
                break;

            default:
                system("cls");
                printf(">> Not a valid model : choose again!");
                model_build();
            }
        }
        else if (model == 2)
        {
            switch (ans_class)
            {
            case 1:
                c_svm_class();
                break;

            case 2:
                c_dec_class();
                break;

            case 3:
                c_ran_for_class();
                break;

            case 4:
                c_k_near_class();
                break;

            case 5:
                c_xgboost_class();
                break;

            case 6:
                c_mlp_class();
                break;

            default:
                system("cls");
                printf(">> Invalid input, please input again");
                model_build();
            }
        }
    }
}

extern void model_eval()
{
    if (strcmp(ans_pytorch, "no") == 0)
    {
        fprintf(fp, CELL);
        fprintf(fp, "\n");
        fprintf(fp, "train_mse = mean_squared_error(y_train, y_pred)\n");
        fprintf(fp, "train_mse\n");
        fprintf(fp, CELL);
        fprintf(fp, "\n");
        fprintf(fp, "train_r2 = r2_score(y_train, y_pred)\n");
        fprintf(fp, "train_r2\n");
        fprintf(fp, CELL);
        fprintf(fp, "\n");
        fprintf(fp, "accuracy = accuracy_score(y_train, y_pred, normalize=True, sample_weight=None)\n");
        fprintf(fp, "accuracy*100\n");
    }
}