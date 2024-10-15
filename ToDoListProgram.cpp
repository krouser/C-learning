#include <iostream>
#include <vector>
#include <array>
#include <fstream>
//#include <numeric_limits>
#include <limits>
 
int main()
{
    const char FILENAME[]{ "todo_list.txt" };
    const int MAX_TASKS{ 100 };
    const char COMPLETED_MARK{ 'X' };
 
    std::vector<std::array<char, MAX_TASKS>> taskNames;
    std::vector<bool> taskCompleted;
 
    int taskCount{ 0 };
 
    std::cout << "Welcome to your to-do list!" << std::endl << std::endl;


    std::ifstream file(FILENAME); /// we open the file with an input file stream using our FILENAME constant


    if (file.is_open()) /// we check if the file is open using
    {
        char line[MAX_TASKS + 2];
        while (file.getline(line, sizeof(line)) && taskCount < MAX_TASKS) ///if it is open, we Read the file line by line using the getline method of the file stream
        {

            ///we need to parse each line, and our code parses it character by character to separate the task name and completed status
            int pos{ 0 };
            bool bCompleted{ false };
            std::array<char, MAX_TASKS> task;
            while (pos < MAX_TASKS - 1 && line[pos] != '\n' && line[pos] != '\0')
            {
                if (line[pos] == COMPLETED_MARK)
                {
                    bCompleted = true;
                    break;
                }
                else
                {
                    task[pos] = line[pos];
                }
 
 
                pos++;
            }
            task[pos] = '\0';

            /// we need to store the task name and completed status. 
            /// Our code stores the task name and completed status in the taskNames and taskCompleted vectors
            taskNames.push_back(task);
            taskCompleted.push_back(bCompleted);
 
            ++taskCount;
        }
        
        /// we close the file using the close method of the file stream
        file.close();
        std::cout << "Data loaded from file." << std::endl << std::endl;
    }
    else
    {
        std::cout << "No saved data found." << std::endl << std::endl;
    }
 
    
    /// We define bool bShouldRun{ true }; as our flag to control the program’s flow
    bool bShouldRun{ true };;
    
    
    ////The next step is to enter a while loop that will execute as long as bShouldRun is true 
    while (bShouldRun)
    {
        
        /// Now we write the while loop’s logic. First, we display a menu of options for the user to select from
        std::cout << "Please select an option:" << std::endl;
        std::cout << "1. Add an item" << std::endl;
        std::cout << "2. Show me what I need to do" << std::endl;
        std::cout << "3. Mark an item as completed" << std::endl;
        std::cout << "4. Save data to a file" << std::endl;
        std::cout << "5. Exit" << std::endl << std::endl;
 
        
        /// we prompt the user to enter their choice of option and read in the value
        int option;
        std::cout << "Your choice: ";
        std::cin >> option;
        std::cout << "" << std::endl;
 
        
        /// While we are still in the while loop, 
        /// we use a switch statement to execute the code corresponding to the selected option
        switch (option)
        {
        case 1:
            if (taskCount < MAX_TASKS)
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::array<char, MAX_TASKS> task;
                std::cout << "Enter a task name: ";
                std::cin.getline(task.data(), MAX_TASKS);
                taskNames.push_back(task);
                taskCompleted.push_back(false);
                taskCount++;
                std::cout << "Task added." << std::endl << std::endl;
            }
            else
            {
                std::cout << "Your to-do list is full." << std::endl << std::endl;
            }
            break;
 
        case 2:
            if (taskCount == 0)
            {
                std::cout << "Your to-do list is empty." << std::endl << std::endl;
            }
            else
            {
                std::cout << "Your to-do list:" << std::endl;
                for (size_t i = 0; i < taskCount; i++)
                {
                    std::cout << (i + 1) << ". ";
                    for (size_t j = 0; j < MAX_TASKS && taskNames[i][j] != '\0'; j++)
                    {
                        std::cout << taskNames[i][j];
                    }
                    std::cout << " [" << (taskCompleted[i] ? COMPLETED_MARK : ' ') << "]" << std::endl;
                }
                std::cout << "" << std::endl;
 
            }
            break;
 
        case 3:
            if (taskCount == 0)
            {
                std::cout << "Your to-do list is empty." << std::endl << std::endl;
            }
            else
            {
                std::cout << "Enter the number of the task to mark as completed: ";
                int index;
                std::cin >> index;
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "" << std::endl;
                if (index > 0 && index <= taskCount)
                {
                    taskCompleted[index - 1] = true;
                    std::cout << "Task marked as completed." << std::endl << std::endl;
                }
                else
                {
                    std::cout << "Invalid task number." << std::endl << std::endl;
                }
            }
            break;
        case 4:
        {
            std::ofstream file(FILENAME);
            if (file.is_open())
            {
                for (size_t i = 0; i < taskCount; i++)
                {
                    file << taskNames[i].data();
                    file << ' '; 
                    file << (taskCompleted[i] ? COMPLETED_MARK : ' ');
                    file << std::endl;
                }
                file.close();
                std::cout << "Data saved to a file." << std::endl;
            }
        }
        break;
 
        case 5:
            std::cout << "Goodbye!" << std::endl;
            bShouldRun = false;
            break;
        default:
            std::cout << "Invalid option" << std::endl;
        }
    }
 
    return 0;
 
}