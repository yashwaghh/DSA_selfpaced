#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4};
    int high = arr.size() - 1;
    int low = 0;

    while (low < high)
    {
        int mid = low + (high - low) / 2;

        if (mid % 2 == 1)
        {
            // this means somewhere pattern broke lets check if the element to the even i.e
            // left if its same or not
            if (arr[mid] == arr[mid - 1])
            {
                // element is on left by that logic
                low = mid + 1;
            }
            else
            {
                high = mid;
            }
        }
        else if (mid % 2 == 0)
        {
            // this means the element should form a pair to the right
            // lets check at right if we find the element

            if (arr[mid] == arr[mid + 1])
            {
                // single element is on right so we update the low
                low = mid + 2;
            }
            // if not then we have two options left either the element is on left or the element is the mid
            else
            {
                high = mid;
            }
        }
    }
    cout << arr[low] << " ";
}