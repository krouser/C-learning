#include <tuple>
#include <iostream>
#include <string>
 
std::tuple<std::string, int, int>GetData()
{
    return std::make_tuple("Susan", 1234, 25);
}
 
void PutData(const std::tuple<std::string, int, int>& data)
{
    std::cout << get<0>(data) << ' ' << get<1>(data) << ' ' << get<2>(data) << std::endl; 
}
 
int main()
{
    auto [name, id, age] = GetData();
    auto data = GetData();
    auto combined = std::tuple_cat(data, std::make_tuple(1.0f));
    std::cout << std::get <std::string>(combined) << std::endl;
    {
        auto data = std::tie(name, id, age);
        data = std::make_tuple("foobar", 123, 50);
    }
    PutData({ "Joe", 4567, 30 });
}