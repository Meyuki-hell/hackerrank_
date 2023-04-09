void plusMinus(vector<int> arr) {
    int pos = 0, neg = 0, zer =0;
    int n = arr.size();
    for(int i = 0; i < n; i++){
        if(arr[i] > 0) 
            pos++;
        else if(arr[i] < 0)
            neg++;
        else
            zer++;
    }
    cout << setprecision(6) << fixed;
    cout << double(pos)/double(n) << endl;
    cout << double(neg)/double(n) << endl ;
    cout << double(zer)/double(n);

}
