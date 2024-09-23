#ifndef CONCRETE_PRODUCT_1_H
#define CONCRETE_PRODUCT_1_H

#include <string>
#include "Product.h"

class ConcreteProduct1 : public Product {
  public:
    std::string Operation() const override {
      return "{Result of the ConcreteProduct1}";
    }
};

#endif // CONCRETE_PRODUCT_1_H