#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int splitAndAdd(long n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int recursiveDigitsAdded(long digits) {
    int current = splitAndAdd(digits); // 最初の各桁の合計を計算
    int total = current;
    while (current >= 10) {
        current = splitAndAdd(current); // 現在の合計の各桁の合計を再計算
        total += current; // 合計に加算
    }
    return total; // 最終的な合計を返す
}
