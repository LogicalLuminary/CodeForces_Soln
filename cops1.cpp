// #include<iostream>
// using namespace std;

// int main(){
// int trials;
// cin >> trials;
// for(int i=0;i< trials; i++){


//     int size;
//     cin >> size;
//     int arr[size];

//     for(int j=0;j<size ; j++){
//         cin>> arr[j] ;
//     }
//     int min =arr[0];
//     int idx =0;
//     for(int k=0;k<size;k++){
//         if(min>arr[k]){
//             min =arr[k];
//             idx =k;
//         }
//     }
// arr[idx] = arr[idx]+1;

// int prod=1;
// for(int l=0;l<size;l++){
//     prod*= arr[l];
// }

// cout << prod<<endl;



// }



// return 0;}


// #include<iostream>
// using namespace std;

// int main(){


// char str[6];
// gets(str);

// typedef struct time{
//     int hr,min;
// }time;

// time t1,t2;
// str[5]='\0';


// t1.min=(int)(str[4]-'0')+(int)(str[3]-'0')*10 ;
// t1.hr = (int)(str[0]-'0')*10  +(int)(str[1]-'0');

// //cout << t1.hr<<":"<<t1.min;

// int tt = 60*t1.hr + t1.min;

// int palindrome =1;
// int wait =0;
// while(palindrome != 6){

//     for(int i=0;i<5;i++){
//         if(str[i] !=str[4-i]){
//         }
//         else{palindrome++;};
//     }
//     if (tt == 24*60-1){
//         tt =-1;
//     }
//     tt++;
//     t2.min = tt %60;
// t2.hr= (tt- t2.min)/60 ;

// char str2[5];
// str[1]=t2.hr%10;
// str[0]= t2.hr/10;
// str[2]=':';
// str[4]=t2.min%10;
// str[3]= t2.min/10;


//     wait++; 
// if(palindrome != 6){
//     palindrome = 1;
// }


// }


// cout<< wait-1<<endl;



//     return 0;
// }







#include<iostream>
using namespace std ;

int main(){

int a,b;
cin>> a>> b;

if(a==b){cout<<"0";
        return 0;}
if(a==0 || b==0){
    cout << "-1";
}

int temp1=a,temp2=a,temp3 =a,temp7=a;
int temp4=b,temp5=b,temp6 =b,temp8 =b;
int noof2ina=0;
while(temp1%2 ==0){
    noof2ina++;
    temp1 /=2;
}
int noof3ina=0;
while(temp2%3 ==0){
    noof3ina++;
    temp2 /=3;
}

int noof5ina=0;
while(temp3%5 ==0){
    noof5ina++;
    temp3 /=5;
}

//cout<<noof2ina<< noof3ina<< noof5ina;

//factors of b


int noof2inb=0;
while(temp4%2 ==0){
    noof2inb++;
    temp4 /=2;
}
int noof3inb=0;
while(temp5%3 ==0){
    noof3inb++;
    temp5 /=3;
}

int noof5inb=0;
while(temp6%5 ==0){
    noof5inb++;
    temp6 /=5;
}


int diffof2,diffof3,diffof5;

if(noof5inb>=noof5ina){
    diffof5 =noof5inb -noof5ina;
}
else{
    diffof5 =noof5ina - noof5inb;
}


if(noof3inb>=noof3ina){
    diffof3 =noof3inb -noof3ina;
}
else{
    diffof3 =noof3ina - noof3inb;
}
if(noof2inb>=noof2ina){
    diffof2 =noof2inb -noof2ina;
}
else{
    diffof2 =noof2ina - noof2inb;
}

//cout<< diffof2 << diffof3<<diffof5<<endl;


for(int i=0;i<a;i++){
    if(a%2 ==0) a=a/2;
    else if(a%3 ==0) a=a/3;
    else if(a%5== 0) a=a/5;
}
for(int i=0;i<b;i++){
    if(b%2 ==0) b=b/2;
    else if(b%3 ==0) b=b/3;
    else if(b%5== 0) b=b/5;

}
if(a==1 && b==1){
    cout<< diffof2+diffof3+diffof5;
}
else if((temp7%temp8==0 || temp8%temp7 == 0 )&&(a==1)&&b==1){
    cout<< diffof2+diffof3+diffof5 ;
}
else if((temp7%temp8==0 || temp8%temp7 == 0 )&&(temp7%2==0||temp7%3==0||temp7%5==0||temp8%2==0||temp8%3==0||temp8%5==0)){
    cout<< diffof2+diffof3+diffof5 ;
}

else {
    cout<< "-1";
}






    return 0;
}