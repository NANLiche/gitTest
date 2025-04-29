#include <iostream>

int main() {
    double num1, num2; // 실수를 다루기 위해 double 사용

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
    std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
    std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;

    // 0으로 나누는 경우 확인
    if (num2 != 0) {
        std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
    } else {
        std::cout << "Cannot divide by zero!" << std::endl;
    }

    // 정수 나머지 연산은 double에 직접 적용하기 애매하므로, 필요시 형변환 고려
    // int int_num1 = static_cast<int>(num1);
    // int int_num2 = static_cast<int>(num2);
    // if (int_num2 != 0) {
    //     std::cout << int_num1 << " % " << int_num2 << " = " << int_num1 % int_num2 << std::endl;
    // }

    return 0;
}