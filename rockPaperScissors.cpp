#include <iostream>
#include <array>
 
int main()
{
    std::array<int, 3> choices = { 0, 1, 2 };
    std::array<int, 11> computer_choices = { 1, 2, 1, 0, 0, 2, 1, 0, 2, 1, 1 };
    int user_wins = 0;
    int computer_wins = 0;
    bool play_again = true;
    while (play_again)
    {
        int computer_choice_index = 0;
        std::cout << "Let's play a game of rock-paper-scissors!" << std::endl;
        while (true)
        {
            std::cout << "Enter your choice (0 for rock, 1 for paper, or 2 for scissors): ";
            int user_choice;
            std::cin >> user_choice;
            int computer_choice = computer_choices[computer_choice_index];
            std::cout << "You chose ";
            if (user_choice == 0)
            {
                std::cout << "rock";
            }
            else if (user_choice == 1)
            {
                std::cout << "paper";
            }
            else if (user_choice == 2)
            {
                std::cout << "scissors";
            }
            else
            {
                std::cout << "Invalid choice! Choose again." << std::endl;
                continue;
            }
            std::cout << ", and the computer chose ";
            if (computer_choice == 0)
            {
                std::cout << "rock";
            }
            else if (computer_choice == 1)
            {
                std::cout << "paper";
            }
            else if (computer_choice == 2)
            {
                std::cout << "scissors";
            }
            std::cout << std::endl;
            if (user_choice == 0)
            {
                if (computer_choice == 1)
                {
                    std::cout << "Paper covers rock. You lose!" << std::endl;
                    computer_wins++;
                    break;
                }
                else if (computer_choice == 2)
                {
                    std::cout << "Rock smashes scissors. You win!" << std::endl;
                    user_wins++;
                    break;
                }
                else
                {
                    std::cout << "It's a tie! Choose again." << std::endl;
 
                }
            }
            else if (user_choice == 1)
            {
                if (computer_choice == 2)
                {
                    std::cout << "Scissors cut paper. You lose!" << std::endl;
                    computer_wins++;
                    break;
                }
                else if (computer_choice == 0)
                {
                    std::cout << "Paper covers rock. You win!" << std::endl;
                    user_wins++;
                    break;
                }
                else
                {
                    std::cout << "It's a tie! Choose again." << std::endl;
                }
            }
            else if (user_choice == 2)
            {
                if (computer_choice == 0)
                {
                    std::cout << "Rock smashes scissors. You lose!" << std::endl;
                    computer_wins++;
                    break;
                }
                else if (computer_choice == 1)
                {
                    std::cout << "Scissors cut paper. You win!" << std::endl;
                    user_wins++;
                    break;
                }
                else
                {
                    std::cout << "It's a tie! Choose again." << std::endl;
                }
            }
            computer_choice_index = (computer_choice_index + 1) % computer_choices.size();
        }
        std::cout << "You have won " << user_wins << " times, and the computer has won " << computer_wins << " times." << std::endl;
        std::cout << "Do you want to play again? (y/n): ";
        char play_again_choice;
        std::cin >> play_again_choice;
        play_again = (play_again_choice == 'y' || play_again_choice == 'Y');
    }
    return 0;
}