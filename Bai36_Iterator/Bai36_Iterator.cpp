// Iterators: Trình lặp
// Các iterator được sử dụng để truy cập và lặp qua các phần tử của cấu trúc dữ liệu (vector, set, v.v.) 
// bằng con trỏ.

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // Create a vector called cars that will store strings
    vector<string> cars = { "Volvo", "BMW", "Ford", "Mazda" };

    // Create an iterator named it
    vector<string>::iterator it; // it thực chất là con trỏ kiểu string, để xem giá trị sd *it
    it = cars.begin();
    cout << "Xem giá trị sử dụng *it: " << *it << "\n";
    auto it2 = cars.end() - 1;
    cout << "phần tử cuối cùng: " << *it2 << "\n";

    it = cars.erase(it + 1); // cars.erase(it + 1), xóa phần tử tại (it + 1) ("BMW") và trả lại pointer (it + 1)
    cout << "giá trị sau lệnh it = cars.erase(it + 1); bằng: " << *it << "\n";

    // Use the iterator to loop through the vector
    cout << "List Cars: ";
    for (it = cars.begin(); it != cars.end(); ++it) {
        cout << *it << " ";
    }

    // kiểu std::vector<std::string>::reverse_iterator
    vector<std::string>::reverse_iterator itr;
    itr = cars.rbegin();
    itr++;
    cout << "\n\nitr++;    " << *itr << "\n";

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
