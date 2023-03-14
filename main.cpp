#include <iostream>
#include "client.h"

int main() {
  Client* example[5];
  const char* clientIds[5] = {
          "120938108",
          "129307320",
          "471293749",
          "568347038",
          "479230712",
  };

  for (int i = 0; i < sizeof(example) / sizeof(example[0]); i++) {
    example[i] = new Client(clientIds[i]);
    example[i] -> setRegistrationStatus(Client::Valid);
    example[i] -> Log();
  }

//  Client* client = new Client("Hello world!");
//
//  client-> setRegistrationStatus(Client::Valid);
//  client-> Log();
//  std::cout << sizeof(example) / sizeof(example[0]) << std::endl;
  return 0;
}

/* Points to focus on
 * 1. Create a class that represents the following parts of the end user
 *    a. Client number/ID: char* or int
 *    b. Days since last visit: int
 *    c. Registration status: ENUM or bool
 *
 * 2. Method that
 *
 *
 *
 *
 * */