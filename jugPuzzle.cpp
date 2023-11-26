#include <iostream>
int main()
{
    int jug3 {0};
    int jug5 {0};
    int maxSteps {10};
    bool solved {false};
    std::cout << "Two Jugs Problem: Measure exactly 4 liters of water using a 3-liter jug and a 5-liter jug." << std::endl;
    for (int step = 1; step <= maxSteps; ++step)
    {
        int action;
        std::cout << std::endl << "Step " << step << ":" << std::endl;
        std::cout << "Choose an action:" << std::endl;
        std::cout << "1. Fill the 3-liter jug" << std::endl;
        std::cout << "2. Fill the 5-liter jug" << std::endl;
        std::cout << "3. Pour the water from the 3-liter jug into the 5-liter jug" << std::endl;
        std::cout << "4. Pour the water from the 5-liter jug into the 3-liter jug" << std::endl;
        std::cout << "5. Empty the 3-liter jug" << std::endl;
        std::cout << "6. Empty the 5-liter jug" << std::endl;
        std::cout << "7. Show the solution" << std::endl;
        std::cin >> action;
        if (action == 7)
        {
            std::cout << std::endl << "Solution:" << std::endl;
            std::cout << "1. Fill the 3-liter jug" << std::endl;
            std::cout << "2. Pour the water from the 3-liter jug into the 5-liter jug" << std::endl;
            std::cout << "3. Fill the 3-liter jug" << std::endl;
            std::cout << "4. Pour the water from the 3-liter jug into the 5-liter jug" << std::endl;
            std::cout << "5. Empty the 5-liter jug" << std::endl;
            std::cout << "6. Pour the water from the 3-liter jug into the 5-liter jug" << std::endl;
            std::cout << "Now, the 5-liter jug has exactly 4 liters of water." << std::endl;
            --step;
            continue;
        }
        if (action < 1 || action > 7)
        {
            std::cout << "Invalid input! Try again." << std::endl;
            --step;
            continue;
        }
        switch (action)
        {
        case 1:
            jug3 = 3;
            break;
        case 2:
            jug5 = 5;
            break;
        case 3:
        {
            int pour = std::min(jug3, 5 - jug5);
            jug3 -= pour;
            jug5 += pour;
            break;
        }
        case 4:
        {
            int pour = std::min(jug5, 3 - jug3);
            jug5 -= pour;
            jug3 += pour;
            break;
        }
        case 5:
            jug3 = 0;
            break;
        case 6:
            jug5 = 0;
            break;
        default:
            std::cout << "Invalid action! Try again." << std::endl;
            --step;
            continue;
        }
        std::cout << "Jug (3L): " << jug3 << ", Jug (5L): " << jug5 << std::endl; 
        if (jug3 == 4 || jug5 == 4)
        {
            std::cout << std::endl << "Congratulations! You've solved the riddle and measured exactly 4 liters of water in " << step << " steps." << std::endl;
            solved = true;
            break;
        }
    }
    if (!solved)
    {
        std::cout << std::endl << "You've reached the maximum number of steps. Better luck next time!" << std::endl;
    }
    return 0;
}