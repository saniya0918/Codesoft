#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

const int NUM_ROWS = 5;
const int NUM_COLS = 10;
const double TICKET_PRICE = 10.0;

vector<vector<char>> seats(NUM_ROWS, vector<char>(NUM_COLS, 'O')); // 'O' for available, 'X' for booked

void displaySeats() {
    cout << "  ";
    for (int i = 0; i < NUM_COLS; ++i) {
        cout << setw(3) << i + 1;
    }
    cout << endl;

    for (int i = 0; i < NUM_ROWS; ++i) {
        cout << static_cast<char>('A' + i) << " ";
        for (int j = 0; j < NUM_COLS; ++j) {
            cout << setw(3) << seats[i][j];
        }
        cout << endl;
    }
}

bool isSeatAvailable(int row, int col) {
    return seats[row][col] == 'O';
}

double bookSeat(int row, int col) {
    if (isSeatAvailable(row, col)) {
        seats[row][col] = 'X';
        return TICKET_PRICE;
    } else {
        return 0.0;
    }
}

int main() {
    cout << "Welcome to the Movie Ticket Booking System" << endl;

    while (true) {
        cout << "\n1. View Movie Listings\n2. Book a Ticket\n3. Exit\nEnter your choice: ";
        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nCurrent Movie Listings:\n1. Avengers: Endgame\n2. The Lion King\n3. Joker\n";
                break;
            case 2:
                cout << "\nEnter seat (row and column) you want to book (e.g., A1): ";
                char row;
                int col;
                cin >> row >> col;
                int row_index = row - 'A';
                col--;
                if (row_index < 0 || row_index >= NUM_ROWS || col < 0 || col >= NUM_COLS) {
                    cout << "Invalid seat selection. Please try again." << endl;
                    continue;
                }
                if (!isSeatAvailable(row_index, col)) {
                    cout << "Sorry, this seat is already booked. Please select another seat." << endl;
                    continue;
                }
                double cost = bookSeat(row_index, col);
                if (cost > 0.0) {
                    cout << "Seat booked successfully! Total cost: $" << fixed << setprecision(2) << cost << endl;
                } else {
                    cout << "Error booking seat. Please try again." << endl;
                }
                break;
            case 3:
                cout << "Thank you for using the Movie Ticket Booking System. Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

        cout << "\nCurrent Seat Availability:" << endl;
        displaySeats();
    }

    return 0;
}

