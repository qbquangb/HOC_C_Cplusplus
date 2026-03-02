// Bai33_Stack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    
    // Create a stack of strings called cars
    std::stack<std::string> cars;
    // Add elements to the stack
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");
    cars.push("Tesla");

    int n = cars.size();
    std::cout << "List cars:\n";
    for (int i = 0; i < n; i++) {
        std::cout << cars.top() << "\n";
        cars.pop();
    }

    if (cars.empty()) { std::cout << "cars is empty" << std::endl; }

    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");
    cars.push("Tesla");

    // Access Stack Elements
    cout << "Elemant Top: " << cars.top() << endl;

    // Change the Top Element
    cars.top() = "X";
    cout << "Elemant Top: " << cars.top() << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
