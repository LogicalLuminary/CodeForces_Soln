#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
                
        ll n;
        cin >> n;

        vector<ll> vec1(n);
        vector<bool>ispresent(n,0);
        for(int i=0;i<n;i++){
            cin >> vec1[i];
            ispresent[vec1[i]-1] = true;
        }
        
        vector<ll> absents;
        for(int i=0;i<n;i++){
            if(ispresent[i] == 0){
                absents.push_back(i+1);
            }
        }// gotta use i+1 for final arr

        // for(auto i: absents){
        //     cout<< i+1<<" ";
        // }
vector<int> first_positions;
unordered_set<int> seen;
    for (int i = 0; i < vec1.size(); i++) {
        if (seen.find(vec1[i]) == seen.end()) {
            first_positions.push_back(i); // Store the position
            seen.insert(vec1[i]);          // Mark the element as seen
        }
    }
    // for (int pos : first_positions) {
    //     std::cout << pos << " ";
    // }
    vector<ll> ans(n);
    int j=0;int k=0;
    for(int i=0;i<n;i++){
        if(j<first_positions.size() && i == first_positions[j]){
            ans[i] = vec1[i];
            j++;
        }
        else{
            ans[i] = absents[k];
            k++;
        }
    }

        for(auto i: ans){
            cout<< i<<" ";
        }cout<<endl;







    }

    return 0;
}