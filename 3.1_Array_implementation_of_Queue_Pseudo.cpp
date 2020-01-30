/* 3.1 Pseudocode- Array implementation of Queue */

int A[10]  //create an array
front <- -1 //empty array points NULL
rear <- -1   //empty array

IsEmpty(){
    if((front==-1) && (rear==-1))
        return true
    else return false
}

IsFull(){
    if(rear == (sizeof(A)-1))
        print "Queue is full"
        return
}


Enqueue(x){
    if(IsFull())
        return
    elseif IsEmpty(){
        front <- rear <- 0  //points to first element
    }
    else{
        rear <- rear+1
    }
    A[rear] <- x
}

Dequeue(){
    if(IsEmpty())
        return
    elseif(front == rear){
        front <- rear <- -1
    }
    else{
        front <- front+1
    }
}


