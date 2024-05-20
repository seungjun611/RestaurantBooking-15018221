#include "gtest/gtest.h"
#include "../RestaurantBooking//BookingScheduler.cpp"

class TestableScheduler : public BookingScheduler {
public:
	TestableScheduler(int capacityPerHour, tm dateTime) :
		BookingScheduler(capacityPerHour),
		dateTime(dateTime){

	}

	time_t getNow() override {
		return mktime(&dateTime);
	}

private:
	tm dateTime;
};