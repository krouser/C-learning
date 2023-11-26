#include <iostream>
int main()
{
    int n_CurNum{ 2 }, n_TopValue{ 1000000 }, i;
    bool b_IsPrime = true;
    std::cout << "This program will find all prime numbers between 1 and 1000." << std::endl << std::endl;
 
    for (n_CurNum = 2; n_CurNum <= n_TopValue; ++n_CurNum)
    {
        b_IsPrime = true;
        for (i = 2; i <= n_CurNum / 2; ++i)
        {
            if (n_CurNum % i == 0)
            {
                b_IsPrime = false;
                break;
            }
        }
        if (b_IsPrime)
        {
            if (n_CurNum == 2)
            {
                std::cout << "The prime numbers are: " << n_CurNum;
            }
            else
            {
                std::cout << ", " << n_CurNum;
            }
        }
    }
    std::cout << "." << std::endl;
    return 0;
}