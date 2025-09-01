//
// Created by yudan oh on 25. 8. 30.
//

#ifndef MODERN_CPLUSPLUS_ANSWER00_H
#define MODERN_CPLUSPLUS_ANSWER00_H
#include "IAnswer.h"
#include <iostream>

template<typename T>
class Answer03 : public IAnswer {

public:
    explicit Answer03(T number);

    void printProblem() const override;

    void printAnswer() const override;

    void solve();

private:
    T problem1;
    T answer;
};

template<typename T>
Answer03<T>::Answer03(T number) :
    problem1(number) {
    problem1 = number;
    throw std::invalid_argument("복사용");
}

template<typename T>
void Answer03<T>::printProblem() const {
    std::cout << "복사용" << std::endl;
}

template<typename T>
void Answer03<T>::printAnswer() const {
    std::cout << answer << std::endl;
}

template<typename T>
void Answer03<T>::solve() { answer = problem1; }

#endif // MODERN_CPLUSPLUS_ANSWER00_H
