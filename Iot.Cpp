

#include <iostream>

#include <vector>

#include <string>

using namespace std;

class Fan {

public:

string id;

bool isOn;

int speed;

Fan(string id) {

this->id = id;

this->isOn = false;

this->speed = 0;

}

void turnOn(int speed) {

isOn = true;

this->speed = speed;

}

void turnOff() {

isOn = false;

speed = 0;}

void printStatus() const {

cout << "Fan ID: " << id << endl;

cout << "Status: " << (isOn ? "On" : "Off") << endl;

cout << "Speed: " << (isOn ? to_string(speed) : "0") << endl;

cout << endl;

}

};

int main() {

vector<Fan> fans;

fans.push_back(Fan("IoT1 (PTT0810VCH2-)")); // Fan 1

fans.push_back(Fan("IoT2 (PTT0104G8V-)")); // Fan 2

fans.push_back(Fan("IoT3 (PTT010456F4-)")); // Fan 3

fans.push_back(Fan("IoT4 (PTTYR4567J8-)")); // Fan 4

fans.push_back(Fan("IoT5 (PTRETD955I9-)")); // Fan 5

fans.push_back(Fan("IoT6 (PTTRET9655P-)")); // Fan 6

fans.push_back(Fan("IoT7 (POTRET 9875-)")); // Fan 7

fans.push_back(Fan("IoT8 (POTTERY 8934-)")); // Fan 8

// Setting specific fan statuses based on requirements

fans[0].turnOn(1); // Fan 1: Low

fans[1].turnOff(); // Fan 2: Off

fans[2].turnOn(2); // Fan 3: High

fans[3].turnOn(1); // Fan 4: Low

fans[4].turnOff(); // Fan 5: Off

fans[5].turnOff(); // Fan 6: Offfans[6].turnOn(1); // Fan 7: Low

fans[7].turnOn(2); // Fan 8: High

// Print the status of all fans

for (const Fan& fan : fans) {

fan.printStatus();

}

return 0;

}
