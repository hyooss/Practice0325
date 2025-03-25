#include <stdio.h>
#include "shape.h"
#include <malloc.h>

void shape_tri_area(shape* pmy) {
	pmy->tri_area = (pmy->width * pmy->height) / 2.0;
	printf("�ﰢ�� ����:%.1f\n", pmy->tri_area);

}

void shape_squ_area(shape* pmy) {
	pmy->squ_area = pmy->width * pmy->height;
	printf("�簢�� ����:%d\n", pmy->squ_area);
}

void shape_cir_area(shape* pmy) {
	pmy->cir_area = pmy->radius * pmy->radius * pmy->pi;
	printf("�� ����:%.1f\n", pmy->cir_area);
}

void shape_menu_area(shape* pmy) {

	shape my;
	int menu;

	while (1) {
		printf("������ ���� ���ϱ�\n");
		printf("1. �ﰢ�� 2. �簢�� 3. �� 4. ����\n");
		printf("���� :");
		scanf_s("%d", &menu);
		if (menu == 1) {
			printf("�ﰢ�� ����\n");
			printf("���� ?\n");
			scanf_s("%d", &pmy->width);
			printf("���� ?\n");
			scanf_s("%d", &pmy->height);
			shape_tri_area(pmy);
		}
		else if (menu == 2) {
			printf("�簢�� ����\n");
			printf("���� ?\n");
			scanf_s("%d", &pmy->width);
			printf("���� ?\n");
			scanf_s("%d", &pmy->height);
			shape_squ_area(pmy);
		}
		else if (menu == 3) {
			printf("�� ����\n");
			printf("������ ?\n");
			scanf_s("%d", &pmy->radius);
			pmy->pi = 3.14;
			shape_cir_area(pmy);
		}
		else if (menu == 4) {
			break;
		}
		else {
			printf("�߸� �Է�");
		}
		printf("\n");
	}

}

shape* shape_init_area(void) {
	shape* pmy = (shape*)malloc(sizeof(shape));
	pmy->pi = 3.14;
	return pmy;
}
