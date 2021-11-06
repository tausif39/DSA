// swap using XOR 

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int a = 4, b = 6;
//     a = a ^ b;
//     b = b ^ a; // b-->a

//     // b= b^ (a ^ b) ==> b ^ b ^ a

//     a = a ^ b;  //a-- > b
    
//     // a =  (a ^ b)^ a ==>a^a^b --> b       xor is associative order doesn't matter

//     cout << a << " " << b<< endl ;


// }

/*  Question based on XOR 
 *Given an array of n integers. All numbers occur even times except one number which occurs once. Find the number in O(n) time & constant extra space O(1)
 * N< 10^ 5
 * a[i] < 10^5


*/

#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>> n;
int x;
int ans =0;   // xor any number with 0 is the number itself
for (int i=0; i < n; i++)
{
    cin >> x;
    ans ^= x;

}
cout << ans << endl;
    


}