//
// Created by yudan oh on 25. 8. 30.
//

#include "Project01.h"

#include "Answer02.h"


Project01::Project01() {
    Answer01<unsigned long long> *answer01 = new Answer01<unsigned long long>(50);
    auto *answer02 = new Answer02<unsigned long long>(50,50);

    answerQueue.push(answer01);
    answerQueue.push(answer02);
}


void Project01::print() {
    while (!answerQueue.empty()) {
        const auto task = answerQueue.front();
        answerQueue.pop();
        task->printProblem();
        task->printAnswer();
    }
}
