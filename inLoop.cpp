#include <iostream>
int main()
{
    bool bContinue{ true };
    int nCounter{ 0 };
    while (bContinue)
    {
        while (bContinue)
        {
            std::cout << "Inside the 2 loops" << std::endl;
            nCounter++;
            if(nCounter > 20)
            {
                bContinue = false;
                break;
            }
            std::cout << "Still going on…" << std::endl;
        }
    }
    std::cout << "broke from 2 loops" << std::endl;
    return 0;
}