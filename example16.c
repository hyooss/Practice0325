#include <stdio.h>
#include"shape.h"
#include <malloc.h>



int main(void) {
	//도형의 면적 구하기 : 삼각형, 사각형, 원
	//프로그램의 설계 : 입력과 출력을 명확하게
	//입력을 메뉴화 -> 기능별 함수로 구현 -> 관련자료의 구조화(구조체 이용 = 자료구조)
	//shape my;
	shape *pmy=shape_init_area();
	shape_menu_area(pmy);
	free(pmy);
	return 0;
}