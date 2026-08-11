#include <iostream>
#include <queue>
#include <string>
#include <iomanip>
#include <limits>
#include <algorithm> // For std::transform

using namespace std;

// The core data structure: a queue of customer names/inquiries
queue<string> support_queue;


void printHeader() {
    // Attempt to clear screen for a cleaner "GUI" feel
    system("cls");

    cout << setfill('=') << setw(60) << "" << endl;
    cout << setfill(' ') << setw(35) << "CUSTOMER SUPPORT SERVICE MANAGER" << endl;
    cout << setw(50) << "(FIFO Inquiry Management)" << endl;
    cout << setfill('=') << setw(60) << "" << endl;
}


void displayQueueStatus() {
    cout << "\n--- Waiting Inquiry Queue Status ---" << endl;

    if (support_queue.empty()) {
        cout << "Queue is Empty. No customers waiting for service." << endl;
        cout << setfill('-') << setw(60) << "" << endl;
        return;
    }

    cout << "Total Waiting: " << support_queue.size() << " customer(s)" << endl;
    cout << "Next to be Served: " << support_queue.front() << endl;

    cout << "\nInquiry List:" << endl;
    // Create a copy of the queue to display elements without modifying the original
    queue<string> temp_q = support_queue;
    int index = 1;
    while (!temp_q.empty()) {
        cout << "  " << index << ". " << temp_q.front() << endl;
        temp_q.pop();
        index++;
    }
    cout << setfill('-') << setw(60) << "" << endl;
}


void submitInquiry() {
    string customer_name;
    cout << "\n[Submit Inquiry] Enter Customer Name/Brief Issue: ";
    getline(cin, customer_name);

    // Simple validation
    if (customer_name.empty()) {
        cout << "\n[WARNING] Inquiry cannot be empty. Press ENTER to continue." << endl;
    }
    else {
        // Enqueue: Insertion at the 'rear'
        support_queue.push(customer_name);
        cout << "\n[SUCCESS] Customer '" << customer_name << "' has been added to the waiting queue." << endl;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Wait for user input
}


void serveNextCustomer() {
    if (!support_queue.empty()) {
        // GetFront: Peek at the oldest item
        string served = support_queue.front();

        // Dequeue: Deletion from the 'front'
        support_queue.pop();

        cout << "\n[SERVICE COMPLETE] Served: " << served << "." << endl;
        cout << "This customer was served first because they submitted the oldest request." << endl;
    }
    else {
        cout << "\n[INFO] The waiting queue is currently empty. No customers to serve." << endl;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Wait for user input
}


int main() {
    int choice;

    do {
        printHeader();
        displayQueueStatus();

        // Menu options using customer-friendly terms
        cout << "\n--- Service Agent Menu ---" << endl;
        cout << "1. Submit New Inquiry" << endl;
        cout << "2. Serve Next Customer" << endl;
        cout << "3. Check Next Up" << endl;
        cout << "4. Exit System" << endl;
        cout << "\nEnter Option [1-4]: ";

        // Input choice and validation
        if (!(cin >> choice)) {
            // Handle non-integer input
            cout << "\n[ERROR] Invalid input. Please enter a number (1-4)." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        // Consume the remaining newline character after reading the integer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        // Execute function based on menu choice
        switch (choice) {
        case 1:
            submitInquiry();
            break;
        case 2:
            serveNextCustomer();
            break;
        case 3:
            if (!support_queue.empty()) {
                cout << "\n[INFO] Next customer to be served: " << support_queue.front() << endl;
            }
            else {
                cout << "\n[INFO] Queue is empty." << endl;
            }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            break;
        case 4:
            cout << "\nClosing Service Manager. Have a great day!" << endl;
            break;
        default:
            cout << "\n[ERROR] Invalid option. Press ENTER to try again." << endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            break;
        }

    } while (choice != 4);

    return 0;
}



