#include <bits/stdc++.h>
using namespace std;


int main() {
 int n;
    cin>>n;
 int freq[101] = {};
 for(int i = 0; i < n; i++) {
        cin>>freq[i];
    }
    for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(freq[i]>freq[j])
                    {
                        int temp=freq[i];
                        freq[i]=freq[j];
                        freq[j]=temp;
        
                    }
            }
        }

 //for(int i=0;i<n;i++)
 //{
 //cout<<freq[i];
 //}
 int count=0;
 for(int i=0;i<n;i++)
    {
    if(freq[i]==freq[i+1])
       continue;
    else
    {
    count++;
    
    }
 }
 cout<<count;   
 return 0;
}
