#include<iostream>
using namespace std;
int main(){
    cout<<"enter your number"<<endl;
    int n;
    cin>>n;

    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<j<<" ";
    //     }cout<<endl;
    // }
    
    // for(int i=1;i<=n;i++){
    //     for(int j=n;j>=1;j--){
    //         cout<<j<<" ";
    //     }cout<<endl;
    // }

    // int a = 1;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<a<<" ";
    //         a++;
    //     }cout<<endl;
    // }

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<i<<" ";
    //     }cout<<endl;
    // }
    // int a =1;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<a<<" ";
    //         a++;
    //     }cout<<endl;
    // }

    // for(int i=1;i<=n;i++){
    //     int a =i;
    //     for(int j =1;j<=i;j++){
    //         cout<<a<<" ";
    //         a++;
    //     }cout<<endl;
    // }


    // for(int i =1;i<=n;i++){
    //     for(int j = 1;j <= n-i;j++){
    //         cout<<" "<<" ";
    //     }
    //     for(int k =1;k<=i;k++){
    //         cout<<"*"<<" ";
    //     }cout<<endl;
    // }

    // for(int i=1;i<=n;i++){
    //     for(int j = 1;j <= n-i+1;j++){
    //         cout<<"*"<<" ";
    //     }cout<<endl;
    // }

    // for(int i = 1;i<=n;i++){
    //     for(int j = 1;j<=i-1;j++){
    //         cout<<" "<<" ";
    //     }
    //     for(int k =n;k>=i;k--){
    //         cout<<"*"<<" ";
    //     }cout<<endl;
    // }

    // for(int i =1;i<=n;i++){
    //     for(int j = 1;j<=n-i;j++){
    //         cout<<" "<<" ";
    //     }
    //     for(int k =1;k<=i;k++){
    //         cout<<"*"<<" ";
    //     }
    //     for(int l = 1;l<i;l++){
    //         cout<<"*"<<" ";
    //     }cout<<endl;
    // }

    // for(int i= 1;i<=n;i++){
    //     for(int j=1;j<=i-1;j++){
    //         cout<<" "<<" ";
    //     }
    //     for(int k = 1;k<=n-i+1;k++){
    //         cout<<"*"<<" ";
    //     }
    //     for(int l = i;l<n;l++){
    //         cout<<"*"<<" ";
    //     }cout<<endl;
    // }

    
    // for(int i=1;i<=n;i++){
        
    //     for(int j = 1;j<=i;j++){
    //         char a = 'D';
    //         a = a-i+j;
    //         cout<<a<<" ";
          
    //     }cout<<endl;
       
    // }


    // for(int i =1;i<=n;i++){
    //     for(int j = 1;j<=n-i;j++){
    //         cout<<" "<<" ";
    //     }
    //     for(int k=1;k<=i;k++){
    //         cout<<k<<" ";
    //     }
    //     for(int l = i-1;l>=1;l--){
    //         cout<<l<<" ";
    //     }cout<<endl;
    // }
    // for(int i=1;i<=n;i++){
    //     for(int j = 1;j<=n-i;j++){
    //         cout<<" "<<" ";
    //     }
    //     for(int k =1;k<=i;k++){
    //         cout<<"*"<<" ";
    //     }cout<<endl;
    // }
    // return 0;

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<" ";
    //     }
    //     for(int k = 0;k<=i;k++){
    //         cout<<"*";
    //     }
    //     for(int l =0;l<i;l++){
    //         cout<<"*";
    //     }cout<<endl;
    // }


    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i;j++){
    //         cout<<" ";
    //     }
    //     for(int k=0;k<n-i;k++){
    //         cout<<"*";
    //     }cout<<endl;
    // }

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int k=0;k<=i;k++){
            cout<<"*";
        }
        for(int l=0;l<i;l++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=0;k<n-i;k++){
            cout<<"*";
        }
        for(int l=0;l<n-i-1;l++){
            cout<<"*";
        }
        cout<<endl;
    }
   
    
}