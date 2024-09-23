#ifndef CONCRETEPRODUCT2_H
#define CONCRETEPRODUCT2_H

#include <string>
#include "Product.h"

class ConcreteProduct2 : public Product {
  public:
    std::string Operation() const override {
      return "{Result of the ConcreteProduct2}";
    }
};

#endif // CONCRETEPRODUCT2_H