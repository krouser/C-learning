#include <iostream>
int main() 
{
    unsigned int num_customers{ 5000 };
    short num_items_sold{ 100 };
    unsigned short num_days_open{ 7 };
    long total_profit{ 10000000 };
    long long total_revenue{ 100000000000 };
    long double average_rating{ 4.5 };
    std::cout << "There are " << num_customers << " customers who bought " << num_items_sold
        << " items over " << num_days_open << " days." << std::endl;
    std::cout << "The store has made a total profit of $" << total_profit << " and generated $"
        << total_revenue << " in total revenue." << std::endl;
    std::cout << "The average customer rating is " << average_rating << " stars." << std::endl;
    return 0;
}