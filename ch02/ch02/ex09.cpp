#include <stdio.h>

int main() {
    int math = 90, korean = 95, english = 96;
    int sum = math + korean + english;  // 세 점수의 합을 sum에 저장한다.
    double avg = sum / 3;  // sum을 3으로 나눠 평균을 구한다.
    printf("평균 점수 : %f\n", avg);
}
