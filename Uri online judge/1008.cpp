// 1008 Salary
#include <stdio.h>
int main()
{
    int emp_num, work_hour;
    float per_hr, salary;
    scanf("%d %d %f", &emp_num, &work_hour, &per_hr);
    salary = work_hour * per_hr;
    printf("NUMBER = %d\n", emp_num);
    printf("SALARY = U$ %.2f\n", salary);
    return 0;
}