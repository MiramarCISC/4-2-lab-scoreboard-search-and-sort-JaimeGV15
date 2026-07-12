#include "scoreboard.hpp"
#include <iostream>

using namespace std;

int calculateTotal(const int scores[], int size) {
    // TODO:
    // If the array is null or the size is invalid, return 0. ✔
    // Otherwise, return the sum of all scores. ✔
    if (scores == nullptr || size <=0)
    {
    return 0;
    }
    else
    {
        int total = 0;
        for (int i = 0; i < size; i++)
        {
            total += scores[i];
        }
        return total;
    }
}

double calculateAverage(const int scores[], int size) {
    // TODO:
    // If the array is null or the size is invalid, return 0.0.✔
    // Otherwise, return the total divided by size.✔
    if ( scores == nullptr || size <= 0)
    {
    return 0.0;
    }
    else
    {
        int total = calculateTotal(scores, size);
        return static_cast<double>(total) / size; //searched how to get decimals.
    }
   
}

int findLowest(const int scores[], int size) {
    // TODO:
    // If the array is null or the size is invalid, return 0. ✔ 
    // Otherwise, return the smallest score. ✔
     if ( scores == nullptr || size <= 0)
    {
    return 0;
    }
    else
    {
        int lowest = scores[0];
        for (int i = 1; i < size; i++)
        {
            if (scores[i] < lowest)
            {
                lowest = scores[i];
            }
        }
        return lowest;
    }
}

int findHighest(const int scores[], int size) {
    // TODO:
    // If the array is null or the size is invalid, return 0. ✔
    // Otherwise, return the largest score. ✔
     if ( scores == nullptr || size <= 0)
    {
    return 0;
    }
    else
    {
        int highest = scores[0];
        for (int i = 1; i < size; i++)
        {
            if (scores[i] > highest)
            {
                highest =scores[i];
            }
        }
        return highest;
    }

}

int findScore(const int scores[], int size, int target) {
    // TODO:
    // Search the array from left to right. ✔
    // Return the index where target is found. ✔
    // Return -1 when target is not found. ✔
    if ( scores == nullptr || size <= 0)
    {
      return -1;
    }
    for (int i = 0; i < size; i++)
    {
        if (scores[i] == target)
        {
            return i;
        }
    }
    return -1;
 
}

void sortScores(int scores[], int size) {
    // TODO:
    // Sort the array from lowest to highest.
    // A selection sort works well for this lab.
     if ( scores == nullptr || size <= 0)
    {
     return;
    }
    for (int i = 0 ; i < size - 1; i++)
    {
        int mininx = i;
        for (int j = i+1; j < size; j++)
        {
            if (scores[j] < scores[mininx]) 
            {
                mininx = j;
            }
        }
        if (mininx != i)
        {
            int temp = scores[i];
            scores[i] = scores[mininx];
            scores[mininx] = temp;
        }
    }
}

void printScores(const int scores[], int size) {
    if (scores == nullptr || !isValidSize(size)) {
        cout << "No scores to print." << endl;
        return;
    }

    for (int i = 0; i < size; i++) {
        cout << scores[i];

        if (i < size - 1) {
            cout << " ";
        }
    }

    cout << endl;
}

bool isValidSize(int size) {
    // TODO: Return true when size is greater than 0. ✔
    if (size > 0)
    {
        return true;
    }
    else
    {
    return false;
    }
}
