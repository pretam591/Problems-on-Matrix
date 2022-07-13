// Program to Multiply Two Matrices Using Multi-dimensional

#include <iostream>
using namespace std;

int main() 
{
    int m,n,p,q;
    int arr1[10][10],arr2[10][10],res[10][10];
    cout << "\nEnter the number of rows & columns for array1:- ";
    cin >> m >> n;
    cout << "\nEnter the number of rows & columns for array2:- ";
    cin >> p >> q;
    if(n == p)
    {
        cout << "\nThe matrices can be multiplied";
        cout << "\nEnter the elements of 1st array:-\n";
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                cin >> arr1[i][j];
        cout << "\nEnter the elements of 2nd array:-\n";
        for(int i=0;i<p;i++)
            for(int j=0;j<q;j++)
                cin >> arr2[i][j];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                res[i][j]=0;
                for(int k=0;k<n;k++)
                {
                    res[i][j]+=arr1[i][k]*arr2[k][j];
                }
            }
        }
        cout << "\nThe resultant matrix is:-\n";
        for(int i=0;i<p;i++)
        {
            for(int j=0;j<q;j++)
            {
                cout << res[i][j] << " ";
            }
            cout<<"\n";
        }
    return 0;
    }
    else
        cout << "\nMatrices can't be multiplied!!!" << endl <<"(Make column of 1st matrix and row of 2nd matrix equal)";
}