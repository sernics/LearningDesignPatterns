#include <iostream>
#include "Creator.h"
#include "ConcreteCreator1.h"
#include "ConcreteCreator2.h"

void clientCode(const Creator& creator) {
  std::cout << "Client: I'm not aware of the creator's class, but it still works.\n"
            << creator.SomeOperation() << std::endl;
}

int main() {
  std::cout << "App: Launched with the ConcreteCreator1.\n";
  Creator* creator = new ConcreteCreator1();
  clientCode(*creator);
  std::cout << std::endl;
  std::cout << "App: Launched with the ConcreteCreator2.\n";
  Creator* creator2 = new ConcreteCreator2();
  clientCode(*creator2);
  delete creator;
  delete creator2;
  return 0;
}