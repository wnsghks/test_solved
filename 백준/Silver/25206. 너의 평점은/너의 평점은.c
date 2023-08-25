#include <stdio.h>

float grade_cal(char *grade) {
	float change_grade = 0;

	if (grade[0] == 'A') {
		if (grade[1] == '+')
			change_grade = 4.5;
		else
			change_grade = 4.0;
	}
	else if (grade[0] == 'B') {
		if (grade[1] == '+')
			change_grade = 3.5;
		else
			change_grade = 3.0;
	}
	else if (grade[0] == 'C') {
		if (grade[1] == '+')
			change_grade = 2.5;
		else
			change_grade = 2.0;
	}
	else if (grade[0] == 'D') {
		if (grade[1] == '+')
			change_grade = 1.5;
		else
			change_grade = 1.0;
	}
	else
		change_grade = 0;

	return change_grade;
}

int main(void) {
	float	sum_credit = 0;
	float	multiple = 0;

	for (int i = 0; i < 20; i++) {
		char subject[51] = {0};
		char grade[3] = {0};
		float credit = 0;

		scanf("%s %f %s", subject, &credit, grade);
		if (grade[0] != 'P') {
			sum_credit += credit;
			multiple += credit * grade_cal(grade);
		}
	}
    
	printf("%f", multiple / sum_credit);
}