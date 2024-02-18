#include <iostream> 
#include <string> 
#include <algorithm> 
 
const int numMonths{ 12 };
const int numCities{ 4 };
 
std::wstring TempraturesInCities[numCities + 1][numMonths + 1] =
{ 
    {L"", L"January", L"February", L"March", L"April", L"May", L"June", L"July", L"August", L"September", L"October", L"November", L"December"}, 
    {L"New York", L"2", L"4", L"0", L"8", L"12", L"18", L"27", L"28", L"31", L"19", L"7", L"1"}, 
    {L"London", L"8", L"3", L"10", L"12", L"19", L"22", L"25", L"29", L"18", L"15", L"7", L"5"}, 
    {L"Barcelona", L"10", L"9", L"15", L"20", L"25", L"27", L"30", L"33", L"25", L"12", L"10", L"8"}, 
    {L"Paris", L"0", L"3", L"10", L"15", L"19", L"21", L"27", L"31", L"20", L"13", L"4", L"0"} 
}; 
 
inline std::wstring GET_CITY_NAME(int n) { return TempraturesInCities[n][0]; }
inline std::wstring GET_MONTH_NAME(int n) { return TempraturesInCities[0][n]; }
 
typedef enum
{ 
    Month, 
    City 
} Element; 
 
inline void SetLower(std::wstring& s) { std::transform(s.begin(), s.end(), s.begin(), tolower); }
 
int GetData(std::wstring input, Element element)
{ 
    int result{ -1 }; 
    SetLower(input); 
    switch (element) 
    { 
        case Month:
        { 
            for (int i = 1; i < numMonths + 1; i++) 
            { 
                std::wstring temp = TempraturesInCities[0][i]; 
                SetLower(temp); 
 
                if (temp == input) 
                { 
                    result = i; 
                    break; 
                } 
            } 
        } 
        break; 
        case City:
        { 
            for (int i = 1; i < numCities + 1; i++) 
            { 
                std::wstring temp = TempraturesInCities[i][0]; 
                SetLower(temp); 
    
                if (temp == input) 
                { 
                    result = i; 
                    break; 
                } 
            } 
        } 
        break; 
        default: 
        break; 
    } 
    return result; 
} 
 
int main() 
{ 
    std::wstring city;
    std::wstring month; 
    int cityIndex{ -1 };
    int monthIndex{ -1 }; 
    bool bShouldRun{ true };
    while (bShouldRun) 
    { 
        std::wcout << L"Please enter a city: " << std::endl;
        std::getline(std::wcin, city); 
        cityIndex = GetData(city, City);
        if (cityIndex != -1) break;
        std::wcout << L"City " << city << L" not found." << std::endl;
        bShouldRun = false;
    } 
    while (bShouldRun) 
    { 
        std::wcout << L"Please enter the month in which you wish to get the temperatures in " << city << ": " << std::endl;
        std::wcin >> month; 
        monthIndex = GetData(month, Month);
        if (monthIndex != -1) break;
        std::wcout << L"Month " << month << L" not found." << std::endl;
        bShouldRun = false;
    } 
    if (bShouldRun) 
    { 
        std::wcout << L"The average temperature in " << GET_CITY_NAME(cityIndex) << L" during " << GET_MONTH_NAME(monthIndex) << L" is " << TempraturesInCities[cityIndex][monthIndex] << L" degrees C." << std::endl;
    } 
    return 0; 
} 