
        char x;
        cin>>x;
        int n;
        cin>>n;
        string s="abcdefgh";
        for(int i=1;i<n;i++){
            cout<<x<<i<<endl;
        }
        for(int i=n+1;i<=8;i++){
             cout<<x<<i<<endl;
        }
        for(int i=0;i<8;i++){
            if(s[i]!=x){
                cout<<s[i]<<n<<endl;
            }
        }
    }
}