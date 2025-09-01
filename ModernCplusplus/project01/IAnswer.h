//
// Created by yudan oh on 25. 8. 30.
//

#ifndef MODERN_CplusplusANSWER_H
#define MODERN_CplusplusANSWER_H

class IAnswer {
public:
  IAnswer() = default;
  virtual ~IAnswer() = default;
  virtual void printProblem() const = 0;
  virtual void printAnswer() const = 0;

protected:
private:
};

#endif // MODERN_CplusplusANSWER_H