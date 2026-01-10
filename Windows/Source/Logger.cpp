// Network.cpp
#include <string>
#include <iostream>

namespace Logger
{
    void Initialize() {}

    void Shutdown() {}
    
    void Printf(std::string msg) { std::cout << msg << std::endl; }
};