#include<iostream>
 using namespace std ;

      int search(int nums[],int size, int target) {
        //int n = nums.size() ;
        int s = 0 ;
        int e = size - 1 ;
        int mid = s + (e - s)/2 ;

        while(s<=e){
            if(target==nums[mid])
            {
                return mid ;
            }
            else if(target>nums[mid])
            {
                s = mid + 1 ;
            }
            else
            {
                e = mid - 1 ;
            }

            int mid = s + (e - s)/2 ;
        }
        return -1 ;
    }

 int main()
 {
    int nums[10];
    int size ;
    cout<<"enter size of array" <<endl ;
    cin>>size ;
    cout<<endl ;
    cout<<"Enter array elemnts :"<<endl ;
    for(int i=0;i<size;i++)
    {
        cin>>nums[i];
    }
    int target ;
    cout<<"Enter target :"<<endl ;
    cin>>target ;
    cout<<endl ;

    int n = search(nums,size,target);

    cout<<n<<endl ;
    
    return 0 ;
 }