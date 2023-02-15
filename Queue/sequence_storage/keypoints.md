循环队列的顺序存储结构<br/>
&emsp;队满的条件：(rear+1) % QueueSize == front <br/>
&emsp;队列长度的计算公式：(rear-front+QueueSize) % QueueSize <br/>
gcc -o main init_queue.c sq_empty.c EnQueue.c DeQueue.c traverse_queue.c sq_length.c GetHead.c clear_sq.c main.c