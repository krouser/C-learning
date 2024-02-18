#include <fstream>
#include <iostream>
#include <filesystem>
#include <vector>
 
void RecGetAllFiles(std::wstring path,
    std::vector<std::wstring>& filenames,
    const std::wstring& space)
{
 
    const std::filesystem::path filesVault{ path };
    try
    {
        for (auto const& dirEntry : std::filesystem::directory_iterator{ filesVault })
        {
            std::wcout << space << dirEntry.path().filename().wstring() << L'\n';
 
            filenames.push_back(dirEntry.path().wstring());
            if (dirEntry.is_directory())
            {
                RecGetAllFiles(dirEntry.path().wstring(), filenames, L"    " + space);
            }
        }
    }
 
    catch (std::filesystem::filesystem_error const& ex)
    {
        std::wcout << L"Error: " << std::endl
            << L"what():  " << ex.what() << std::endl
            << L"path1(): " << ex.path1().wstring() << std::endl
            << L"path2(): " << ex.path2().wstring() << std::endl;
    }
}
 
void scanFilesAndPrintResult(std::wstring path, std::vector<std::wstring>& filenames)
{
    std::wcout << path << std::endl;
    RecGetAllFiles(path, filenames, L" |_>");
}
 
int main(int argc, wchar_t** argv)
{
    std::wstring path;
    if (argc == 1)
    {
        std::wcout << L"Please enter a starting path to scan all files within it: " << std::endl;
        std::getline(std::wcin, path);
 
    }
    else if (argc == 2)
    {
        path = argv[1];
    }
    std::vector <std::wstring> filenames = std::vector<std::wstring>();
    scanFilesAndPrintResult(path, filenames);
 

    for (auto it = filenames.begin(); it != filenames.end(); ++it)
    {
        std::wstring s((*it).begin(), (*it).end());
        std::wcout << s << std::endl;
    }
 
    return 0;
}