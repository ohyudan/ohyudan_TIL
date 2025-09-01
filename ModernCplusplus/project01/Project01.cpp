//
// Created by yudan oh on 25. 8. 30.
//

#include "Project01.h"

Project01::Project01() {
    Answer01<unsigned long long> *answer01 = new Answer01<unsigned long long>(50);
    auto *answer02 =
            new Answer02<unsigned long long>(300000000000, 5005050500505);
    // auto *answer02 = new Answer02<unsigned long long>(20,50);
    auto *answer03 = new Answer03<unsigned long long>(300000, 50050505005);
    auto *answer04 = new Answer04<unsigned long long>(300);
    answerQueue.push(answer01);
    answerQueue.push(answer02);
    answerQueue.push(answer03);
    answerQueue.push(answer04);
}

void Project01::print() {
    while (!answerQueue.empty()) {
        const auto task = answerQueue.front();
        answerQueue.pop();
        task->printProblem();
        task->printAnswer();
    }
}
