#include <iostream>
using namespace std;

class Actor {
private:
    string name[5]; // An array to store the names of 5 actors
    float rating[5]; // An array to store ratings for 5 actors

public:
    Actor() {
        cout << "Enter data for only 5 actors:" << endl;
    }

    void GettingData() {
        for (int i = 0; i < 5; i++) { // Array indices should start from 0
            cout << "Enter the name of Actor " << (i + 1) << ":" << endl;
            cin >> name[i]; // Corrected to use the i-th index
            cout << "Enter the rating (1-10) for Actor " << (i + 1) << ":" << endl;
            cin >> rating[i]; // Corrected to use the i-th index

            // Validate the rating
            if (rating[i] < 1 || rating[i] > 10) {
                cout << "Invalid rating. Please enter a rating between 1 and 10." << endl;
                i--; // Decrement the counter to retake the input
            }
        }
    }

    void display() const {
        for (int i = 0; i < 5; i++) { // Array indices should start from 0
            if (rating[i] > 5) {
                cout << "Name: " << name[i] << endl;
                cout << "Rating: " << rating[i] << endl;
            }
        }
    }
};

int main() {
    Actor obj;
    obj.GettingData();
    obj.display();
    return 0;
}