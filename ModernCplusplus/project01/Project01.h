//
// Created by yudan oh on 25. 8. 30.
//

#ifndef MODERN_CPLUSPLUS_PROJECT01_H
#define MODERN_CPLUSPLUS_PROJECT01_H
#include "Answer01.h"
#include "Answer02.h"
#include "Answer03.h"
#include "IAnswer.h"
#include <queue>

class Project01 {

public:
  Project01();
  void print();

private:
  std::queue<IAnswer *> answerQueue = std::queue<IAnswer *>();
};

#endif // MODERN_CPLUSPLUS_PROJECT01_H