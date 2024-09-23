#ifndef CREATOR_H
#define CREATOR_H

#include "Product.h"

class Creator {
  public:
    virtual ~Creator() {};
    virtual Product* FactoryMethod() const = 0;

    std::string SomeOperation() const {
      Product* product = this->FactoryMethod();
      // Now, use the product
      std::string result = "Creator: The same creator's code has just worked with " + product->Operation();
      delete product;
      return result;
    }
};

#endif // CREATOR_H