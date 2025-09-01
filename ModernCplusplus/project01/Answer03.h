//
// Created by yudan oh on 25. 8. 30.
//

#ifndef MODERN_CPLUSPLUS_ANSWER03_H
#define MODERN_CPLUSPLUS_ANSWER03_H
#include "IAnswer.h"
#include <algorithm> // 17 이하
#include <iostream>
#include <numeric>

template<typename T>
class Answer03 : public IAnswer {

public:
    explicit Answer03(T number1, T number2);

    void printProblem() const override;

    void printAnswer() const override;

    void solve();

private:
    T problem1;
    T problem2;
    T answer;
};

template<typename T>
Answer03<T>::Answer03(T number1, T number2) :
    problem1(number1), problem2(number2) {

    if (number1 > 3 || number2 > 3) {
        solve();
    } else {
        throw std::invalid_argument("Number must be < 3");
    }
}

template<typename T>
void Answer03<T>::printProblem() const {
    std::cout << "최소공배수 프로그램 구현하기" << std::endl;
}

template<typename T>
void Answer03<T>::printAnswer() const {

    std::cout << answer << std::endl;
}

template<typename T>
void Answer03<T>::solve() {
    unsigned long long number1 = problem1;
    unsigned long long number2 = problem2;
    // ------- 1차
    // for (unsigned long long i =1; ; i++) {
    //     if (i%number1==0&&i%number2==0 ) {
    //         answer = i;
    //         break;
    //     }
    // }

    //------ 2차
    // unsigned long long temp = std::max(number1,number2);
    // for (unsigned long long i = temp ;; ++i ) {
    //     if (i%number1 == 0 && i%number2 == 0) {
    //         answer = i;
    //         break;
    //     }
    // }
    // 300000000000, 500505050050505050  안 끝남.

    //------ 3차
    // unsigned long long g = 0;
    // while (number2 != 0) {
    //         unsigned long long r = number1% number2;
    //         number1=  number2;
    //         number2=r;
    // }
    // g  = number1;
    //
    //
    // unsigned long long l = (problem1 / g) * problem2;

    //------- 4차

    // unsigned long g = std::gcd(number1,number2);
    unsigned long long l = std::lcm(number1, number2);

    answer = l;
}

#endif // MODERN_CPLUSPLUS_ANSWER03_H
