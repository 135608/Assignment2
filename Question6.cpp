#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main() {
    while (true) {
        // Display the red light
        cout << "Red Light" << endl;
        this_thread::sleep_for(chrono::seconds(5)); // Red light for 5 seconds

        // Display the yellow light
        cout << "Yellow Light" << endl;
        this_thread::sleep_for(chrono::seconds(2)); // Yellow light for 2 seconds

        // Display the green light
        cout << "Green Light" << endl;
        this_thread::sleep_for(chrono::seconds(5)); // Green light for 5 seconds
    }

    return 0;
}
