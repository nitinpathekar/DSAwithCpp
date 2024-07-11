#include<iostream>
#include<array>
using namespace std;
int search(int array[], int n, int target) {
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;  // Prevents overflow
        if (array[mid] == target) {
            return mid;  // Return the index of the target
        }
        if (array[mid] < target) {
            left = mid + 1;  // Move the left boundary to mid + 1
        } else {
            right = mid - 1;  // Move the right boundary to mid - 1
        }
    }
    return -1;  // Target not found
}

int main()
{
    //binary searcch only work on monotonic function(either accending or decending)
    
   return 0;
}
