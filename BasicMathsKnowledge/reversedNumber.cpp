#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int num;
	cin>>num;
     int reversedNum=0;
	while(num>0){
     int lastDigit = num%10;
	 reversedNum= (reversedNum*10) + lastDigit;
	 num=num/10;
	}
	cout<<reversedNum;
}
