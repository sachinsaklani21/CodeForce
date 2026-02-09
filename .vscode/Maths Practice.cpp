#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
#include <chrono>

using namespace std;

// Function to generate a random number within a range
long long getRand(long long min, long long max) {
    return min + rand() % (max - min + 1);
}

void runTrainer() {
    srand(time(0));
    char choice = 'y';

    cout << "===========================================" << endl;
    cout << "      BRAIN OVERCLOCKING TRAINER V1.0      " << endl;
    cout << "===========================================" << endl;
    cout << "Modes: Trachtenberg, Base-Method, Criss-Cross" << endl;
    cout << "Training Focus: Accuracy, Speed, and Memory" << endl;
    cout << "-------------------------------------------" << endl;

    while (choice == 'y' || choice == 'Y') {
        int mode = getRand(1, 3);
        long long num1, num2, correctAnswer;
        string modeName;

        // MODE 1: Trachtenberg / Many-to-Single Digit
        if (mode == 1) { 
            modeName = "TRACHTENBERG (Long String)";
            num1 = getRand(1000, 99999); // 4-5 digits
            num2 = getRand(8, 12);       // Multipliers 8, 9, 11, 12
        } 
        // MODE 2: Base Method (Near 100, 200, 300)
        else if (mode == 2) { 
            int base = getRand(1, 3) * 100; 
            modeName = "BASE METHOD (Near " + to_string(base) + ")";
            num1 = base - getRand(1, 9);
            num2 = base - getRand(1, 9);
        } 
        // MODE 3: Criss-Cross / Flexibility
        else { 
            modeName = "CRISS-CROSS (Abstraction)";
            num1 = getRand(21, 150);
            num2 = getRand(11, 25);
        }

        correctAnswer = num1 * num2;
        
        cout << "\n[" << modeName << "]" << endl;
        cout << "Solve: " << num1 << " x " << num2 << endl;

        // Start Timing
        auto start = chrono::steady_clock::now();
        
        long long userResponse;
        cout << "Your Answer: ";
        cin >> userResponse;

        // Stop Timing
        auto end = chrono::steady_clock::now();
        auto duration = chrono::duration_cast<chrono::seconds>(end - start).count();

        if (userResponse == correctAnswer) {
            cout << ">>> CORRECT! (Time: " << duration << "s)" << endl;
            if (duration < 5) cout << ">>> STATUS: HYPER-FLUID (World Class Speed)" << endl;
            else if (duration < 15) cout << ">>> STATUS: STEADY FLOW" << endl;
            else cout << ">>> STATUS: NEURAL RESISTANCE DETECTED" << endl;
        } else {
            cout << ">>> ERROR: Buffer Mismatch." << endl;
            cout << ">>> Correct Answer: " << correctAnswer << " (Time: " << duration << "s)" << endl;
        }

        cout << "\nContinue training? (y/n): ";
        cin >> choice;
    }

    cout << "\n===========================================" << endl;
    cout << "SESSION ENDED. MARK ATTENDANCE ON GITHUB." << endl;
    cout << "Stay Silent. Stay Sharp. Way of Life." << endl;
    cout << "===========================================" << endl;
}

int main() {
    runTrainer();
    return 0;
}