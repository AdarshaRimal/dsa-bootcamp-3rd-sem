# Stack using Linked List – Complete Algorithms, Pseudo Code & C Programs

## 1. Node Structure

```c
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *top = NULL;
```

---

## 2. Push Operation (Insert)

### Algorithm
1. Create a new node `p`.
2. Assign data to `p`.
3. Set `p->next = top`.
4. Update `top = p`.

### Pseudo Code
```
PUSH(x):
    p = createNode(x)
    p.next = top
    top = p
```

### C Function
```c
void push(int x) {
    struct node *p = (struct node*) malloc(sizeof(struct node));
    p->data = x;
    p->next = top;
    top = p;
}
```

---

## 3. Pop Operation (Delete / Remove)

### Algorithm
1. If `top == NULL` → stack underflow.
2. `temp = top`
3. `top = top->next`
4. `free(temp)`

### Pseudo Code
```
POP():
    if top == NULL:
        print "Underflow"
        stop
    temp = top
    top = top.next
    free(temp)
```

### C Function
```c
void pop() {
    if(top == NULL) {
        printf("Stack Underflow\n");
        return;
    }
    struct node *temp = top;
    top = top->next;
    free(temp);
}
```

---

## 4. Peek / Top Element

### Algorithm
1. If `top == NULL` → stack is empty.
2. Else → print `top->data`.

### Pseudo Code
```
PEEK():
    if top == NULL:
        print "Stack is empty"
    else:
        print top.data
```

### C Function
```c
void peek() {
    if(top == NULL) {
        printf("Stack is empty\n");
        return;
    }
    printf("Top element: %d\n", top->data);
}
```

---

## 5. IsEmpty Check

### Algorithm
1. If `top == NULL` → return true.
2. Else → return false.

### Pseudo Code
```
ISEMPTY():
    if top == NULL:
        return true
    else:
        return false
```

### C Function
```c
int isEmpty() {
    return top == NULL;
}
```

---

## 6. Display Stack

### Algorithm
1. If `top == NULL` → print "Stack is empty".
2. `temp = top`
3. While `temp != NULL` → print `temp->data`, `temp = temp->next`.

### Pseudo Code
```
DISPLAY():
    temp = top
    while temp != NULL:
        print temp.data
        temp = temp.next
```

### C Function
```c
void display() {
    if(top == NULL) {
        printf("Stack is empty\n");
        return;
    }
    struct node *temp = top;
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

struct node *top = NULL;

void push(int x);
void pop();
void peek();
int isEmpty();
void display();

int main() {
    push(10);
    push(20);
    push(30);
    display();      // 30 -> 20 -> 10 -> NULL
    peek();         // Top element: 30
    pop();
    display();      // 20 -> 10 -> NULL
    pop();
    pop();
    pop();          // Stack Underflow
    isEmpty() ? printf("Stack is empty\n") : printf("Stack is not empty\n");
    return 0;
}

// Functions as defined above...
```