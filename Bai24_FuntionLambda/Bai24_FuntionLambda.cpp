/*

Lambda là hàm tại chỗ (anonymous function) được khai báo inline, 
tạo ra một closure object (một đối tượng kiểu ẩn có operator() ). 
Lambda cho phép đóng gói logic nhỏ gọn (callback, comparator, transform) 
và có thể capture biến môi trường (biến phạm vi xung quanh) theo giá trị hoặc theo tham chiếu.

Cú pháp tổng quát: [capture](params) -> ret { body }
	+ capture — danh sách những gì lambda "bắt" từ scope bên ngoài.
	+ (params) — tham số (giống hàm bình thường).
	+ -> ret — kiểu trả về (thường có thể  (bỏ qua) và trình biên dịch suy ra).
	+ { body } — thân hàm.

*/

#include <iostream>

int main() {
	auto add = [](int a, int b) { return a + b; };
	std::cout << add(2, 3) << '\n'; // 5
	return 0;
}