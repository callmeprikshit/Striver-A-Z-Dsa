void nLetterTriangle(int n) {
    // Write your code here.
int num=65;
for(int i=n;i>=1;i--){
for(int j=1;j<=i;j++){
    cout<<char(num+j-1)<<" ";
}
cout<<endl;
}
}
