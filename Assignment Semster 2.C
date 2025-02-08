ASSIGNMENT Semster 2
Question 1
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;
int main() {
    int n, i, count = 0;
    cout << "Enter an integer = ";
    cin >> n;
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            count++;
            break;
        }
    }
    if (count == 0 && n > 1) {
        cout << n << " is a Prime number.";
        int nextprime = n + 1;
        while (true) {
            int prime = 1;
            for (i = 2; i <= sqrt(nextprime); i++) {
                if (nextprime % i == 0) {
                    prime = 0;
                    break;
                }
            }
            if (prime == 1) {
                cout << endl << "Next prime number is = " << nextprime;
                break;
            }
            nextprime++;
        }
    } else {
        cout << n << " is a Composite number." << endl << "Its factors are - ";
        for (i = 1; i <= n; i++) { 
            if (n % i == 0) {
                cout << i << " ";
            }
        }
    }

    return 0;
}

Question 2
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    cout<<"Enter size ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter numbers: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"The numbers in reverse order are: ";
    for(int i=n; i>=0; i--){
        cout<<arr[i]<<" ";
    }
    int max1 = arr[0], max2 = arr[0], min1 = arr[0], min2 = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max1){
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i]>max2 && arr[i]!=max1){
            max2 = arr[i];
        }
        if(arr[i]<min1){
            min2 = min1;
            min1 = arr[i];
        }
        else if(arr[i]<min2 && arr[i]!=min1){
            min2 = arr[i];
        }
    }
 return 0;
}
Question 3
#include<iostream>
#include<cmath>
#include<string>
#include<iomanip>
using namespace std;
int main(){
    string str;
    cout<<"Enter a word = ";
    getline(cin,str);
    int len = str.size();
    bool pal = true;
    int i;
    for (i=0;i<len/2;i++){
        if ((str[i])!=(str[len-i-1])){
            pal=false;
            break;
        }
    }
    pal?cout<<"word is a palindrome":cout<<"Word is not a palindrome";
    for(int i=0; i<str.length(); i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            str[i]='$';
        }
    }
    cout<<endl<<"String after replacing characters by $ = "<<str;
    return 0;
}return 0;
}
Question 4
#include <iostream>

using namespace std;

int main(){
    //  Print a spiral pattern of numbers for a given n*n matrix
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n][n];
    int num = 1;
    int row = 0, col = 0;
    int last_row = n-1, last_col = n-1;
    while(row<=last_row && col<=last_col){
        for(int i=col; i<=last_col; i++){
            arr[row][i] = num++;
        }
        row++;
        for(int i=row; i<=last_row; i++){
            arr[i][last_col] = num++;
        }
        last_col--;
        for(int i=last_col; i>=col; i--){
            arr[last_row][i] = num++;
        }
        last_row--;
        for(int i=last_row; i>=row; i--){
            arr[i][col] = num++;
        }
        col++;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
Question 5
#include <iostream>
using namespace std;
int main() 
{
    int m[3][3];
    cout << "enter elements" << endl;
    for (int i=0; i<3;i++) 
    {
        for(int j=0;j<3;j++) 
        {
            cin>>m[i][j];
        }
    }

    cout << "matrix: "<<endl;
    for (int i=0;i<3;i++) 
    {
        for (int j =0;j <3;j++) 
        {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    cout << "after rotation: "<< endl;
    for (int i=0;i<3; i++) 
    {
        for (int j=3-1;j>=0;j--) 
        {
            cout << m[j][i] << " ";
        }
        cout<<endl;
    }
    return 0;
}



