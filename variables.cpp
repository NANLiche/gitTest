#include <iostream>
#include <string> // string 사용 위해 포함

int main() {
    // 정수형 변수
    int age = 20;
    int score = 100;

    // 실수형 변수
    float average_score = 95.5f; // float 형은 값 뒤에 f 붙임
    double pi_value = 3.1415926535;

    // 문자형 변수
    char grade = 'A';

    // 불리언형 변수
    bool is_passed = true; // true 또는 false

    // 문자열 변수 (C++ 표준 라이브러리)
    std::string player_name = "Gildong";

    // 상수 선언
    const int MAX_LEVEL = 99;

    // 변수 값 출력
    std::cout << "Player Name: " << player_name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Score: " << score << ", Average: " << average_score << ", Grade: " << grade << std::endl;
    std::cout << "Passed: " << is_passed << std::endl; // bool은 1(true) 또는 0(false)으로 출력됨
    std::cout << "Max Level: " << MAX_LEVEL << std::endl;

    return 0;
}