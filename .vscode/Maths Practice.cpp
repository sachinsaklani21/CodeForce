#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
#include <chrono>

using namespace std;

long long getRand(long long min, long long max) {
    return min + rand() % (max - min + 1);
}

void runTrainer() {
    srand(time(0));
    char choice = 'y';

    while (choice == 'y' || choice == 'Y') {
        int mode = getRand(1, 6); // All 6 logic architectures
        long long num1, num2, correctAnswer;
        string modeName;

        if (mode == 1) { 
            modeName = "TRACHTENBERG (Serial Streaming)";
            num1 = getRand(1000, 99999); num2 = 9;
        } else if (mode == 2) { 
            int base = getRand(1, 3) * 100; 
            modeName = "BASE 100-300 (Normalization)";
            num1 = base - getRand(1, 9); num2 = base - getRand(1, 9);
        } else if (mode == 3) { 
            modeName = "SCALING (Double-Half Logic)";
            num1 = getRand(20, 200) * 2; num2 = 15; // Common in trading
        } else if (mode == 4) {
            modeName = "QUARTERS (The 25 Rule)";
            num1 = getRand(20, 100) * 4; num2 = 25;
        } else if (mode == 5) {
            modeName = "SQUARING (Near 50 Logic)";
            num1 = getRand(41, 59); num2 = num1;
        } else {
            modeName = "HYBRID BASE (Near 50 / 500)";
            int base = (getRand(1, 2) == 1) ? 50 : 500;
            num1 = base - getRand(1, 5); num2 = base - getRand(1, 5);
        }

        correctAnswer = num1 * num2;
        cout << "\n[" << modeName << "]\nSolve: " << num1 << " x " << num2 << endl;

        auto start = chrono::steady_clock::now();
        long long userResponse;
        cout << "Your Answer: ";
        cin >> userResponse;
        auto end = chrono::steady_clock::now();
        auto duration = chrono::duration_cast<chrono::seconds>(end - start).count();

        if (userResponse == correctAnswer) {
            cout << ">>> CORRECT! (Latency: " << duration << "s)" << endl;
        } else {
            cout << ">>> ERROR. Correction: " << correctAnswer << endl;
        }

        cout << "Keep playing? (y/n): "; cin >> choice;
    }
}

int main() { runTrainer(); return 0; }