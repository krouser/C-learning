#include <iostream>
 
const int ROWS = 10;
const int COLS = 10;
 
int spreadsheet[ROWS][COLS]{};
 
inline int& cell(char col, int row)
{
    return spreadsheet[row - 1][col - 'A'];
}
 
const char SEPARATOR[] = "\t";
 
int main()
{

    cell('D', 4) = 99;
    cell('I', 10) = 30;
    cell('F', 2) = 19;
    cell('G', 5) = 93;
    cell('A', 4) = 12;
    cell('J', 4) = 12;
    cell('B', 4) = 12;
    cell('C', 4) = 12;
 
    
    std::cout << SEPARATOR;
    for (int col = 0; col < COLS; col++)
    {
        std::cout << (char)('A' + col) << SEPARATOR;
    }
    std::cout << std::endl;
 
    
    for (int row = 0; row < ROWS; row++)
    {
        std::cout << row + 1 << SEPARATOR;
        for (int col = 0; col < COLS; col++)
        {
            std::cout << spreadsheet[row][col] << SEPARATOR;
        }
        std::cout << std::endl;
    }
 
    return 0;
}