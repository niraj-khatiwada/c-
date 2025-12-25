#include <iostream>

typedef std::vector<std::int32_t> _intvec_t; // old way
using intvec_t = std::vector<std::int32_t>;  // modern way

int main()
{
    intvec_t list;
    return 0;
}