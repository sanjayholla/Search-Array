#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int array[50],size,temp,element,i,mid;
    cout<<"Enter the number of elements:";
    cin>>size;
    
    cout<<"Enter the elements:";
    for(i=0;i<size;i++){
            cin>>array[i];
    }        
    
    for(i=0;i<size;i++){                                         //bubble sort
       for(int j=0;j<size-i-1;j++){
          if(array[j]>array[j+1]){
            temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
            }
        }
    }
    cout<<"The sorted array is:";
    for(i=0;i<size;i++)
      cout<<array[i]<<" ";
      char ch='y';

    cout<<"Enter the element to search for:";          
    cin>>element;
    
    int beg=0,last=size-1;
    

    int flag=0;
    while(beg<=last){                                                                    //binary search
      mid=(beg+last)/2;
      if(array[mid]==element)
         {
         flag=1;
         break;
         }
      else if(array[mid]<element)
         beg=mid+1;
      else if(array[mid]>element)
         last=mid-1;
     }
     if(flag==0)
       cout<<"Element not found";
     else
       cout<<"Element found!";
    getche();            
    return 0;
}
