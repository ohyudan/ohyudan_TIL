//
// Created by yudan oh on 25. 8. 30.
//

#ifndef MODERN_CPLUSPLUS_ANSWER02_H
#define MODERN_CPLUSPLUS_ANSWER02_H


#include "IAnswer.h"
#include <iostream>
template<typename T>
class Answer02 final : public IAnswer{

public :

    explicit Answer02(T number1, T number2);

    void printProblem()const override;
    void printAnswer() const override;
    void solve();

private:
    T problem1;
    T problem2;
    T answer;
};

template<typename T>
Answer02<T>::Answer02(T number1,T number2 ) :problem1(number1),problem2(number2) {
    if (number1 > 3||number2 > 3) {
        solve();
    }else {
        throw std::invalid_argument("Number must be < 3");
    }
}

template<typename T>
void Answer02<T>::printProblem() const {
    std::cout << "최대공약수 프로그램 구현하기" << std::endl;
}

template<typename T>
void Answer02<T>::printAnswer() const {

    std::cout << answer << std::endl;
}

template<typename T>
void Answer02<T>::solve() {
    answer = 0;
    T temp_number ;
    if (problem1 > problem2) {
        temp_number = problem1;
    }else {
        temp_number = problem2;
    }
    for (unsigned long long i = 0; i < temp_number; i++ ) {

    }
// 미완성
    answer = temp_number;

}





#endif //MODERN_CPLUSPLUS_ANSWER02_H