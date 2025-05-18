#include <iostream>
#include <vector>

using namespace std;

int calculate(const vector<int>& bowl) {
    int result = 0;
    int frame = 0;
    int index = 0;

    for (frame = 0; frame < 10; ++frame) {
        if (bowl[index] == 10) {
            // Strike
            result += 10 + bowl[index + 1] + bowl[index + 2];
            index += 1;
        } else if (bowl[index] + bowl[index + 1] == 10) {
            // Spare
            result += 10 + bowl[index + 2];
            index += 2;
        } else {
            // Open frame
            result += bowl[index] + bowl[index + 1];
            index += 2;
        }
    }

    return result;
}

int main() {
    
   // input
    vector<int> bowling = {
        10,    
        7, 3,  
        9, 0,  
        10,     
        0, 8,   
        8, 2,   
        0, 6,   
        10,     
        10,    
        10, 8, 1 
    };

    int totalScore = calculate(bowling);
    cout << "Total Score: " << totalScore << endl;

    return 0;
}
