/* 3.2 Pseudocode -Circular Array implementation of Queue*/
 
    current position=i
    next position = (i+1) % N
    prev position = (i+N-1) % N   */

    int A[5]

    //Enqueue ftn
    Enqueue(x){
        if(rear+1)%N == front //Q is full
            return
        elseif IsEmpty(){
            front <- rear <- 0 //point to first element
        }
        else{
            rear <- (rear+1) % N //point to next position
        }
        A[rear] <- x
    }

    //Dequeue ftn
    Dequeue(){
        if(IsEmpty())
            return
        elseif(front == rear){ //since only one element
            front <- rear <- -1 //make them point NULL
        }
        else{
            front <- (front+1)%N /*from front one element is deleted, so pint to next element*/
        }
    }

    //Front ftn
    front(){
        return A[front]
    }

