#include <iostream> 
#include <vector> 
#include <sstream> 
 
int main()
{
    std::string line{ "I am writing several sentences. This is the 2nd one. This is the 3rd one. This is number 4" };
    std::vector<std::string> sentences;
    std::istringstream iss(line);
    std::string sentence;
    while (std::getline(iss, sentence, '.'))
    {
        if (!sentence.empty())
        {
            size_t first = sentence.find_first_not_of(" \t\n\r\f\v");
            size_t last = sentence.find_last_not_of(" \t\n\r\f\v");
            sentence = sentence.substr(first, (last - first + 1));
            sentence += ".";
            sentences.push_back(sentence);
        }
    }
 
    for (size_t i = 0; i < sentences.size(); i++)
    {
        std::cout << "Sentence #" << i << " is: " << sentences[i] << std::endl;
    }
    return 0;
}