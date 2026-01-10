// Logger.hpp
#pragma once

#include <string>

namespace Logger
{
    void Initialize();
    
    void Shutdown();

    void Printf(std::string msg);
};