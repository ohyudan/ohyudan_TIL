//
// Created by yudan oh on 25. 8. 30.
//

#ifndef MODERN_CPLUSPLUS_ANSWER00_H
#define MODERN_CPLUSPLUS_ANSWER00_H
#include "IAnswer.h"
#include <iostream>
template<typename T>
class Answer00 : public IAnswer{

public :

    explicit Answer00(T number);

    void printProblem()const override;
    void printAnswer() const override;
    void solve();

private:
    T problem;
    T answer;
};

template<typename T>
Answer00<T>::Answer00(T number ) :problem(number) {
    problem = number;
    if (number > 3) {
        solve();
    }else {
        throw std::invalid_argument("Number must be < 3");
    }
}

template<typename T>
void Answer00<T>::printProblem() const {
    std::cout << "3이나 5로 나누어 떨어지는 자연수의 합을 계산하는 프로그램" << std::endl;
}

template<typename T>
void Answer00<T>::printAnswer() const {

    std::cout << answer << std::endl;
}

template<typename T>
void Answer00<T>::solve() {
answer = problem;
}


#endif //MODERN_CPLUSPLUS_ANSWER00_H
