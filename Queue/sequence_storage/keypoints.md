顺序循环队列
    队满的条件：(rear+1) % QueueSize == front
    队列长度的计算公式：(rear-front+QueueSize) % QueueSize
gcc -o main init_queue.c sq_empty.c EnQueue.c DeQueue.c traverse_queue.c sq_length.c GetHead.c clear_sq.c main.c