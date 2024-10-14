#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n+1]; 
    for(int i=0; i<n+1; i++){
        arr[i] = 1;
    }
    arr[0] = arr[1] = 0; 
    
    for(int i=0; i<n+1; i++){
        if(arr[i]==1){
            
            for(int j=2; j < n/i + 1; j++){
                arr[i*j]=0; 
            }
        }
    }
    
    for(int i=0; i<n+1; i++){
        if(arr[i]==1){
            cout << i << " ";
        }
    }
    cout << "\n";
    
    cout << "Cac cap SNT thoa man yeu cau 1: ";
    for(int i=2; i<n+1; i++){
        if (arr[i]==1){
            if(arr[i+2]==1){
                cout << i << " " << i+2 << "\n";
            }
        }
    }
    cout << "\n";

    int x;
    cout << "Nhap so can tim: ";
    cin >> x;
    if(arr[x]==1){
        cout << x << " là SNT";
    } else {
        cout << x << " khác SNT";
    }
    
    return 0;
}
