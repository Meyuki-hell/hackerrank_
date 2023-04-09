void miniMaxSum(vector<int> arr) {
    long minSum = arr[0];
    long maxSum = arr[0], s = 0;
    int n = arr.size();
    
    for(int i =0 ; i < n; i++){
        s += arr[i];
        if(arr[i] > maxSum){
            maxSum = arr[i];
        }
        if(arr[i] < minSum){
            minSum =arr[i];
        }
    }
    cout << s - maxSum << " " << s - minSum;

}
