//Order Agnostic Binary Search

//The intuition behind this algorithm is what if the order of the sorted array is not given

#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int > v, int target)
{
    int start=0;
    int end = v.size()-1;
    // Checking the sorted order of the given array
    bool isAsc = v[start] < v[end];
    while (start <= end) {
        int middle = start + (end - start) / 2;
  
        // Check if target is present at mid
        if (v[middle] == target)
            return middle;
  
        // Ascending order
        if (isAsc == true) {
  
            // If target greater, ignore left half
            if (v[middle] < target)
                start = middle + 1;
  
            // If target smaller, ignore right half
            else
                end = middle - 1;
        }
  
        // Descending order
        else {
  
            // If target smaller, ignore left half
            if (v[middle] > target)
                start = middle + 1;
  
            // If target greater, ignore right half
            else
                end = middle - 1;
        }
    }
  
    // Element is not present
    return -1;
}