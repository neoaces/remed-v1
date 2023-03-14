#pragma once
#include <iostream>

class Client {
public:
  // Constructors for end-user client
  explicit Client(const char* cNum);
  Client();

  // Destructor
  ~Client() {
    // Automatically destroyed since data is on the stack
    std::cout << "Destroyed " << client_id << std::endl;
  }

  const char* client_id;
  int days_since_last_visit;

public:
  enum RegistrationStatus: char {
    Valid, Expired, Awaiting_Status, Invalid
  };

  void setRegistrationStatus(RegistrationStatus status);
  void Log();

private:
  RegistrationStatus p_status;
};

class MedicineClient : public Client {

};