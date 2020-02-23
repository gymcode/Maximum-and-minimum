#include <iostream>
#include <stdio.h>
#include <stdlib.h>
void MaxMin(int [], int , int, int*, int*);

using namespace std;

int main(int argc, char **argv)
{
    int Arr[500000],Num,i; int
    Max=0,Min=0;
    cout << "Enter the size of the array" << endl;
    cin >> Num;
    cout << "Enter the elements: " << endl;
        for(i=0;i<Num;i++) scanf("%d",&Arr[i]); MaxMin(Arr,
        0, Num-1, &Max, &Min);
        cout << "The Maximum Element = " << Max << endl;
        cout << "The Minimum Element " << Min << endl;
        return 0;
}
//void method
//this is to find the max and min of the element of the array
void MaxMin(int a[],int low,int high, int *max, int *min)
{ int mid,max1,max2,min1,min2;
    if(high-low == 1)
    { if(a[low] > a[high])
        {
            *max = a[low];
            *min = a[high];
        } else
        {
            *max = a[high];
            *min = a[low];
        }
        }
        else if(low == high)
        {
            *min = *max = a[low];
        }
        else if(low<high)
            { mid=(low+high)/2;
                MaxMin(a,low,mid,&max1,&min1);
                MaxMin(a,mid+1,high,&max2,&min2); if(max1 > max2)
                *max = max1; else
                *max = max2;
                if(min1 < min2)
                    *min = min1; else
                    *min = min2;
            }
}
