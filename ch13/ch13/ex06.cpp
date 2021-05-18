#include <iostream>
#include <string>
using namespace std;

int fact(int n) {
    if (n < 1) throw to_string(n) + ": 자연수가 아닙니다.";
    if (n == 1) return 1;
    return n * fact(n - 1);
}

int main() {
    int n, r;

    try {
        cout << "자연수 2개 입력: ";
        cin >> n >> r;

        int a = fact(n);      //
        int b = fact(r);      // 셋 중 한 군데서라도 예외 발생 시 catch로 이동
        int c = fact(n - r);  //

        int result = a / b / c;
        cout << result << endl;
    }
    catch (const string& e) {
        cout << e << endl;
    }
}
