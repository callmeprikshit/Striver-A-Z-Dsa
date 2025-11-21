void nLetterTriangle(int n) {
    // Write your code here.
    int value=65;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<char(value+j-1)<<" ";
            
        }
        cout<<endl;
    }
}
