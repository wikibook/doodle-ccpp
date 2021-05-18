#include <iostream>
using namespace std;

int fact(int n) {
    if (n == 1) return 1;
    return n * fact(n - 1);
}

int main() {
    int n;

    cout << "자연수를 입력하세요 : ";
    cin >> n;
    if (n >= 1) {  // n이 자연수일 때만 팩토리얼 계산
        cout << n << "! = " << fact(n) << endl;
    }
    else {         // 아니면 에러 메시지 출력
        cout << n << ": 자연수가 아닙니다." << endl;
    }
}
