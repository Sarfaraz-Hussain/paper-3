#include<iostream>
using namespace std;

/* function which left rotate the array by D places */
void leftRotateByD(int *arr, int n, int d)
{
  /* storing 1st D elements in temporary array */
  int temp[d];
  for (int i = 0; i < d; i++)
  {
    temp[i] = arr[i];
  }

  /* shifting remaining elements of the array */
  int x = 0;
  for (int j = d; j < n; j++)
  {
    arr[x] = arr[j];
    x++;
  }

  /* storing back the D elements to the orignal array */
  x = 0;
  for (int k = n - d; k < n; k++)
  {
    arr[k] = temp[x];
    x++;
  }

}


int main()
{
  int n, d;

  cin >> n >> d;

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }


  /* function call to rotate the array */
  leftRotateByD(arr, n, d);

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }


  return 0;
}