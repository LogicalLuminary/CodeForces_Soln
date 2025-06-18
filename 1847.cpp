#include<iostream>
#include<vector> 
using namespace std;

// Partition function for quickselect
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Use the last element as the pivot
    int i = low;

    for (int j = low; j < high; j++) {
        if (arr[j] > pivot) { // Sort in descending order
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[high]); // Place pivot in its correct position
    return i;
}

// Quickselect function to find the kth largest element
int quickselect(int arr[], int low, int high, int k) {
    if (low <= high) {
        int pivotIndex = partition(arr, low, high);

        // Check if pivot is the kth largest element
        if (pivotIndex == k - 1) {
            return arr[pivotIndex];
        }

        // Recur for left or right part based on the pivot index
        if (pivotIndex > k - 1) {
            return quickselect(arr, low, pivotIndex - 1, k);
        } else {
            return quickselect(arr, pivotIndex + 1, high, k);
        }
    }

    return -1; // Should not reach here if input is valid
}

// Function to find kth largest element
int findKthLargest(int arr[], int length, int k) {
    if (k > 0 && k <= length) {
        return quickselect(arr, 0, length - 1, k);
    } else {
        throw invalid_argument("Invalid value of k");
    }
}

int diff( int a, int b){
    if(a-b>=0) return a- b;
    else return b-a ;
}


int main(){

int t;
cin >> t;

while(t--){

int n, k;
cin >> n >> k;
int arr[n] ;
int diffarr[n-1] ={0} ;
for(int i =0;i<n;i++){
    cin >> arr[i] ;
}
int sumofdiffarray =0;
for(int i= 0;i< n-1 ;i++){
    if(arr[i+1]-arr[i]>=0){
        diffarr[i] = arr[i+1]-arr[i];
        sumofdiffarray += diffarr[i] ;}
    else {
        diffarr[i] = arr[i] - arr[i+1] ;
        sumofdiffarray += diffarr[i] ;
    }
}
    if(n ==1 ){
        cout<< 0<<endl; continue ;
    }

if(k == 1){

    cout<< sumofdiffarray<<endl;
    continue ;
}


//cout<< findKthLargest(arr,n,2);

int k_1 =  findKthLargest(diffarr,n-1,k-1);
int sum =0;
int diffdone =0;
int noofeqltok_1 = 0;

for(int i =0 ;i< n-1 ;i++){

     if(diff(arr[i] , arr[i+1]) < k_1){
        sum += diff(arr[i] , arr[i+1]) ;
    }
    else if(diff(arr[i] , arr[i+1]) > k_1){
        diffdone++ ;
    }
    else{
        sum += diff(arr[i] , arr[i+1]) ;
        noofeqltok_1++;
    }
}

int left = k-1-diffdone ;

//sum = sum + (k-1-diffdone)*k_1 ;
sum = sum - left*k_1 ;

cout<< sum <<endl ;

}

    return 0; 
}