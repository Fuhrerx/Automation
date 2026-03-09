/*
    Essential header file for the DLL, contains the function declarations and the macro for exporting/importing
    functions from the DLL.
    Add new function declarations here if you add any new functions in the app.c file that you want to export.
*/

#ifdef BUILD_MY_DLL
#define MY_DLL_API __declspec(dllexport)
#else
#define MY_DLL_API __declspec(dllimport)
#endif

MY_DLL_API int cli();
MY_DLL_API int main(int argc, char *argv[]);