#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::string s="mystring";
    int x=4;
    std::cout << solution.Add(s,x) << std::endl;

    return EXIT_SUCCESS;
}