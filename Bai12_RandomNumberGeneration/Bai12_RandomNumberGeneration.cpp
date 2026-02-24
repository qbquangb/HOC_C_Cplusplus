#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
#include <random> // for Mersenne Twister random number generator
using namespace std;

int main()
{
	cout << "----------------------------------------------------------------" << endl;
	// initialize random number generator
	srand(time(0)); // set initial seed value to system clock, tương đương hàm seed() trong Python, 
	                // giúp tạo ra các số ngẫu nhiên khác nhau mỗi khi chạy chương trình
	// generate and print 10 random numbers between 1 and 100
	for (int i = 0; i < 10; i++)
	{
		/*
		
		hàm rand() trả về một số nguyên ngẫu nhiên trong khoảng từ 0 đến RAND_MAX (thường là 32767).
		
		*/
		int randomNumber = rand() % 100 + 1; // generate a random number between 1 and 100
		cout << "Random Number " << i + 1 << ": " << randomNumber << endl;
	}
	cout << "----------------------------------------------------------------" << endl;

	// phát sinh số ngẫu nhiên Mersenne Twister
	// C++11 trở lên hỗ trợ thư viện <random> cung cấp các công cụ mạnh mẽ để tạo ra số ngẫu nhiên chất lượng cao, 
	// bao gồm cả Mersenne Twister.
	// tạo một đối tượng random engine sử dụng Mersenne Twister
	mt19937_64 rng; // Mersenne Twister random number generator, 
	                // là một thuật toán tạo số ngẫu nhiên có chu kỳ dài và phân phối đều, 
					// thường được sử dụng trong các ứng dụng yêu cầu chất lượng cao của số ngẫu nhiên.
	rng.seed(time(0)); // set initial seed value to system clock
	// generate and print 10 random numbers between 1 and 100 using Mersenne Twister
	uniform_int_distribution<int> dist(1, 100); // define a uniform distribution between 1 and 100
	for (int i = 0; i < 20; i++)
	{
		auto randomNumber = dist(rng); // generate a random number using Mersenne Twister, 
		// từ khóa auto cho phép trình biên dịch tự động suy luận kiểu dữ liệu của biến randomNumber 
		// dựa trên giá trị trả về của hàm dist(rng).
		cout << "Mersenne Twister Random Number " << i + 1 << ": " << randomNumber << endl;
	}

	cout << "-------------------------" << endl;
	for (int i = 0; i < 20; i++)
	{
		auto randomNumber = rng(); // generate a random number using Mersenne Twister
		cout << "Mersenne Twister Random Number " << i + 1 << ": " << randomNumber << endl;
	}

	cout << "----------------------------------------------------------------" << endl;
	return 0;
}
