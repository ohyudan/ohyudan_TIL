//
// Created by yudan oh on 25. 8. 30.
//

#ifndef MODERN_CPLUSPLUS_ANSWER05_H
#define MODERN_CPLUSPLUS_ANSWER05_H
#include "IAnswer.h"
#include <algorithm> // 17 이하
#include <iostream>
#include <vector>
#include <numeric>

#include "Answer04.h"

template<typename T>
class Answer05 : public IAnswer {

public:
    explicit Answer05(T number1);

    void printProblem() const override;

    void printAnswer() const override;

    void solve();

private:
    T problem1;
    T answer;
    std::vector<std::pair<T,T>> vector;
};

template<typename T>
Answer05<T>::Answer05(T number1) :
    problem1(number1) {
    solve();
}

template<typename T>
void Answer05<T>::printProblem() const {
    std::cout << "5.섹시 소수 짝을 출력하는 프로그램 구현하기" << std::endl;
}

template<typename T>
void Answer05<T>::printAnswer() const  {

    for (auto it = vector.begin(); it != vector.end(); ++it){
        std::cout << "(" << it->first << ", " << it->second << ")" << std::endl;
    }

}

template<typename T>
void Answer05<T>::solve() {
    unsigned long long number1 = problem1;


    for (unsigned long long i = 1; i <= number1; i++) {

        if (Answer04<unsigned long long>::isPrime(i)&&Answer04<unsigned long long>::isPrime(i+6)) {
            vector.push_back(std::pair<T,T>(i,i+6));
        }
    }


}

#endif // MODERN_CPLUSPLUS_ANSWER05_H
