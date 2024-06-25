#include <stdio.h>
#include <stdlib.h>

void calc() {
	int myExp;
	int myAr;
	int targetAr;

	printf("Insert Exp > ");
	scanf("%d", &myExp);

	printf("Insert AR > ");
	scanf("%d", &myAr);
	printf("Insert Target Ar > ");
	scanf("%d", &targetAr);

	int arTable[] = {
		0,
		0,
		350,
		850,
		1475,
		2200,
		3050,
		4000,
		5075,
		6275,
		7575,
		9000,
		10525,
		12175,
		13950,
		15825,
		17825,
		20200,
		22700,
		25325,
		28100,
		30925,
		34350,
		38075,
		42075,
		46375,
		50950,
		55825,
		60975,
		66425,
		72150,
		78175,
		84475,
		91075,
		97975,
		105150,
		112625,
		120375,
		128425,
		136750,
		145375,
		155925,
		167450,
		179925,
		193375,
		207775,
		223125,
		239450,
		256725,
		274975,
		294175,
		320575,
		349375,
		380575,
		414175,
		450175,
		682525,
		941475,
		1227225,
		1540050,
		1880175,

	};

	int resinUseDaily = 200;
	int expPer20Resin   = 100;

	double resinExpPerDay = resinUseDaily / 20.0 * expPer20Resin;
	int dailyCommsExp = 500 + (4 * 250);

	double expGainPerDay = dailyCommsExp + resinExpPerDay;
	int totalExpReq = arTable[targetAr] - arTable[myAr] - myExp;

	printf("\033[0;35mTotal Exp required: %d\033[0m\n", totalExpReq);
	printf("\033[0;35mDays till goal AR: %.2f\033[0m\n", totalExpReq / expGainPerDay);
}
int main() {
	calc();
	system("pause");
	return 0;
}
