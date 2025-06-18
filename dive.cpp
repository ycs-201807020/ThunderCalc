// dive.cpp 파일
#include "sub.h"
#include "add.h"
#include <iostream>

int dive(int x, int y) {
    int quot = 0;  // 몫을 저장할 변수
    int temp = x;  // x 값을 변경하지 않도록 임시 변수 사용
    int i = 0;     // 반복을 위한 변수

    for (i = 0; temp >= y; i++) {  // temp가 y보다 크거나 같을 때까지 반복
        temp = sub(temp, y);  // y를 반복적으로 빼면서 몫을 계산
        quot = add(quot, 1);  // 몫을 1씩 증가
    }

 //   printf("quot : %d\n", quot);
    return quot;
}

