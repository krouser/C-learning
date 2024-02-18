#include <iostream> 
#ifdef _WIN32
#include <io.h>
#include <fcntl.h>
#else
#include <locale>
#endif
 
int main()
{
#ifdef _WIN32
    _setmode(_fileno(stdout), _O_U16TEXT);
#else
    std::locale::global(std::locale(""));
    std::wcout.imbue(std::locale());
#endif
    std::wcout << L"אבא" << std::endl;
}