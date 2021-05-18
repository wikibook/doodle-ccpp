#include <stdio.h>

int main() {
    int score;
    printf("점수 입력 : ");
    scanf("%d", &score);

    if (score >= 90) {  // 90점 이상인지 확인
        printf("A\n");
    }
    else if (score >= 80) {  // 90점 이상이 아니라면 80점 이상인지 확인
        printf("B\n");
    }
    else if (score >= 70) {  // 80점 이상이 아니라면 70점 이상인지 확인
        printf("C\n");
    }
    else if (score >= 60) {  // 70점 이상이 아니라면 60점 이상인지 확인
        printf("D\n");
    }
    else {  // 60점 이상도 아니라면 F를 출력
        printf("F\n");
    }
}
