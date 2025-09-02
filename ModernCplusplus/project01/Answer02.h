//
// Created by yudan oh on 25. 8. 30.
//

#ifndef MODERN_CPLUSPLUS_ANSWER02_H
#define MODERN_CPLUSPLUS_ANSWER02_H

#include "IAnswer.h"
#include <algorithm> // 17 이하
#include <iostream>
#include <numeric>
template <typename T> class Answer02 final : public IAnswer {

public:
  explicit Answer02(T number1, T number2);

  void printProblem() const override;
  void printAnswer() const override;
  void solve();

private:
  T problem1;
  T problem2;
  T answer;
};

template <typename T>
Answer02<T>::Answer02(T number1, T number2)
    : problem1(number1), problem2(number2) {
  if (number1 > 3 || number2 > 3) {
    solve();
  } else {
    throw std::invalid_argument("Number must be < 3");
  }
}

template <typename T> void Answer02<T>::printProblem() const {
  std::cout << "2.최대공약수 프로그램 구현하기" << std::endl;
}

template <typename T> void Answer02<T>::printAnswer() const {

  std::cout << answer << std::endl;
}

template <typename T> void Answer02<T>::solve() {
  answer = 0;
  T temp;
  if (problem1 > problem2) {
    temp = problem1;
  } else {
    temp = problem2;
  }
  /*for (unsigned long long i = 1; i < temp; i++ ) {
      if (problem1%i ==0 && problem2% i ==0) {
          answer = i;
      }
  }*/

  //------------
  // 책의 비재귀적 구현
  // 17 이후로 gcd() 사용 가능
  while (problem2 != 0) {
    unsigned long long r = problem1 % problem2;
    problem1 = problem2;
    problem2 = r;
  }
  answer = problem1;
  //------------ 3

  unsigned long g = std::gcd(problem1, problem2);

  answer = g;
}

#endif // MODERN_CPLUSPLUS_ANSWER02_H