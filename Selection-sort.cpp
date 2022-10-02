#include<iostream>
using namespace std;
int main()
{
    int tot, arr[50], i, j, temp, big, chk, index;
    cout<<"Enter the Size of Array: ";
    cin>>tot;
    cout<<"Enter "<<tot<<" Array Elements: ";
    for(i=0; i<tot; i++)
        cin>>arr[i];
    for(i=0; i<(tot-1); i++)
    {
        chk=0;
        big = arr[i];
        for(j=(i+1); j<tot; j++)
        {
            if(big<arr[j])
            {
                big = arr[j];
                chk++;
                index = j;
            }
        }
        if(chk!=0)
        {
            temp = arr[i];
            arr[i] = big;
            arr[index] = temp;
        }
    }
    cout<<"\nSorted Array in Descending Order is:\n";
    for(i=0; i<tot; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
