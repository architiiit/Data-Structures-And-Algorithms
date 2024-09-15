//Heaps class 1
#include<iostream>
using namespace std;

class Heap{
    public:
    int *arr;
    int capacity;
    int size;

    Heap(int capacity){
        this->arr=new int[capacity];
        this->capacity=capacity;
        // size=current number of elements in heap
        this->size=0;
    }
    void insert(int val){
        if(size==capacity)
        {
            cout<<"Heap Overflow "<<endl;
        }
        //size increase kar jayega
        size++;
        int index=size;
        arr[index]=val;

        // take the val to its correct position
        while(index>1){
            int parentIndex=index/2;
            if(arr[index]>arr[parentIndex]){
                //max heap
                swap(arr[index],arr[parentIndex]);
                index=parentIndex;
            }else{
                break;
            }
        }
    }
    void printHeap(){
        //1 based indexing
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<" "; 
        }
    }

    int deleteFromHeap(){
        int answer=arr[1];
        //replacement
        arr[1]=arr[size];
        //last element ko delete uski original position se hatao
        size--;

        int index=1;//root
        while(index<size){
            int leftIndex=2*index;
            int rightIndex=2*index+1;

            //findout karna hai sabse bada kon
            int largestKaIndex=index;
            //check left child
            if(leftIndex<=size && arr[largestKaIndex]<arr[leftIndex])
            {
                largestKaIndex=leftIndex;
            }
            if(rightIndex<=size && arr[largestKaIndex]<arr[rightIndex])
            {
                largestKaIndex=rightIndex;
            }

            //no change
            if(index==largestKaIndex){
                break;
            }
            else{
                swap(arr[index],arr[largestKaIndex]);
                index=largestKaIndex;
            }
        }
        return answer;
    }
};

void heapify(int* arr,int n,int index){
    int leftIndex=2*index;
    int rightIndex=2*index+1;
    int largestKaIndex=index;

    //teeno se max lao
    if(leftIndex<=n && arr[leftIndex]>arr[largestKaIndex])
    {
        largestKaIndex=leftIndex;
    }
    if(rightIndex<=n && arr[rightIndex]>arr[largestKaIndex])
    {
        largestKaIndex=rightIndex;
    }

    //after these 2 conditions largestindex will be pointing towards largest element among 3
    if(index!=largestKaIndex)
    {
        swap(arr[index],arr[largestKaIndex]);
        //ab recursion sambhaal lega
        index=largestKaIndex;
        heapify(arr,n,index);
    }
}
//building a heap from an array TC::O(n)
void buildHeap(int arr[],int n)
{
    //take nodes before leaf nodes
    for(int index=n/2;index>0;index--)
    {
        heapify(arr,n,index);
    }
}


void heapSort(int arr[],int n){
    while(n!=1){
        swap(arr[1],arr[n]);//1 based indexing
        n--;//size decrement
        heapify(arr,n,1);

    }
}
int main(){

    // Heap h(20);
    // //insertion
    // h.insert(10);
    // h.insert(20);
    // h.insert(5);
    // h.insert(11);
    // h.insert(6);

    // cout<<"Printing the content of heap "<<endl;
    // h.printHeap();
    // cout<<endl;
    
    // int ans=h.deleteFromHeap();
    // cout<<"Answer:"<<ans<<endl;
    // h.printHeap();


    int arr[]={-1,5,10,15,20,25,12};//we dont have to consider element as we are not considering first element
    int size=6;
    buildHeap(arr,size);
    cout<<"Printing heap"<<endl;
    for(int i=1;i<=6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    heapSort(arr,size);

     cout<<"Printing heapSort"<<endl;
    for(int i=1;i<=6;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
