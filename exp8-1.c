#include<stdio.h>
struct student {
	char name[20];
	int stnum;
	int grade[3];
}st[3];
int main() {
	int i, j, indexs, indexg;
	FILE* fp;
	const char* filename = "results.txt";
	fp = fopen(filename, "w");
	int max = 0;
	float avergst[3] = { 0 };
	float avergcrs[3] = { 0 };
	for (i = 0; i < 3; i++) {
		printf("��%dλѧ����������ѧ�ţ�", i + 1);
		scanf("%s %d", &st[i].name, &st[i].stnum);
		for (j = 0; j < 3; j++) {
			printf("��%d�Ƶĳɼ���", j + 1);
			scanf("%d", &st[i].grade[j]);
		}
	}
	for (i = 0; i < 3; i++) {//����ÿ��ѧ��ƽ����
		for (j = 0; j < 3; j++) {
			avergst[i] += st[i].grade[j];
		}
		avergst[i] /= 3.0;
	}
	for (i = 0; i < 3; i++) {
		printf("����Ϊ%s��ѧ��Ϊ%d��ѧ����ƽ����Ϊ%.2f��\n", st[i].name, st[i].stnum, avergst[i]);
		fprintf(fp, "����Ϊ%s��ѧ��Ϊ%d��ѧ����ƽ����Ϊ%.2f��\n", st[i].name, st[i].stnum, avergst[i]);
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			avergcrs[i] += st[j].grade[i];
		}
		avergcrs[i] /= 3;
	}
	for (i = 0; i < 3; i++) {
		printf("��%d�ſε�ƽ����Ϊ%.2f��\n", i + 1, avergcrs[i]);
		fprintf(fp, "��%d�ſε�ƽ����Ϊ%.2f��\n", i + 1, avergcrs[i]);
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (st[i].grade[j] > max) {
				max = st[i].grade[j];
				indexs = i;
				indexg = j;
			}
		}
	}
	printf("����Ϊ%s��ѧ��Ϊ%d��ѧ���ڵ�%d�ſ��ϵõ���%d�ĸ߷֣�", st[indexs].name, st[indexs].stnum, indexg + 1, st[indexs].grade[indexg]);
	fprintf(fp, "����Ϊ%s��ѧ��Ϊ%d��ѧ���ڵ�%d�ſ��ϵõ���%d�ĸ߷֣�", st[indexs].name, st[indexs].stnum, indexg + 1, st[indexs].grade[indexg]);
	fclose(fp);
}
