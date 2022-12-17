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
		printf("第%d位学生的姓名与学号：", i + 1);
		scanf("%s %d", &st[i].name, &st[i].stnum);
		for (j = 0; j < 3; j++) {
			printf("第%d科的成绩：", j + 1);
			scanf("%d", &st[i].grade[j]);
		}
	}
	for (i = 0; i < 3; i++) {//计算每个学生平均分
		for (j = 0; j < 3; j++) {
			avergst[i] += st[i].grade[j];
		}
		avergst[i] /= 3.0;
	}
	for (i = 0; i < 3; i++) {
		printf("姓名为%s，学号为%d的学生的平均分为%.2f。\n", st[i].name, st[i].stnum, avergst[i]);
		fprintf(fp, "姓名为%s，学号为%d的学生的平均分为%.2f。\n", st[i].name, st[i].stnum, avergst[i]);
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			avergcrs[i] += st[j].grade[i];
		}
		avergcrs[i] /= 3;
	}
	for (i = 0; i < 3; i++) {
		printf("第%d门课的平均分为%.2f。\n", i + 1, avergcrs[i]);
		fprintf(fp, "第%d门课的平均分为%.2f。\n", i + 1, avergcrs[i]);
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
	printf("姓名为%s，学号为%d的学生在第%d门课上得到了%d的高分！", st[indexs].name, st[indexs].stnum, indexg + 1, st[indexs].grade[indexg]);
	fprintf(fp, "姓名为%s，学号为%d的学生在第%d门课上得到了%d的高分！", st[indexs].name, st[indexs].stnum, indexg + 1, st[indexs].grade[indexg]);
	fclose(fp);
}
