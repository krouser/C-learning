#include <iostream>
#include <random>
#include <chrono>
#include <memory>
 
void movePlayer(int &position, int steps)
{
    position += steps;
}
 
bool checkWin(int position, int target)
{
    return position >= target;
}
 
int throwDice()
{
    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<int> distribution(1, 6);
    return distribution(generator);
}
 
void checkEncounters(int &position, const std::shared_ptr<int[]> snakes, const std::shared_ptr<int[]> ladders, const std::shared_ptr<int[]> ladderTargets, const std::string& playerType)
{
    for (int i = 0; i < 10; i++)
    {
        if (position == snakes[i])
        {
            position = 5;
            std::cout << "Oops! " << playerType << " encountered a snake. It moves back to position 5." << std::endl;
            break;
        }
        if (position == ladders[i])
        {
            position = ladderTargets[i];
            std::cout << "Great! " << playerType << " found a ladder. It moves ahead to position " << ladderTargets[i] << "." << std::endl;
            break;
        }
    }
}
 
int main()
{
    int playerPosition{ 0 };
    int computerPosition{ 0 };
    const int targetPosition{ 100 };
 
    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<int> distribution(1, targetPosition - 1);
 
    auto snakes = std::make_shared<int[]>(10);
    auto ladders = std::make_shared<int[]>(10);
    auto ladderTargets = std::make_shared<int[]>(10);
 
    for (int i = 0; i < 10; i++)
    {
        snakes[i] = distribution(generator);
        ladders[i] = distribution(generator);
        ladderTargets[i] = distribution(generator);
    }
 
    std::cout << "Welcome to the Snake and Ladders Game!" << std::endl;
    std::cout << "You need to reach the target position (" << targetPosition << ") to win." << std::endl;
 
    while (!checkWin(playerPosition, targetPosition) && !checkWin(computerPosition, targetPosition))
    {
        std::cout << "Press Enter to roll the dice...";
        std::cin.ignore();
 
        int playerSteps = throwDice();
        int computerSteps = throwDice();
 
        movePlayer(playerPosition, playerSteps);
        movePlayer(computerPosition, computerSteps);
 
        checkEncounters(playerPosition, snakes, ladders, ladderTargets, "Player");
        checkEncounters(computerPosition, snakes, ladders, ladderTargets, "Computer");
 
        std::cout << "Player Position: " << playerPosition << std::endl;
        std::cout << "Computer Position: " << computerPosition << std::endl;
    }
 
    if (checkWin(playerPosition, targetPosition))
        std::cout << "Congratulations! You won the game." << std::endl;
    else
        std::cout << "Oops! The computer won the game." << std::endl;
 
    return 0;
}