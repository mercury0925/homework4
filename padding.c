#include <stdio.h>

// student 구조체 정의 - 19 bytes
struct student {
char lastName[13]; /* 13 bytes */ // 3-Padding bytes
int studentId; /* 4 bytes */
short grade; /* 2 bytes */ // 2-Padding bytes
};

int main()
{
    printf("-----[Hankangmin] [2023078040]-----\n");

    struct student pst; // student 구조체 타입 변수 pst 선언
    printf("size of student = %ld\n", sizeof(struct student)); // 24 bytes(19 bytes + 5 Padding bytes)
    printf("size of int = %ld\n", sizeof(int)); // 4 bytes
    printf("size of short = %ld\n", sizeof(short)); // 2 bytes
    return 0;
}
