#include <iostream>
#include <string>
 
int main()
 
{
   std::wstring test1{ L"שלום" };
   std::wstring test2{ L"سلام" };
   std::wstring test3{ L"和平" };
 
   std::wcout << test1 << std::endl;
   std::wcout << test2 << std::endl;
   std::wcout << test3 << std::endl;
 
}