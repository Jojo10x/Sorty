#include<iostream>
using namespace std;
int main()
{
    int arr[20], t, i, j, k, m, x;
    cout<<"Enter the Size for Array: ";
    cin>>t;
    cout<<"Enter "<<t<<" Array Elements: ";
    for(i=0; i<t; i++)
        cin>>arr[i];
    for(i=1; i<t; i++)
    {
        m = arr[i];
        if(m<arr[i-1])
        {
            for(j=0; j<=i; j++)
            {
                if(m<arr[j])
                {
                    x = j;
                    for(k=i; k>j; k--)
                        arr[k] = arr[k-1];
                    break;
                }
            }
        }
        else
            continue;
        arr[x] = m;
        cout<<"\nStep "<<i<<": ";
        for(j=0; j<t; j++)
            cout<<arr[j]<<"  ";
    }
    cout<<"\n\nThe New Array (Sorted Array):\n";
    for(i=0; i<t; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}