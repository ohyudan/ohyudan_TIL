//
// Created by yudan oh on 25. 8. 30.
//

#ifndef MODERN_CPLUSPLUS_ANSWER04_H
#define MODERN_CPLUSPLUS_ANSWER04_H
#include "IAnswer.h"
#include <algorithm> // 17 이하
#include <iostream>
#include <numeric>

template<typename T>
class Answer04 : public IAnswer {

public:
    explicit Answer04(T number1);

    void printProblem() const override;

    void printAnswer() const override;

    void solve();

    static bool isPrime(T number1);

private:
    T problem1;
    T answer;
};

template<typename T>
Answer04<T>::Answer04(T number1) :
    problem1(number1) {
    solve();
}

template<typename T>
void Answer04<T>::printProblem() const {
    std::cout << "4.주어진 수보다 작은 가장 큰 소수를 계산하는 프로그램 구현하기" << std::endl;
}

template<typename T>
void Answer04<T>::printAnswer() const {

    std::cout << answer << std::endl;
}

template<typename T>
void Answer04<T>::solve() {
    unsigned long long number1 = problem1;

    for (auto i = number1; i > 1; --i) {
        if (isPrime(i)) {
            answer = i;
            break;
        }
    }


}


template<typename T>
bool Answer04<T>::isPrime(T number1) {
    if (number1 <= 3) { return number1 > 1; } else if (number1 % 2 == 0 || number1 % 3 == 0) { return false; } else {
        for (int i = 5; i * i <= number1; i += 6) {
            if (number1 % i == 0 || number1 % (i + 2) == 0)
                return false;
        }
        return true;
    }
}
#endif // MODERN_CPLUSPLUS_ANSWER04_H
