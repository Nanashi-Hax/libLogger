// Network.cpp
#include <string>
#include <whb/log_udp.h>
#include <whb/log.h>

namespace Logger
{
    void Initialize() { WHBLogUdpInit(); }

    void Shutdown() { WHBLogUdpDeinit(); }
    
    void Print(std::string msg) { WHBLogPrintf("%s", msg.c_str()); }
};