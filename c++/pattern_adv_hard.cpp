#include<iostream>
using namespace std;
int main(){
    //  int row,col,n;
    // cin>>n;
    // for(row=1;row<=n;row++){
    //     //space print 
    //     for(col=1;col<=n-row;col++){
    //         cout<<" ";
    //     }
    //     //print numbers
    //     for(col=1;col<=2*row-1;col++){
    //         cout<<"*";
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
    //     //print numbers
    //     for(col=1;col<=row;col++){
    //         cout<<col;
    //     } 
    //     for(col=row-1;col>=1;col--)
    //     {
    //         cout<<col;
    //     }
    //     cout<<endl;
    // }


    // int row,col,n;
    // cin>>n;
    // for(row=n;row>=1;row--){
    //     //space print 
    //     for(col=1;col<=n-row;col++){
    //         cout<<" ";
    //     }
    //     //print numbers
    //     for(col=1;col<=2*row-1;col++){
    //         cout<<"*";
    //     } 
    //     cout<<endl;
    // }
     


// ************
// *****  *****
// ****    ****
// ***      ***
// **        **
// *          *
// *          *
// **        **
// ***      ***
// ****    ****
// *****  *****
// ************
    
// int row,col,n;
//     cin>>n;
//     for(row=n;row>=1;row--){
//         //print star
//         for(col=1;col<=row;col++){
//             cout<<"*";
//         } 
//         //print spaces 
//         for(col=1;col<=2*(n-row);col++){
//             cout<<" ";
//         }
//         for(col=1;col<=row;col++){
//             cout<<"*";
//         } 
//         cout<<endl;
//     }
//      for(row=1;row<=n;row++){
//         //print star
//         for(col=1;col<=row;col++){
//             cout<<"*";
//         } 
//         //print spaces 
//         for(col=1;col<=2*(n-row);col++){
//             cout<<" ";
//         }
//         for(col=1;col<=row;col++){
//             cout<<"*";
//         } 
//         cout<<endl;
//     }




    // int row,col,n;
    // cin>>n;
    // for(row=1;row<=n;row++){
    //     //print star
    //     for(col=1;col<=row;col++){
    //         cout<<"*";
    //     } 
    //     //print spaces 
    //     for(col=1;col<=2*(n-row);col++){
    //         cout<<" ";
    //     }
    //     for(col=1;col<=row;col++){
    //         cout<<"*";
    //     } 
    //     cout<<endl;
    // }
    //  for(row=n-1;row>=1;row--){
    //     //print star
    //     for(col=1;col<=row;col++){
    //         cout<<"*";
    //     } 
    //     //print spaces 
    //     for(col=1;col<=2*(n-row);col++){
    //         cout<<" ";
    //     }
    //     for(col=1;col<=row;col++){
    //         cout<<"*";
    //     } 
    //     cout<<endl;
    // }



     int row,col,n;
    cin>>n;
    for(row=1;row<=n;row++){
        //print spaces 
        for(col=1;col<=(n-row);col++){
            cout<<" ";
        }
        //print star
        for(col=1;col<=row;col++){
            cout<<"* ";
        } 
        cout<<endl;
    }
     for(row=n;row>=1;row--){
        //print spaces 
        for(col=1;col<=(n-row);col++){
            cout<<" ";
        }
        //print star
        for(col=1;col<=row;col++){
            cout<<"* ";
        }  
        cout<<endl;
    }
}