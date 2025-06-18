// mod.cpp 파일
#include "sub.h"
#include <iostream>

int mod(int x, int y) {
    int temp = x;  // x 값을 변경하지 않도록 임시 변수 사용
    int i = 0;     // 반복을 위한 변수

    for (i = 0; temp >= y; i++) {  // temp가 y보다 크거나 같을 때까지 반복
        temp = sub(temp, y);  // y를 반복적으로 빼면서 나머지 계산
    }

 
    return temp;  // 마지막으로 남은 값이 나머지
}
