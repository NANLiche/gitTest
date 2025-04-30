#include <iostream>

// 1부터 n까지의 합계를 계산하여 반환하는 함수
int calculate_sum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i; // sum = sum + i 와 동일
    }
    return sum;
}

int main() {
    int number;
    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    if (number > 0) {
        int total_sum = calculate_sum(number); // 함수 호출
        std::cout << "The sum from 1 to " << number << " is: " << total_sum << std::endl;
    } else {
        std::cout << "Please enter a positive integer." << std::endl;
    }

    return 0;
}