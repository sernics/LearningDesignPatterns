#ifndef CONCRETE_CREATOR_1_H
#define CONCRETE_CREATOR_1_H

#include "Creator.h"
#include "ConcreteProduct1.h"

class ConcreteCreator1 : public Creator {
  public:
    Product* FactoryMethod() const override {
      return new ConcreteProduct1();
    }
};

#endif // CONCRETE_CREATOR_1_H