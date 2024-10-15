#include <iostream>
#include <iterator>
#include <map>
 
int main()
{
std::multimap<int, int> multi1;
 
    multi1.insert(std::pair<int, int>(1, 10));
    multi1.insert(std::pair<int, int>(2, 20));
    multi1.insert(std::pair<int, int>(3, 30));
    multi1.insert(std::pair<int, int>(8, 40));
    multi1.insert(std::pair<int, int>(8, 50));
 
    std::multimap<int, int>::iterator itr;
    std::cout << "Our multimap contains the following elements: " << std::endl;
    std::cout << "\tKEY\tELEMENT" << std::endl;
 
for (itr = multi1.begin(); itr != multi1.end(); ++itr)
    {
        std::cout << '\t' << itr->first << '\t' << itr->second << std::endl;
    }
    std::cout << std::endl;
 
    multi1.insert(std::pair<int, int>(5, 80));
    multi1.insert(std::pair<int, int>(6, 11));
 
    std::cout << "Once we added more elements mluti1 now contains: " << std::endl;
    std::cout << "\tKEY\tELEMENT" << std::endl;
    for (itr = multi1.begin(); itr != multi1.end(); ++itr) 
    {
        std::cout << '\t' << itr->first << '\t' << itr->second << std::endl;
    }
    std::cout << std::endl;
 
    int num;
    num = multi1.erase(8);
    std::cout << "We run multi1.erase(8) and " << num << " elements were removed" << std::endl;
    std::cout << "\tKEY\tELEMENT" << std::endl;
    for (itr = multi1.begin(); itr != multi1.end(); ++itr) 
    {
        std::cout << '\t' << itr->first << '\t' << itr->second << std::endl;
    }
 
}