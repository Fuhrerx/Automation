#ifdef BUILD_MY_DLL
    #define MY_DLL_API __declspec(dllexport)
#else
    #define MY_DLL_API __declspec(dllimport)
#endif

MY_DLL_API int cli();
MY_DLL_API int main(int argc, char *argv[]);