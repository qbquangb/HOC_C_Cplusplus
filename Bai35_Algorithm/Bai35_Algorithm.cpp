// Bai35_Algorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printVectorString(const vector<string>& value) {
    cout << "cac phan tu cua vector: ";
    for (const auto& item : value)
    {
        cout << item << " ";
    }
    cout << endl;
}

void printVectorInt(const vector<int>& value) {
    cout << "cac phan tu cua vector: ";
    for (const auto& item : value)
    {
        cout << item << " ";
    }
    cout << endl;
}

int main()
{

    // Sorting Algorithms
    // Create a vector called cars that will store strings
    vector<string> cars = { "Volvo", "BMW", "Ford", "Mazda" };
    // Sort cars alphabetically
    cout << "Before sort:\n";
    printVectorString(cars);
    sort(cars.begin(), cars.end());
    cout << "After sort:\n";
    printVectorString(cars);
    vector<int> numbers = { 1, 7, 3, 5, 9, 2 };
    cout << "Before sort:\n";
    printVectorInt(numbers);
    sort(numbers.begin(), numbers.end());
    cout << "After sort:\n";
    printVectorInt(numbers);
    // To reverse the order, you can use rbegin() and rend() instead of begin() and end()
    sort(numbers.rbegin(), numbers.rend());
    cout << "After sort reverse:\n";
    printVectorInt(numbers);
    // Create a vector called numbers that will store integers
    vector<int> numbers2 = { 1, 7, 3, 5, 9, 2 };
    cout << "Before sort numbers2:\n";
    printVectorInt(numbers2);
    // Sort numbers numerically, starting from the fourth element (only sort 5, 9, and 2)
    sort(numbers2.begin() + 3, numbers2.end());
    cout << "After sort numbers2:\n";
    printVectorInt(numbers2);

    // Searching Algorithms/////////////////////////////////////////////////////////////////////////////////////////

    // Create a vector called numbers that will store integers
    vector<int> numbers3 = { 1, 7, 3, 5, 9, 2 };
    // Search for the number 3
    auto it = find(numbers3.begin(), numbers3.end(), 3);
    // Check if the number 3 was found
    if (it != numbers3.end()) {
        cout << "The number 3 was found!" << "\n";
    }
    else {
        cout << "The number 3 was not found." << "\n";
    }

    // To search for the first element that is greater than a specific value, you can use the upper_bound() function
    // Create a vector called numbers that will store integers
    vector<int> numbers4 = { 1, 7, 3, 5, 9, 2 };
    // Sort the vector in ascending order
    sort(numbers4.begin(), numbers4.end());
    // Find the first value that is greater than 5 in the sorted vector
    auto it_ = upper_bound(numbers4.begin(), numbers4.end(), 5);
    cout << "auto it = upper_bound(numbers.begin(), numbers.end(), 5);     it     " << *it_ << "\n";

    // To find the smallest/max element in a vector, use the min_element()/max_element() function
    // Create a vector called numbers that will store integers
    vector<int> numbers5 = { 1, 7, 3, 5, 9, 2 };

    // Find the smallest number
    auto it5 = min_element/*/max_element*/(numbers5.begin(), numbers5.end());
    cout << "auto it5 = min_element(numbers5.begin(), numbers5.end());     it5     " << *it5 << "\n";

    // End Searching Algorithms/////////////////////////////////////////////////////////////////////////////////////////

    // Modifying Algorithms//////////////////////////////////////////////////////////////////////////////////////////////
    
    // To copy elements from one vector to another, you can use the copy() function
    // Create a vector called numbers that will store integers
    vector<int> numbers6 = { 1, 7, 3, 5, 9, 2 };
    // Create a vector called copiedNumbers that should store 6 integers
    vector<int> copiedNumbers6(6);
    printVectorInt(copiedNumbers6);
    // Copy elements from numbers to copiedNumbers
    copy(numbers6.begin(), numbers6.end(), copiedNumbers6.begin());
    printVectorInt(copiedNumbers6);
    // To fill all elements in a vector with a value, you can use the fill() function
    // Fill all elements in the numbers vector with the value 35
    fill(copiedNumbers6.begin(), copiedNumbers6.end(), 35);
    printVectorInt(copiedNumbers6);

    // End Modifying Algorithms////////////////////////////////////////////////////////////////////////////////////////////

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
