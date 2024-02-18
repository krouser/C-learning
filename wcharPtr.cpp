#include <iostream>
 
int main()
{
    const wchar_t mytext[] = L"this is my test text";
 
    for (size_t i = 0; i < wcslen(mytext); i++)
    {
        const wchar_t *address = &mytext[i];
        std::wcout << "Character: " << mytext[i] << " Address: " << address << std::endl;
    }
 
    return 0;
}