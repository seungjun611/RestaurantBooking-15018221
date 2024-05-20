#include <iostream>
#include "gtest/gtest.h"
#include "../RestaurantBooking/SmsSender.cpp"

class TestableSmsSender : public SmsSender {
public:
	void send(Schedule* schedule) override {
		std::cout << "�׽�Ʈ�� SmsSender class�� send�޼��� �����\n";
		sendMethodIsCalled = true;
	}

	bool IsSendMethodIsCalled() {
		return sendMethodIsCalled;
	}

private:
	bool sendMethodIsCalled;
};