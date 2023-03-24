#include <stdio.h>
#include <queue>

using namespace std;

int main()
{   
    //初始化大顶堆
    priority_queue<int, vector<int>, less<int>> maxHeap;
    
    printf("%d\n",maxHeap.size());
    printf("%d\n",maxHeap.empty());

    /* 元素入堆 */
    maxHeap.push(1);
    maxHeap.push(3);
    maxHeap.push(2);
    maxHeap.push(8);
    maxHeap.push(4);

    printf("%d\n",maxHeap.size());
    printf("%d\n",maxHeap.empty());

    printf("%d\n",maxHeap.top());
    maxHeap.pop();
    printf("%d\n",maxHeap.top());

    //输入列表并建小顶堆
    vector<int> input = {6,2,4,9,33,7};
    priority_queue<int, vector<int>, greater<int>> minHeap(input.begin(),input.end());
    int len_minHeap = minHeap.size();
    for(int i=0; i<len_minHeap; i++)
    {
        printf("%d\n",minHeap.top());
        minHeap.pop();
    }

    return 0;
}