// Lab 8 - Task 8: Sales report generator
// Takes product name, quantity and price, calculates revenue per product and total revenue
// Output formatted using setw for neat display

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int n = 3; // number of products
    string products[n];
    int quantity[n];
    double price[n], total[n];

    double grandTotal = 0;

    // Input product details
    for(int i=0; i<n; i++){
        cout << "Enter product " << i+1 << " name: ";
        cin >> products[i];
        cout << "Enter quantity sold: ";
        cin >> quantity[i];
        cout << "Enter price per unit: ";
        cin >> price[i];
        total[i] = quantity[i] * price[i];
        grandTotal += total[i];
        cout << endl;
    }

    // Display report
    cout << setw(15) << "Product"
         << setw(10) << "Quantity"
         << setw(10) << "Price"
         << setw(15) << "Total Revenue" << endl;

    for(int i=0; i<n; i++){
        cout << setw(15) << products[i]
             << setw(10) << quantity[i]
             << setw(10) << price[i]
             << setw(15) << total[i] << endl;
    }

    cout << "\nOverall Total Revenue: " << grandTotal << endl;
}

