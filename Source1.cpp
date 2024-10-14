#include <iostream>
#include <vector>
#include <string>
#include<sstream>
using namespace std;
void sortColors(const vector<string>& input) {
    int redCount = 0, whiteCount = 0, blueCount = 0;// Đếm số lượng màu
    //  Đếm số lượng từng màu
    for (const auto& color : input) {
        if (color == "do") {
            redCount++;
        } else if (color == "trang") {
            whiteCount++;
        } else if (color == "xanh") {
            blueCount++;
        }
    }
    //  Tạo mảng kết quả
    vector<string> sortedColors;
    // Thêm màu đỏ
    for (int i = 0; i < redCount; i++) {
        sortedColors.push_back("do");
    }
    // Thêm màu trắng
    for (int i = 0; i < whiteCount; i++) {
        sortedColors.push_back("trang");
    }
    // Thêm màu xanh
    for (int i = 0; i < blueCount; i++) {
        sortedColors.push_back("xanh");
    }
    // In ra mảng đã sắp xếp
    for (const auto& color : sortedColors) {
        cout << color << " ";
    }
}
int main() {
    int n; cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);
    istringstream stream(s);
    // Nhập danh sách màu sắc
    vector<string> colors;
    string color;
    while (stream >> color) {
        colors.push_back(color);
    }
    // Gọi hàm để sắp xếp màu sắc
    sortColors(colors);
    return 0;
}