#include "address.h"
#include "date.h"
#include "student.h"

#include <iostream>
#include <sstream>


Student::Student() {
	studentString = "";
	firstName = "";
	lastName = "";
	dob = new Date();
	expectedGrad = new Date();

}
