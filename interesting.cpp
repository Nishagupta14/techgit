#include<bits/stdc++.h>
#include<climits>
using namespace std;
int predict(int *ar, int size,int k,int l,int pivot){
    int count_dec =0 ;
    int count_inc =0 ;
    for(int i=0;i<size;i++){
        if(pivot - ar[i]  > 0){
            count_dec+=count_dec+abs(pivot - ar[i]);
        }
        else if(pivot-ar[i]<0){
            count_inc +=count_inc+abs(pivot-ar[i]);
        }
    }
    if(count_inc - count_dec >=0){
        int res = (count_dec)*k;
        res+=(count_inc - count_dec)*l;
        return res;
    }
    else{
        return INT_MAX;
    }



}
int main(void){
    int n;
    cin>>n;
    int *ar = new int[n];
    int k,l;
    cin>>k;
    cin>>l;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
   // sort(ar,ar+n);
    int min = ar[0];
    int max = ar[n-1];
    for(int i=0;i<n;i++){
        if(min > ar[i]){
            min =ar[i];
        }
    }
    for(int i=0;i<n;i++){
        if(max < ar[i]){
            max =ar[i];
        }
    }
    int final_res=INT_MAX;
    for(int i=min;i<=max;i++){
        int sol = predict(ar,n, k ,l ,i);
 //       cout<<"-> "<<sol<<endl;
        if(final_res > sol){
            final_res = sol;
        }
    }
    delete [] ar;
    cout<<final_res<<endl;
}

