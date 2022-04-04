#include<iostream>
using namespace std;


class NegativeValueException {
	public:
		string prompt;
		float value;

		NegativeValueException(string p, float v):prompt(p), value(v) {}
};

class HighWattageException {
	public:
		string prompt;
		float value;

		HighWattageException(string p, float v):prompt(p), value(v) {}
};

class BaseTypeException {
	public:
		string prompt;
		string value;

		BaseTypeException(string p, string val):prompt(p), value(val) {}
};