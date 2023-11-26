#include <iostream>
 
int main()
{
    int rate[5][5] =
    {
        {3, 3, 2, 1, 4},
        {2, 1, 2, 5, 3},
        {1, 1, 2, 3, 4},
        {4, 5, 5, 1, 4},
        {-1,-1,-1,-1,-1}
    };
 
    std::cout << "Available movies:" << std::endl;
    std::cout << "A. Spiderman" << std::endl;
    std::cout << "B. Jurassic Park" << std::endl;
    std::cout << "C. The Godfather" << std::endl;
    std::cout << "D. The Lord of the Rings" << std::endl;
    std::cout << "E. Star Wars" << std::endl;
 
    int new_rating_index = 4;
    char movie_code;
    int rating;
    std::cout << "Enter the movie code (A-E): ";
    std::cin >> movie_code;
    movie_code = std::toupper(movie_code);
    std::cout << "Movie (" << movie_code << ") Got the following ratings: " << std::endl;
    unsigned int movie_index = movie_code - 'A';
    for (int i = 0; i < 4; i++)
    {
        std::cout << "Reviewer " << i + 1 << " gave the movie " << rate[i][movie_index] << std::endl;
    }
 
    std::cout << "Now it's your turn. Enter your rating (1-5 stars) to a movie (" << movie_code << ") ";
    std::cin >> rating;
 
    rate[new_rating_index][movie_index] = rating;
 
    std::cout << "You rated Movie " << movie_code << " " << rating << " stars." << std::endl;
    std::cout << "Now let's see the overall ratings given" << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Reviewer ";
        if (i == new_rating_index)
        {
            std::cout << "(that's you!)";
        }
        std::cout << i + 1 << " gave the movie " << rate[i][movie_index] << std::endl;
    }
 
    return 0;
}