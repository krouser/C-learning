#include <iostream> 
 
#define COLOR_LIST \ 
X(Red) \ 
X(Yellow) \ 
X(Blue) \ 
X(Green) \ 
X(White) \ 
X(Black) \ 
X(Purple) \ 
X(Orange) \ 
X(Pink) \ 
X(Brown) \ 
X(Gray) \ 
X(Light_Green) \ 
X(Light_Blue)  
 

#define X(color) color, 
enum Color  
{ 
    COLOR_LIST NUMBER_OF_COLORS 
}; 
#undef X 
 
bool canmix(Color color1, Color color2, int(*color_mix)[NUMBER_OF_COLORS], Color& result)
{ 
    if (color1 >= NUMBER_OF_COLORS || color2 >= NUMBER_OF_COLORS) 
    { 
        return false; 
    } 
    if (color_mix[color1][color2] == -1)
    { 
        return false; 
    } 
    else 
    { 
        result = static_cast<Color>(color_mix[color1][color2]); 
        return true; 
    } 
} 
 
std::string color_to_text(Color c)
{ 
    if (c >= NUMBER_OF_COLORS) return ""; 
    switch (c) 
    { 
        #define X(color) case color: return #color; 
        COLOR_LIST 
        #undef X 
        default: 
        return ""; 
    } 
    return ""; 
} 
 
void print_selection_prompt()
{ 
    std::cout << "Choose two colors from the following“: " << std::endl; 
    for (int i = 0; i < NUMBER_OF_COLORS; ++i) 
    { 
        std::cout << i + 1 << " - " << color_to_text(static_cast<Color>(i)) << std::endl; 
    } 
    std::cout << "0 to quit" << std::endl; 
} 
 
void print_selection(Color c1, Color c2)
{ 
    std::string str_c1 = color_to_text(c1), str_c2 = color_to_text(c2);
    std::cout  << "You selected " << str_c1 << " and " << str_c2 << std::endl; 
} 
 
int main() 
{ 
    int color_mix[NUMBER_OF_COLORS][NUMBER_OF_COLORS] = 
    { 
        {-1, Orange, Purple, Brown, Pink, Black}, 
        {Orange, -1, Green, Brown, Yellow, Black}, 
        {Purple, Green, -1, Brown, Light_Blue, Black}, 
        {Brown, Brown, Brown, -1, Light_Green, Black}, 
        {Pink, Yellow, Light_Blue, Light_Green, -1, Gray}, 
        {Black, Black, Black, Black, Gray, -1} 
    }; 
 
    int color1{}, color2{}; 
    Color c1, c2; 
    Color result; 
    while (true)
    { 
        print_selection_prompt();
        std::cin >> color1; 
        if (color1 == 0)
        break; 
        std::cin >> color2; 
        c1 = static_cast<Color>(color1 - 1);
        c2 = static_cast<Color>(color2 - 1); 
        print_selection(c1, c2);
        if (!canmix(c1, c2, color_mix, result))
        { 
            std::cout << "impossible to mix" << std::endl; 
        } 
        else 
        { 
            std::cout << "Mixed color is: " << color_to_text(result) << std::endl;
        } 
    } 
 
    return 0; 
} 