#include <iostream>
using namespace std;

enum Level {
    LOW,
    MEDIUM,
    HIGH
};

enum Level2 {
    LEV1 = 125,
    LEV2 = 130,
    LEV3 = 255
};

enum Level3 {
    CAP1 = 1,
    CAP2, // 2
    CAP3 // 3
};

int main()
{

    Level myVar;
    myVar = MEDIUM;
    cout << "myVar = " << myVar << endl; // myVar = 1

    Level2 myVar2;
    myVar2 = LEV2;
    cout << "myVar2 = " << myVar2 << endl; // myVar2 = 130

    // Enum in a Switch Statement
    Level3 myVar3 = CAP3;

    switch (myVar3) {
    case 1:
        cout << "Low Level\n";
        break;
    case 2:
        cout << "Medium level\n";
        break;
    case 3:
        cout << "High level\n";
        break;
    }

    return 0;
}
