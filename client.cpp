#include <iostream>
#include "client.h"

void Client::setRegistrationStatus(RegistrationStatus status) {
  p_status = status;
}

void Client::Log() {
  switch (p_status) {
    case Valid:
      std::cout << "Valid subscription: Card number is " << client_id << std::endl;
      break;
    case Expired:
      std::cout << "Subscription expired: Card number is " << client_id << std::endl;
      break;
    case Awaiting_Status:
      std::cout << "Status unavailable or awaiting processing: Card number is " << client_id << std::endl;
      break;
    case Invalid:
      std::cout << "[ERROR]: Invalid subscription: Card number is " << client_id << std::endl;
      break;
  }
}

Client::Client(const char *cNum) {
  client_id = cNum;
  days_since_last_visit = 0;
  p_status = Invalid;
}

Client::Client() {
  client_id = "00000000";
  days_since_last_visit = 0;
  p_status = Invalid;
}
