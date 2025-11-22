#include <bits/stdc++.h> 
int countDigit(long long x) {
    // Write your code here.
    int count=0;
    while(x>0){
        int lastDigi = x %10;
        count++;
        x = x /10;
    }
    return count;
}
