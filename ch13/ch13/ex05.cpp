#include <iostream>
using namespace std;

int fact(int n) {
    if (n == 1) return 1;
    return n * fact(n - 1);
}

int main() {
    int n;

    try {
        cout << "자연수를 입력하세요 : ";
        cin >> n;
        if (n <= 0) {
            throw n;  // 예외 발생
        }
        // 예외가 발생하지 않았을 때의 코드
        cout << n << "! = " << fact(n) << endl;
    }
    catch (int e) {  // 예외 받기
        cout << e << ": 자연수가 아닙니다." << endl;  // 적절한 처리
    }
}
