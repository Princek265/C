// arr is [2,1,7,5,4,9]
// for (int i = 1; i < n; i++) {   // pick a number from 1 to end
//     int key = arr[i];           // this is the picked number
//     int j = i - 1;              // start checking left side

//     while (j >= 0 && arr[j] > key) { 
//         arr[j + 1] = arr[j];   // move bigger number to the right
//         j--;                   // go left
//     }

//     arr[j + 1] = key;          // place the picked number
// }
