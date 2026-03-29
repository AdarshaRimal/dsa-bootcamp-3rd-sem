# Queue using Linked List – Complete Algorithms, Pseudo Code & C Programs

## 1. Node Structure

```c
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;
```

---

## 2. Enqueue (Insert at Rear)

### Algorithm
1. Create a new node `p`.
2. Assign data to `p`, set `p->next = NULL`.
3. If `front == NULL` → `front = rear = p`, return.
4. Else → `rear->next = p`, `rear = p`.

### Pseudo Code
```
ENQUEUE(x):
    p = createNode(x)
    p.next = NULL
    if front == NULL:
        front = rear = p
    else:
        rear.next = p
        rear = p
```

### C Function
```c
void enqueue(int x) {
    struct node *p = (struct node*) malloc(sizeof(struct node));
    p->data = x;
    p->next = NULL;

    if(front == NULL) {
        front = rear = p;
        return;
    }

    rear->next = p;
    rear = p;
}
```

---

## 3. Dequeue (Delete from Front)

### Algorithm
1. If `front == NULL` → underflow.
2. `temp = front`
3. `front = front->next`
4. If `front == NULL` → `rear = NULL`
5. `free(temp)`

### Pseudo Code
```
DEQUEUE():
    if front == NULL:
        print "Underflow"
        stop
    temp = front
    front = front.next
    if front == NULL:
        rear = NULL
    free(temp)
```

### C Function
```c
void dequeue() {
    if(front == NULL) {
        printf("Queue Underflow\n");
        return;
    }

    struct node *temp = front;
    front = front->next;

    if(front == NULL)
        rear = NULL;

    free(temp);
}
```

---

## 4. Peek / Front Element

### Algorithm
1. If `front == NULL` → queue is empty.
2. Else → print `front->data`.

### Pseudo Code
```
PEEK():
    if front == NULL:
        print "Queue is empty"
    else:
        print front.data
```

### C Function
```c
void peek() {
    if(front == NULL) {
        printf("Queue is empty\n");
        return;
    }
    printf("Front element: %d\n", front->data);
}
```

---

## 5. IsEmpty Check

### Algorithm
1. If `front == NULL` → return true.
2. Else → return false.

### Pseudo Code
```
ISEMPTY():
    if front == NULL:
        return true
    else:
        return false
```

### C Function
```c
int isEmpty() {
    return front == NULL;
}
```

---

## 6. Display Queue

### Algorithm
1. If `front == NULL` → print "Queue is empty".
2. `temp = front`
3. While `temp != NULL` → print `temp->data`, `temp = temp->next`.

### Pseudo Code
```
DISPLAY():
    temp = front
    while temp != NULL:
        print temp.data
        temp = temp.next
```

### C Function
```c
void display() {
    if(front == NULL) {
        printf("Queue is empty\n");
        return;
    }
    struct node *temp = front;
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
```

---

## 7. Full Demo Program

```c
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue(int x);
void dequeue();
void peek();
int isEmpty();
void display();

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();      // 10 -> 20 -> 30 -> NULL
    peek();         // Front element: 10
    dequeue();
    display();      // 20 -> 30 -> NULL
    dequeue();
    dequeue();
    dequeue();      // Queue Underflow
    isEmpty() ? printf("Queue is empty\n") : printf("Queue is not empty\n");
    return 0;
}

// Functions as defined above...
```