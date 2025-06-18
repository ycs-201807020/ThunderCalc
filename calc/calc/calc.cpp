//작성해둔 모든 헤더를 불러온다
#include <iostream>
#include "add.h"	//덧셈기능 헤더 파일 추가
#include "sub.h"	//뺄셈기능 헤더 파일 추가
#include "mul.h"	//곱셈기능 헤더 파일 추가
#include "dive.h"	//나눗셈[몫]기능 헤더 파일 추가
#include "mod.h"	//나눗셈[나머지]기능 헤더 파일 추가

int main()
{
	int x = 0;
	int y = 0;

	std::cout << "첫번째 수 입력하세요 :";
	std::cin >> x;
	std::cout << "두번째 수 입력하세요 :";
	std::cin >> y;

	printf("입력된 수 x[ %d ] y[ %d ] \n", x, y);
	printf("add [ %d ] sub [ %d ] mul [ %d ] dive [ %d ] mod [ %d ]\n",
		add(x, y), sub(x, y), mul(x, y), dive(x, y), mod(x, y));
}