#include<iostream>
using namespace std;
int main(){
    // int row,col,n;
    // cin>>n;
    // for(row=1;row<=n;row++){
    //     //space print 
    //     for(col=1;col<=n-row;col++){
    //         cout<<" ";
    //     }
    //     // star print 
    //     for(col=1;col<=row;col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    // int row,col,n;
    // cin>>n;
    // for(row=1;row<=n;row++){
    //     //space print 
    //     for(col=1;col<=n-row;col++){
    //         cout<<" ";
    //     }
    //     // star print 
    //     for(col=1;col<=row;col++){
    //         cout<<row;
    //     }
    //     cout<<endl;
    // }

    //  int row,col,n;
    // cin>>n;
    // for(row=1;row<=n;row++){
    //     //space print 
    //     for(col=1;col<=n-row;col++){
    //         cout<<" ";
    //     }
    //     // star print 
    //     for(col=1;col<=row;col++){
    //         cout<<col;
    //     }
    //     cout<<endl;
    // }

//     int row,col,n;
//     cin>>n;
//     for(row=1;row<=n;row++){
//         //space print 
//         for(col=1;col<=n-row;col++){
//             cout<<" ";
//         }
//         
//         char name = 'A'+(row-1);
//         for(char name = 'A';name<='A'+row-1;name++){
//             cout<<name;
//         }
//         cout<<endl;
//     }

    int row,col,n;
    cin>>n;
    for(row=1;row<=n;row++){
        //space print 
        for(col=1;col<=n-row;col++){
            cout<<" ";
        }
        //print numbers
        for(col=row;col>=1;col--){
            cout<<col;
        } 
       
        cout<<endl;
    }
}
