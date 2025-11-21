void numberCrown(int n) {
    
    for(int i=1;i<=n;i++){
      // Numbers
      int spaces = 2*(n-i);
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }

    // Spaces
    for(int j=1;j<=spaces;j++){
        cout<<" ";
    }

    //Numbers

    for(int j=i;j>=1;j--){
        cout<<j<<" ";
    }
    cout<<endl;
    }
}
