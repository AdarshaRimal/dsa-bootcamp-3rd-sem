# Doubly Linked List (DLL) – Complete Algorithms, Pseudo Code & C Programs

## 1. Node Structure

```c
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;
```

---

## 2. Insert at Beginning

### Algorithm
1. Create a new node `p`.
2. Assign data to `p`.
3. Set `p->prev = NULL`.
4. Set `p->next = head`.
5. If `head != NULL` → `head->prev = p`.
6. Update `head = p`.

### Pseudo Code
```
INSERT_BEGIN(x):
    p = createNode(x)
    p.prev = NULL
    p.next = head
    if head != NULL:
        head.prev = p
    head = p
```

### C Function
```c
void insert_begin(int x) {
    struct node *p = (struct node*)malloc(sizeof(struct node));
    p->data = x;
    p->prev = NULL;
    p->next = head;

    if(head != NULL)
        head->prev = p;

    head = p;
}
```

---

## 3. Insert at End

### Algorithm
1. Create a new node `p`.
2. Set `p->next = NULL`.
3. If `head == NULL` → `p->prev = NULL`, `head = p`, return.
4. Else → traverse to last node.
5. Set `last->next = p`, `p->prev = last`.

### Pseudo Code
```
INSERT_END(x):
    p = createNode(x)
    p.next = NULL
    if head == NULL:
        p.prev = NULL
        head = p
    else:
        temp = head
        while temp.next != NULL:
            temp = temp.next
        temp.next = p
        p.prev = temp
```

### C Function
```c
void insert_end(int x) {
    struct node *p = (struct node*)malloc(sizeof(struct node));
    p->data = x;
    p->next = NULL;

    if(head == NULL) {
        p->prev = NULL;
        head = p;
        return;
    }

    struct node *temp = head;
    while(temp->next != NULL)
        temp = temp->next;

    temp->next = p;
    p->prev = temp;
}
```

---

## 4. Delete at Beginning

### Algorithm
1. If `head == NULL` → underflow.
2. `temp = head`
3. `head = head->next`
4. If `head != NULL` → `head->prev = NULL`
5. `free(temp)`

### Pseudo Code
```
DELETE_BEGIN():
    if head == NULL:
        print "Underflow"
        stop
    temp = head
    head = head.next
    if head != NULL:
        head.prev = NULL
    free(temp)
```

### C Function
```c
void delete_begin() {
    if(head == NULL) return;
    struct node *temp = head;
    head = head->next;
    if(head != NULL)
        head->prev = NULL;
    free(temp);
}
```

---

## 5. Delete at End

### Algorithm
1. If `head == NULL` → underflow.
2. If `head->next == NULL` → free `head`, `head = NULL`.
3. Else → traverse to last node.
4. `last->prev->next = NULL`
5. `free(last)`

### Pseudo Code
```
DELETE_END():
    if head == NULL:
        print "Underflow"
        stop
    if head.next == NULL:
        free head
        head = NULL
    else:
        temp = head
        while temp.next != NULL:
            temp = temp.next
        temp.prev.next = NULL
        free(temp)
```

### C Function
```c
void delete_end() {
    if(head == NULL) return;
    if(head->next == NULL) { free(head); head = NULL; return; }

    struct node *temp = head;
    while(temp->next != NULL)
        temp = temp->next;

    temp->prev->next = NULL;
    free(temp);
}
```

---

## 6. Traverse Forward

### Algorithm
1. Start from `head`.
2. While `node != NULL` → print `node->data`.
3. Move to next node.

### Pseudo Code
```
TRAVERSE_FORWARD():
    temp = head
    while temp != NULL:
        print temp.data
        temp = temp.next
```

### C Function
```c
void display_forward() {
    struct node *temp = head;
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
```

---

## 7. Traverse Backward

### Algorithm
1. Start from `head` → traverse to last node.
2. While `node != NULL` → print `node->data`.
3. Move to prev node.

### Pseudo Code
```
TRAVERSE_BACKWARD():
    temp = head
    while temp.next != NULL:
        temp = temp.next
    while temp != NULL:
        print temp.data
        temp = temp.prev
```

### C Function
```c
void display_backward() {
    struct node *temp = head;
    if(temp == NULL) return;

    while(temp->next != NULL)
        temp = temp->next;

    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
}
```

---

## 8. Search Element

### Algorithm
1. Start from `head`.
2. Compare `node->data` with key.
3. If found → print position.
4. Else move to next node.
5. If end reached → not found.

### Pseudo Code
```
SEARCH(x):
    temp = head
    pos = 1
    while temp != NULL:
        if temp.data == x:
            print "Found at position", pos
            stop
        temp = temp.next
        pos = pos + 1
    print "Not found"
```

### C Function
```c
void search(int x) {
    struct node *temp = head;
    int pos = 1;
    while(temp != NULL) {
        if(temp->data == x) {
            printf("Found at position %d\n", pos);
            return;
        }
        temp = temp->next;
        pos++;
    }
    printf("Element not found\n");
}
```

---

## 9. Full Demo Program

```c
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void insert_begin(int x);
void insert_end(int x);
void delete_begin();
void delete_end();
void display_forward();
void display_backward();
void search(int x);

int main() {
    insert_begin(10);
    insert_end(20);
    insert_begin(5);
    display_forward();     // 5 -> 10 -> 20 -> NULL
    display_backward();    // 20 -> 10 -> 5 -> NULL
    delete_begin();
    display_forward();     // 10 -> 20 -> NULL
    delete_end();
    display_forward();     // 10 -> NULL
    search(10);            // Found at position 1
    search(100);           // Not found
    return 0;
}

// Functions as defined above...
```