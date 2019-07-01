#include <iostream>

#include "SeriousNet.h"

using namespace seriousnet;

int main(int argc, char *argv[])
{
    SeriousNet my_net;
    std::cout << my_net.invoke(1, {}) << std::endl;
    return 0;
}
