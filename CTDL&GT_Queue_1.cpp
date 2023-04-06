// nguon https://blog.luyencode.net/hang-doi-queue/
// cai dat
#include <iostream>
#include <cstdio>
 
using namespace std;
 
void Enqueue(char queue[], char element, int& rear, int arraySize) {
    if(rear == arraySize)            // Queue is full
        printf("OverFlow\n");
    else {
        queue[rear] = element;    // Add the element to the back
        rear++;
    }
}
 
 
void Dequeue(char queue[], int& front, int rear) {
    if(front == rear)            // Queue is empty
        printf("UnderFlow\n");
    else {
        queue[front] = 0;        // Delete the front element
        front++;
    }
}
 
char Front(char queue[], int front) {
    return queue[front];
}
 
