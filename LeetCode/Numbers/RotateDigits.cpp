//  Rotated Digits:

// X is a good number if after rotating each digit individually by 180 degrees,
// we get a valid number that is different from X.  Each digit must be rotated - we cannot choose to leave it alone.

//A number is valid if each digit remains a digit after rotation. 0, 1, and 8 rotate to themselves; 
//2 and 5 rotate to each other (on this case they are rotated in a different direction, in other words 2 or 5 gets mirrored); 
//6 and 9 rotate to each other, and the rest of the numbers do not rotate to any other number and become invalid.

// Now given a positive number N, how many numbers X from 1 to N are good?

// Example:
// Input: 10
// Output: 4
// Explanation: 
// There are four good numbers in the range [1, 10] : 2, 5, 6, 9.
// Note that 1 and 10 are not good numbers, since they remain unchanged after rotating.
// Note:

// N  will be in range [1, 10000].
// class Solution {
// public:
//     int count = 0;
//     // unordered_set <int> numSet = {0,8,1,2,5,6,9};
//     int rotatedDigits(int N)
//     {
//         int num;
//         for(int i =1;i<=N;i++){
//           bool  flag =true;
            
//                 int key = i%10;
//                 if(numSet.find(key)==numSet.end())
//                 {
//                     flag = false;
//                     break;
//                 }
//                 i=i/10;
//             }
//             if(flag==true){
//                 count++;
//                 flag=true;
//             }
//           
//         }
//         return count;
//     }
// };
class Solution {
public:
    int count = 0;
    // unordered_set <int> numSet = {0,8,1,2,5,6,9};
    int rotatedDigits(int N)
    {
        int count = 0;
        int num = 0; 
        bool flag = false;
        for(int i =1;i<=N;i++){
            num = i;
            
            while(num!=0)
            {
               if(num % 10 == 2 || num % 10 == 5 || num % 10 == 6 || num % 10 == 9){
                   flag = true;
               }   
               else if(num % 10 == 3 || num % 10 == 4 || num % 10 == 7)
            {
                    flag = false;
                    break;
                }
                num = num /10;
                }
            if(flag){
                count++;
                flag = false;
            }
            }
        return count;
    }
};