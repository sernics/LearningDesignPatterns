#ifndef CONCRETECREATOR2_H
#define CONCRETECREATOR2_H

#include "Creator.h"
#include "ConcreteProduct2.h"

class ConcreteCreator2 : public Creator {
  public:
    Product* FactoryMethod() const override {
      return new ConcreteProduct2();
    }
};

#endif // CONCRETECREATOR2_H