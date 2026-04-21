#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    // Input validation
    if (n <= 0) {
        cout << "Invalid input. Number of elements must be greater than 0." << endl;
        return 1;  // Exit program with error code
    }
    
    int arr[n];  // Create array of size n (VLA - works in some compilers)
    
    cout << "Enter " << n << " numbers, one per line:" << endl;
    
    // Read numbers into array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Print numbers in reverse order
    cout << "Numbers in reverse order: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
