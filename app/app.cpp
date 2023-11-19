#include "app.h"


uint32_t sum_digits(const std::string& s) {
	uint32_t sum = 0;
	for (char v : s) {
		if (isdigit(v))
			sum += v - '0';
	}
	return sum;
}

uint32_t visible_towers(const uint32_t list[], int size_of) {
	uint32_t maximum = list[0];
	uint32_t n_visible_towers = 1;
	for (uint32_t i = 0; i < size_of; i++) {
		if (maximum < list[i]) {
			maximum = list[i];
			n_visible_towers++;
		}
	}
	return n_visible_towers;
}

int operator ""_GB(unsigned long long num) {
	return num;
}

std::string windows::release() const {
	return "22H2";
}

std::string windows::build() const {
	return "10.0.22621.819";
}

int windows::space() const {
	return 25_GB;
}

string::string(const char* s) {
	size = strlen(s);
	vrijednost = new char[size + 1];
	strcpy(vrijednost, s);
}

string::string(const string& other) {
	size = other.size;
	vrijednost = new char[size + 1];
	strcpy(vrijednost, other.vrijednost);
}

string::~string() {
	delete[] vrijednost;
}

uint32_t string::length() const {
	return size;
}

string string::rev_sub(int start, int len) const {
	char* result = new char[len + 1];

	for (int i = 0; i < len; i++) {
		result[i] = vrijednost[start - i - 1];
	}
	result[len] = '\0';

	return string(result);
}

void string::print(std::ostream& os) const {
	os << vrijednost;
}