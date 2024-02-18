#include <iostream>
#include <string>
#include <vector>
 
struct flat
{
    std::wstring Apartment;
    std::wstring Tenant;
};
 
 
int AddResident(std::vector<flat> *info, std::wstring Apartment, std::wstring Tenant)
{
    if (info == nullptr)
    {
        return 0;
    }
 
    flat temp;
    temp.Apartment = Apartment;
    temp.Tenant = Tenant;
    info->insert(info->end(), temp);
    return info->size();
}
void PrintBuildingInfo(std::vector<flat> *info)
{
    for (int i = 0; i < info->size(); i++)
    {
        flat temp;
        temp = info->at(i);
        std::wcout << L"Resident " << i << std::endl << L"Appt: " << temp.Apartment << std::endl << L"Name: " << temp.Tenant << std::endl;
    }
}
int main()
{
     std::vector<flat>* MyBuilding = new std::vector<flat>;
 
    int ID = AddResident(MyBuilding, L"A1", L"John");
    ID = AddResident(MyBuilding, L"A2", L"James");
    ID = AddResident(MyBuilding, L"B1", L"Thomas");
 
    PrintBuildingInfo(MyBuilding);
    delete MyBuilding;
    MyBuilding = nullptr;
 
    return EXIT_SUCCESS;
}