#include <stdio.h>
#include <string.h>

// student1 구조체 정의
struct student1 {
    char lastName;
    int studentId;
    char grade;
};

// student2 구조체 정의, typedef 문장을 사용한 구조 데이터 타입 생성
typedef struct {
    char lastName;
    int studentId;
    char grade;
} student2;

int studentEqual(student2 st2, student2 st3) {
    if(st3.lastName != st2.lastName || st3.studentId != st2.studentId || st3.grade != st2.grade)
        return 1;
    else
        return 0;
}

int main() {
    printf("-----[HanKangmin] [2023078040]-----\n");

    struct student1 st1 = {'A', 100, 'A'}; // st1 변수 선언 및 초기화
    printf("st1.lastName = %c\n", st1.lastName); // st1 구조체 변수의 lastName 값 출력
    printf("st1.studentId = %d\n", st1.studentId); // st1 구조체 변수의 studentId 값 출력
    printf("st1.grade = %c\n", st1.grade);  // st1 구조체 변수의 grade 값 출력

    student2 st2 = {'B', 200, 'B'}; // st2 변수 선언 및 초기화 (typedef로 선언)
    printf("\nst2.lastName = %c\n", st2.lastName);  // st2 구조체 변수의 lastName 값 출력
    printf("st2.studentId = %d\n", st2.studentId);  // st2 구조체 변수의 studentId 값 출력
    printf("st2.grade = %c\n", st2.grade); // st2 구조체 변수의 grade 값 출력

    student2 st3; // st3 변수 선언 (typedef로 선언)
    st3 = st2; // st2의 값을 st3에 할당
    printf("\nst3.lastName = %c\n", st3.lastName); // st3 구조체 변수의 lastName 값 출력 (st2와 동일한 값 출력)
    printf("st3.studentId = %d\n", st3.studentId); // st3 구조체 변수의 studentId 값 출력 (st2와 동일한 값 출력)
    printf("st3.grade = %c\n", st3.grade); // st3 구조체 변수의 grade 값 출력 (st2와 동일한 값 출력)


  /* equality test */ // 두 구조체의 값이 동일한지 검사
    //if(st3 == st2) /* not working */
    //    printf("equal\n");
    //else
    //    printf("not equal\n");

    if(studentEqual(st2, st3)) {
        printf("not equal\n");
    }
    else {
        printf("equal\n");
    }

    return 0;
  
}
