// Program to Find Transpose of a Matrix

#include <iostream>
using namespace std;

int main() 
{
  int a[10][10], transpose[10][10], r, c;
  cout << "Enter rows and columns: ";
  cin >> r >> c;

  cout<<"\nEnter the matrix elements:\n";
  for (int i = 0; i < r; i++)
  for (int j = 0; j < c; j++) 
  {
    cout<<"Enter element a"<<i+1<<j+1<<": ";
    cin>>a[i][j];
  }

  cout<<"\n\nEntered matrix: \n";
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) 
  {
    cout<<a[i][j]<<" ";
    if (j == c - 1)
    cout<<"\n";
  }

  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j)
  {
    transpose[j][i] = a[i][j];
  }

  cout<<"\nTranspose of the matrix:\n";
  for (int i = 0; i < c; ++i)
  for (int j = 0; j < r; ++j) 
  {
    cout<<transpose[i][j]<<" ";
    if (j == r - 1)
    cout<<"\n";
  }
  return 0;
}