#include <cstdint>;
using namespace std;

int32_t sx(uint32_t i)
{
    return (i&(1<<19)) ? (i|0xfff00000) : i;
}
