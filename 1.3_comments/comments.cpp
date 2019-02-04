#include <iostream>

int main()
{
    // std::cout << "/*"; Works
    // std::cout << "*/"; Works
    // std::cout << /* "*/" */; Broken
    // std::cout << /* "*/" /* "/*" */; Works

    return 0;
}