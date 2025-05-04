#include <iostream>
#include <string>

class Student {
public: // 지금은 public 유지
    std::string name;
    int studentID;
    int grade;

    // 1. 기본 생성자 (Default Constructor)
    Student() {
        std::cout << "Student 객체 생성됨 (기본 생성자 호출)!" << std::endl;
        // 멤버 변수들을 기본값으로 초기화
        studentID = 0;
        grade = 0;
        // name은 기본적으로 빈 문자열로 초기화됨
    }

    // 2. 매개변수가 있는 생성자 (Parameterized Constructor)
    Student(std::string n, int id, int g) {
        std::cout << "Student 객체 생성됨 (매개변수 생성자 호출) - 이름: " << n << std::endl;
        // 전달받은 값으로 멤버 변수 초기화
        name = n;
        studentID = id;
        grade = g;
    }

    // 3. 소멸자 (Destructor)
    ~Student() {
        // 어떤 객체가 소멸되는지 확인하기 위해 이름 출력 (이름이 없을 수도 있음)
        std::cout << "Student 객체 소멸됨 - 이름: " << (name.empty() ? "알 수 없음" : name) << std::endl;
    }

    // 편의를 위해 정보 출력 멤버 함수 추가
    void displayInfo() {
         std::cout << "이름: " << name << ", 학번: " << studentID << ", 학년: " << grade << std::endl;
    }
}; // 클래스 정의 끝

int main() {
    std::cout << "--- student1 생성 (기본 생성자) ---" << std::endl;
    Student student1; // 기본 생성자 호출됨
    student1.name = "기본 사용자"; // 생성 후 이름 설정
    student1.displayInfo();
    std::cout << "---------------------------------" << std::endl;

    std::cout << "--- student2 생성 (매개변수 생성자) ---" << std::endl;
    Student student2("홍길동", 2025001, 2); // 매개변수 있는 생성자 호출됨
    student2.displayInfo();
    std::cout << "---------------------------------" << std::endl;

    std::cout << "--- student3 생성 (매개변수 생성자) ---" << std::endl;
    Student student3("김철수", 2025002, 2);
    student3.displayInfo();
    std::cout << "---------------------------------" << std::endl;

    std::cout << "--- main 함수 종료 시작 ---" << std::endl;
    // main 함수가 끝나면 student3, student2, student1 순서(생성 역순)로 소멸자가 호출됨
    return 0;
}