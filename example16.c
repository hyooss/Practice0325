#include <stdio.h>
#include"shape.h"
#include <malloc.h>



int main(void) {
	//������ ���� ���ϱ� : �ﰢ��, �簢��, ��
	//���α׷��� ���� : �Է°� ����� ��Ȯ�ϰ�
	//�Է��� �޴�ȭ -> ��ɺ� �Լ��� ���� -> �����ڷ��� ����ȭ(����ü �̿� = �ڷᱸ��)
	//shape my;
	shape *pmy=shape_init_area();
	shape_menu_area(pmy);
	free(pmy);
	return 0;
}