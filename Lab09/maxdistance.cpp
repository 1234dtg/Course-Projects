#include <iostream>

int main()
{
   int n;
   std::cin >> n;
   int arr[n];
   for(int i=0;i<n;i++)
       std::cin >> arr[i];
   int firstPos[n], lastPos[n];
   for(int i=0;i<n;i++)
   {
       firstPos[i]=-1;
       lastPos[i]=-1;
   }
  
   /*if element is visited first time then store index
   in firsPos array, and store last index in lastPos array*/
   for(int i=0;i<n;i++)
   {
       int num=arr[i];
       if(firstPos[num]==-1)  
           firstPos[num]=i;  
       lastPos[num]=i;    
   }
 
   /*To find maximum distance*/
   int maxDistance=0;
   for(int i=0;i<n;i++)
   {
       if(firstPos[i]!=-1)
       {
           int currDistance=lastPos[i]-firstPos[i];
           maxDistance=std::max(maxDistance, currDistance);
       }
   }
   std::cout << maxDistance << std::endl;
}
