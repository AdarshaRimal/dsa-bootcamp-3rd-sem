# Singly Linked List (SLL) – Complete Algorithms, Pseudo Code & C Programs

## 1. Node Structure

```c
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;
```

---

## 2. Insert at Beginning

### Algorithm
1. Create a new node `p`.
2. Assign data to `p`.
3. Set `p->next = head`.
4. Update `head = p`.

### Pseudo Code
```
INSERT_BEGIN(x):
    p = createNode(x)
    p.next = head
    head = p
```

### C Function
```c
void insert_begin(int x) {
    struct node *p = (struct node*) malloc(sizeof(struct node));
    p->data = x;
    p->next = head;
    head = p;
}
```

---

## 3. Insert at End

### Algorithm
1. Create a new node `p`.
2. If `head` is `NULL` → `head = p`, `p->next = NULL`.
3. Else → traverse to last node.
4. Set `last->next = p`, `p->next = NULL`.

### Pseudo Code
```
INSERT_END(x):
    p = createNode(x)
    if head == NULL:
        head = p
        p.next = NULL
    else:
        temp = head
        while temp.next != NULL:
            temp = temp.next
        temp.next = p
        p.next = NULL
```

### C Function
```c
void insert_end(int x) {
    struct node *p = (struct node*) malloc(sizeof(struct node));
    p->data = x;
    p->next = NULL;

    if(head == NULL) {
        head = p;
        return;
    }

    struct node *temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = p;
}
```

---

## 4. Insert at Specific Position

### Algorithm
1. Create node `p` with data.
2. Traverse to `position - 1` node.
3. Set `p->next = temp->next`.
4. Set `temp->next = p`.

### Pseudo Code
```
INSERT_POS(x, pos):
    p = createNode(x)
    if pos == 1:
        p.next = head
        head = p
    else:
        temp = head
        for i = 1 to pos-2:
            temp = temp.next
        p.next = temp.next
        temp.next = p
```

### C Function
```c
void insert_pos(int x, int pos) {
    struct node *p = (struct node*) malloc(sizeof(struct node));
    p->data = x;

    if(pos == 1) {
        p->next = head;
        head = p;
        return;
    }

    struct node *temp = head;
    for(int i=1; i<pos-1 && temp!=NULL; i++)
        temp = temp->next;

    if(temp == NULL) {
        printf("Position not found\n");
        return;
    }

    p->next = temp->next;
    temp->next = p;
}
```

---

## 5. Delete at Beginning

### Algorithm
1. If `head` is `NULL` → underflow.
2. `temp = head`
3. `head = head->next`
4. `free(temp)`

### Pseudo Code
```
DELETE_BEGIN():
    if head == NULL:
        print "Underflow"
        stop
    temp = head
    head = head.next
    free(temp)
```

### C Function
```c
void delete_begin() {
    if(head == NULL) return;
    struct node *temp = head;
    head = head->next;
    free(temp);
}
```

---

## 6. Delete at End

### Algorithm
1. If `head` is `NULL` → underflow.
2. If only one node → free `head`, `head = NULL`.
3. Else traverse to second last node.
4. Free last node, set `second_last->next = NULL`.

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
        while temp.next.next != NULL:
            temp = temp.next
        free temp.next
        temp.next = NULL
```

### C Function
```c
void delete_end() {
    if(head == NULL) return;
    if(head->next == NULL) { free(head); head=NULL; return; }
    struct node *temp = head;
    while(temp->next->next != NULL)
        temp = temp->next;
    free(temp->next);
    temp->next = NULL;
}
```

---

## 7. Delete at Specific Position

### Algorithm
1. If `head` is `NULL` → underflow.
2. If `position == 1` → delete beginning.
3. Else traverse to `position - 1` node.
4. `temp` = node to delete.
5. `temp->prev->next = temp->next`
6. `free(temp)`

### Pseudo Code
```
DELETE_POS(pos):
    if head == NULL:
        print "Underflow"
        stop
    if pos == 1:
        temp = head
        head = head.next
        free(temp)
    else:
        temp = head
        for i = 1 to pos-2:
            temp = temp.next
        del = temp.next
        temp.next = del.next
        free(del)
```

### C Function
```c
void delete_pos(int pos) {
    if(head == NULL) return;
    struct node *temp = head;

    if(pos == 1) {
        head = head->next;
        free(temp);
        return;
    }

    for(int i=1; i<pos-1 && temp!=NULL; i++)
        temp = temp->next;

    if(temp == NULL || temp->next == NULL) return;

    struct node *del = temp->next;
    temp->next = del->next;
    free(del);
}
```

---

## 8. Traverse / Display

### Algorithm
1. Start from `head`.
2. While `node != NULL` → print data.
3. Move to next node.

### Pseudo Code
```
TRAVERSE():
    temp = head
    while temp != NULL:
        print temp.data
        temp = temp.next
```

### C Function
```c
void display() {
    struct node *temp = head;
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
```

---

## 9. Search Element

### Algorithm
1. Start from `head`.
2. Compare node data with key.
3. If found → print position.
4. Else move to next node.
5. If end reached → element not found.

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

## 10. Full Demo Program

```c
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert_begin(int x);
void insert_end(int x);
void insert_pos(int x, int pos);
void delete_begin();
void delete_end();
void delete_pos(int pos);
void display();
void search(int x);

int main() {
    insert_begin(10);
    insert_end(20);
    insert_pos(15, 2);
    display();      // 10 -> 15 -> 20 -> NULL
    delete_begin();
    display();      // 15 -> 20 -> NULL
    delete_end();
    display();      // 15 -> NULL
    search(15);     // Found at position 1
    search(100);    // Not found
    return 0;
}

// Functions as defined above...
```