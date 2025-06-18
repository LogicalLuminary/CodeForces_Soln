//#include<iostream>
/*
using namespace std ;
int main(){

string s1;
string s2;
cin>> s1>>s2 ;

int l =s2.length(); 
int s1ptr=0;
int s2ptr=0;
int min=INT32_MAX;
    for(int i=1;i<s1.length( );i++){
        for(int j=1;j<s2.length();j++){
            if(s1.at(i) == s2.at(l-j-1)){
                if(i+j < min){ 
                    min=i+j;
                    s1ptr = i;
                    s2ptr = j;

                }
            }
        }
    }

//cout<<s1ptr<<" "<<s2ptr<<endl;
char arr[s1ptr +s2ptr+1];
if(s1ptr + s2ptr == 0) {
    cout<<-1;
    return 0;
}
for(int m=0;m<s1ptr+1;m++){
    arr[m] = s1.at(m);
    //cout<<arr[m];
}
for(int n=0;n<s2ptr;n++){
    arr[s1ptr+s2ptr-n] = s2.at(l-1-n);
    //cout<<arr[s1ptr+s2ptr-n];
}

for(int i=0;i<s1ptr+s2ptr+1;i++){
    cout<<arr[i];
}

return 0;
}
*/


#include<iostream>

using namespace std ;
int main(){

string s1;
string s2;
cin>> s1>>s2 ;

int l =s2.length(); 
int s1ptr=0;
int s2ptr=0;
int min=INT32_MAX;

int arr2[26]={0};
for(int j=0;j<26; j++){
    arr2[j] = -1;
}
for(int i=0;i<s1.length();i++){
    if(arr2[s1.at(i)-97] >0) continue;
    arr2[s1.at(i)-97] = i;
}


// for(int i=0;i<26;i++){
//     cout<<arr2[i];
// }

for(int j=1;j<s2.length();j++){
    if(arr2[s2.at(l-j-1)-97] > 0){
        if(arr2[s2.at(l-j-1)-97]+j < min){ 
            min=arr2[s2.at(l-j-1)-97]+j;
            s1ptr = arr2[s2.at(l-j-1)-97];
            s2ptr = j;
            }
    }
}



    // for(int i=1;i<s1.length( );i++){
    //     for(int j=1;j<s2.length();j++){
    //         if(s1.at(i) == s2.at(l-j-1)){
    //             if(i+j < min){ 
    //                 min=i+j;
    //                 s1ptr = i;
    //                 s2ptr = j;

    //             }
    //         }
    //     }
    // }

//cout<<s1ptr<<" "<<s2ptr<<endl;
char arr[s1ptr +s2ptr+1];
if(s1ptr + s2ptr == 0) {
    cout<<-1;
    return 0;
}
for(int m=0;m<s1ptr+1;m++){
    arr[m] = s1.at(m);
    //cout<<arr[m];
}
for(int n=0;n<s2ptr;n++){
    arr[s1ptr+s2ptr-n] = s2.at(l-1-n);
    //cout<<arr[s1ptr+s2ptr-n];
}

for(int i=0;i<s1ptr+s2ptr+1;i++){
    cout<<arr[i];
}

return 0;
}