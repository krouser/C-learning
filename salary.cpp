#include <iostream> 
int main()
{
    int myEmploymentStatus;
    const double FULLTIME_SALARY = 30000;
    const double PARTTIME_SALARY = 15000;
    const double TEMPSALARY = 5000;
    float mySuccessScore, salaryRaise = 0.0;
    double rate;
    double bonus_pay = 1500;
    std::cout << "Please enter your employment type?" << std::endl;
    std::cout << "1 - full-time\n2 - part-time\n3 - a temp" << std::endl;
    std::cin >> myEmploymentStatus;
    std::cout << "Please enter your success score (how are you doing at work) between 1-10" << std::endl;
    std::cin >> mySuccessScore;
    std::cout << std::endl;
    if (myEmploymentStatus == 1)
    {
        if (mySuccessScore >= 8)
        {
            rate = 0.04;
            salaryRaise = FULLTIME_SALARY * (1 + rate) + bonus_pay;
        }
        else if (mySuccessScore < 8 && mySuccessScore >= 6)
        {
            rate = 0.025;
            salaryRaise = FULLTIME_SALARY * (1 + rate) + bonus_pay;
        }
        else
        {
            salaryRaise = FULLTIME_SALARY;
        }
    }
    else if (myEmploymentStatus == 2)
    {
        if (mySuccessScore >= 8)
        {
            rate = 0.03;
            salaryRaise = PARTTIME_SALARY * rate;
        }
        else
            if (mySuccessScore < 8 && mySuccessScore >= 6)
            {
                rate = 0.015;
                salaryRaise = PARTTIME_SALARY * rate;
            }
            else
            {
                salaryRaise = PARTTIME_SALARY;
            }
    }
    else if (myEmploymentStatus == 3)
    {
        salaryRaise = TEMPSALARY;
    }
    else
    {
        std::cout << " No result" << std::endl;
    }
    std::cout << "Your salary raise is: $" << salaryRaise << std::endl;
    return 0;
}