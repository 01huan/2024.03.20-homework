#include <stdio.h>
int main() {
    int year, month, day, count=0;
    scanf("%d %d %d", &year, &month, &day);
    int month_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (((year%4 == 0) && (year%100 != 0)) || (year%400 == 0)) {
        month_days[1] = 29;
    }
    if ((day > month_days[month-1]) || (day < 1)) {
        printf("error");
    } else {
        for (int i=0; i<month-1; i++) {
            count += month_days[i];
        } count += day;
        printf("%d", count);
    }
}