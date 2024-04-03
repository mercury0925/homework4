#include<stdio.h>
#include<stdlib.h>

void main()
{
    int **x; // 정수를 가리키는 포인터를 가리키는 이중 포인터

    printf("-----[HanKangmin] [2023078040]-----\n");
    printf("sizeof(x) = %lu\n", sizeof(x)); // x의 크기 출력 (포인터의 크기 4bytes)
    printf("sizeof(*x) = %lu\n", sizeof(*x)); // *x의 크기 출력 (x가 가리키는 포인터의 크기 4bytes)
    printf("sizeof(**x) = %lu\n", sizeof(**x)); // **x의 크기 출력 (x가 가리키는 포인터가 가리키는 정수의 크기 4bytes)
}