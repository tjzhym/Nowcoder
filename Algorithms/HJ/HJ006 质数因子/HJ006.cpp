// Problem :    https://www.nowcoder.com/ta/huawei
// Solution:    https://github.com/tjzhym/Nowcoder
// Author :     zhym (tjzhym)
// Date   :     2021-8-7



#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number = 0;
    cin >> number;
    if (number == 0 || number == 1)
        return -1;

    for (int prime = 2; prime <= sqrt(number); prime++) {
        while (number % prime == 0) {
            cout << prime << ' ';
            number /= prime;
        }
    }
    if (number != 1)
        cout << number;
    return 0;
}
