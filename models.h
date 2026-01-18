#pragma once

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <direct.h>
#include <errno.h>
#include <string.h>

#include "markdown.h"

extern FILE *fp;

// regression models

extern void r_lin_reg();
extern void r_log_reg();
extern void r_dec_tree_reg();
extern void r_xgbooost_reg();
extern void r_lin_ridge_reg();
extern void r_ran_for_reg();
extern void r_k_nearest_reg();
extern void r_lasso_reg();
extern void r_elastic_reg();
extern void r_elastic_reg();
extern void r_svr_reg();

// classification models

extern void c_svm_class();
extern void c_dec_class();
extern void c_ran_for_class();
extern void c_k_near_class();
extern void c_xgboost_class();
extern void c_mlp_class();

extern void r_lin_reg()
{
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "model = LinearRegression()\n");
    fprintf(fp, "model.fit(X_train, y_train)\n");
    fprintf(fp, "model.coef_\n");
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "y_pred = model.predict(X_train)\n");
    fprintf(fp, "y_pred\n");
}

extern void r_log_reg()
{
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "model = LogisticRegression()\n");
    fprintf(fp, "model.fit(X_train, y_train)\n");
    fprintf(fp, "model.coef_\n");
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "y_pred = model.predict(X_train)\n");
    fprintf(fp, "y_pred\n");
}

extern void r_dec_tree_reg()
{
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "model = DecisionTreeRegressor()\n");
    fprintf(fp, "model.fit(X_train, y_train)\n");
    fprintf(fp, "model.coef_\n");
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "y_pred = model.predict(X_train)\n");
    fprintf(fp, "y_pred\n");
}

extern void r_xgbooost_reg()
{
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "model = xgb.XGBRegressor()\n");
    fprintf(fp, "model.fit(X_train, y_train)\n");
    fprintf(fp, "model.coef_\n");
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "y_pred = model.predict(X_train)\n");
    fprintf(fp, "y_pred\n");
}

extern void r_lin_ridge_reg()
{
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "model = Ridge()\n");
    fprintf(fp, "model.fit(X_train, y_train)\n");
    fprintf(fp, "model.coef_\n");
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "y_pred = model.predict(X_train)\n");
    fprintf(fp, "y_pred\n");
}

extern void r_ran_for_reg()
{
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "model = RandomForestRegressor()\n");
    fprintf(fp, "model.fit(X_train, y_train)\n");
    fprintf(fp, "model.coef_\n");
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "y_pred = model.predict(X_train)\n");
    fprintf(fp, "y_pred\n");
}

extern void r_k_nearest_reg()
{
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "model = KNeighborsRegressor()\n");
    fprintf(fp, "model.fit(X_train, y_train)\n");
    fprintf(fp, "model.coef_\n");
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "y_pred = model.predict(X_train)\n");
    fprintf(fp, "y_pred\n");
}

extern void r_lasso_reg()
{
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "model = Lasso()\n");
    fprintf(fp, "model.fit(X_train, y_train)\n");
    fprintf(fp, "model.coef_\n");
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "y_pred = model.predict(X_train)\n");
    fprintf(fp, "y_pred\n");
}

extern void r_elastic_reg()
{
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "model = ElasticNet()\n");
    fprintf(fp, "model.fit(X_train, y_train)\n");
    fprintf(fp, "model.coef_\n");
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "y_pred = model.predict(X_train)\n");
    fprintf(fp, "y_pred\n");
}

extern void r_svr_reg()
{
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "model = SVR()\n");
    fprintf(fp, "model.fit(X_train, y_train)\n");
    fprintf(fp, "model.coef_\n");
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "y_pred = model.predict(X_train)\n");
    fprintf(fp, "y_pred\n");
}

extern void c_svm_class()
{
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "model = SVC()\n");
    fprintf(fp, "model.fit(X_train, y_train)\n");
    fprintf(fp, "model.coef_\n");
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "y_pred = model.predict(X_train)\n");
    fprintf(fp, "y_pred\n");
}

extern void c_dec_class()
{
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "model = DecisionTreeClassifier()\n");
    fprintf(fp, "model.fit(X_train, y_train)\n");
    fprintf(fp, "model.coef_\n");
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "y_pred = model.predict(X_train)\n");
    fprintf(fp, "y_pred\n");
}

extern void c_ran_for_class()
{
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "model = RandomForestClassifier()\n");
    fprintf(fp, "model.fit(X_train, y_train)\n");
    fprintf(fp, "model.coef_\n");
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "y_pred = model.predict(X_train)\n");
    fprintf(fp, "y_pred\n");
}

extern void c_k_near_class()
{
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "model = KNeighborsClassifier()\n");
    fprintf(fp, "model.fit(X_train, y_train)\n");
    fprintf(fp, "model.coef_\n");
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "y_pred = model.predict(X_train)\n");
    fprintf(fp, "y_pred\n");
}

extern void c_xgboost_class()
{
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "model = xgb.XGBClassifier()\n");
    fprintf(fp, "model.fit(X_train, y_train)\n");
    fprintf(fp, "model.coef_\n");
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "y_pred = model.predict(X_train)\n");
    fprintf(fp, "y_pred\n");
}

extern void c_mlp_class()
{
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "model = MLPClassifier()\n");
    fprintf(fp, "model.fit(X_train, y_train)\n");
    fprintf(fp, "model.coef_\n");
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "y_pred = model.predict(X_train)\n");
    fprintf(fp, "y_pred\n");
}