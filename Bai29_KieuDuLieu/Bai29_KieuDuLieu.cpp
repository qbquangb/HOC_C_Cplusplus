#include <iostream>
#include <climits>
#include <limits>
#include <cctype>
using namespace std;

int main()
{

    std::cout << "CHAR_BIT = " << CHAR_BIT << "\n\n";

    std::cout << "range signed char: " << int(std::numeric_limits<signed char>::min())
        << " .. " << int(std::numeric_limits<signed char>::max()) << "\n"; // -128 .. 127

    std::cout << "range unsigned char: 0 .. " << int(std::numeric_limits<unsigned char>::max()) << "\n"; // 0 .. 255

    std::cout << "range char: " << int(std::numeric_limits<char>::min())
        << " .. " << int(std::numeric_limits<char>::max()) << "\n\n"; // -128 .. 127

    return 0;
}
