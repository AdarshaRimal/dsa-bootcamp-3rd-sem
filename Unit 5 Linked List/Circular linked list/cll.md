# Circular Linked List (CLL) – Complete Algorithms, Pseudo Code & C Programs

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
3. If `head == NULL` → `p->next = p`, `head = p`, return.
4. Else → traverse to last node.
5. Set `p->next = head`, `last->next = p`.
6. Update `head = p`.

### Pseudo Code
```
INSERT_BEGIN(x):
    p = createNode(x)
    if head == NULL:
        p.next = p
        head = p
    else:
        temp = head
        while temp.next != head:
            temp = temp.next
        p.next = head
        temp.next = p
        head = p
```

### C Function
```c
void insert_begin(int x) {
    struct node *p = (struct node*) malloc(sizeof(struct node));
    p->data = x;

    if(head == NULL) {
        p->next = p;
        head = p;
        return;
    }

    struct node *temp = head;
    while(temp->next != head)
        temp = temp->next;

    p->next = head;
    temp->next = p;
    head = p;
}
```

---

## 3. Insert at End

### Algorithm
1. Create a new node `p`.
2. Assign data to `p`.
3. If `head == NULL` → `p->next = p`, `head = p`, return.
4. Else → traverse to last node.
5. Set `last->next = p`, `p->next = head`.

### Pseudo Code
```
INSERT_END(x):
    p = createNode(x)
    if head == NULL:
        p.next = p
        head = p
    else:
        temp = head
        while temp.next != head:
            temp = temp.next
        temp.next = p
        p.next = head
```

### C Function
```c
void insert_end(int x) {
    struct node *p = (struct node*) malloc(sizeof(struct node));
    p->data = x;

    if(head == NULL) {
        p->next = p;
        head = p;
        return;
    }

    struct node *temp = head;
    while(temp->next != head)
        temp = temp->next;

    temp->next = p;
    p->next = head;
}
```

---

## 4. Delete at Beginning

### Algorithm
1. If `head == NULL` → underflow.
2. If `head->next == head` → free `head`, `head = NULL`.
3. Else → traverse to last node.
4. `last->next = head->next`
5. `temp = head`, `head = head->next`, `free(temp)`

### Pseudo Code
```
DELETE_BEGIN():
    if head == NULL:
        print "Underflow"
        stop
    if head.next == head:
        free(head)
        head = NULL
    else:
        temp = head
        last = head
        while last.next != head:
            last = last.next
        last.next = head.next
        head = head.next
        free(temp)
```

### C Function
```c
void delete_begin() {
    if(head == NULL) return;

    if(head->next == head) {
        free(head);
        head = NULL;
        return;
    }

    struct node *last = head;
    while(last->next != head)
        last = last->next;

    struct node *temp = head;
    head = head->next;
    last->next = head;
    free(temp);
}
```

---

## 5. Delete at End

### Algorithm
1. If `head == NULL` → underflow.
2. If `head->next == head` → free `head`, `head = NULL`.
3. Else → traverse to second last node.
4. `second_last->next = head`, `free(last)`

### Pseudo Code
```
DELETE_END():
    if head == NULL:
        print "Underflow"
        stop
    if head.next == head:
        free(head)
        head = NULL
    else:
        temp = head
        while temp.next.next != head:
            temp = temp.next
        free(temp.next)
        temp.next = head
```

### C Function
```c
void delete_end() {
    if(head == NULL) return;

    if(head->next == head) {
        free(head);
        head = NULL;
        return;
    }

    struct node *temp = head;
    while(temp->next->next != head)
        temp = temp->next;

    free(temp->next);
    temp->next = head;
}
```

---

## 6. Traverse

### Algorithm
1. If `head == NULL` → print "Empty".
2. Start from `head`, do:
   - Print `node->data`
   - Move `node = node->next`
3. Repeat until `node == head` again.

### Pseudo Code
```
TRAVERSE():
    if head == NULL:
        print "Empty"
        stop
    temp = head
    do:
        print temp.data
        temp = temp.next
    while temp != head
```

### C Function
```c
void display() {
    if(head == NULL) { printf("List is empty\n"); return; }
    struct node *temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while(temp != head);
    printf("(head)\n");
}
```

---

## 7. Search Element

### Algorithm
1. If `head == NULL` → empty list.
2. Start from `head`, `pos = 1`.
3. Compare `node->data` with key.
4. If found → print position, stop.
5. Move `node = node->next`, `pos++`.
6. Repeat until `node == head` → not found.

### Pseudo Code
```
SEARCH(x):
    if head == NULL:
        print "Empty List"
        stop
    temp = head
    pos = 1
    do:
        if temp.data == x:
            print "Found at position", pos
            stop
        temp = temp.next
        pos = pos + 1
    while temp != head
    print "Not found"
```

### C Function
```c
void search(int x) {
    if(head == NULL) { printf("List is empty\n"); return; }

    struct node *temp = head;
    int pos = 1;
    do {
        if(temp->data == x) {
            printf("Found at position %d\n", pos);
            return;
        }
        temp = temp->next;
        pos++;
    } while(temp != head);
    printf("Element not found\n");
}
```

---

## 8. Full Demo Program

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
void delete_begin();
void delete_end();
void display();
void search(int x);

int main() {
    insert_begin(10);
    insert_end(20);
    insert_begin(5);
    display();      // 5 -> 10 -> 20 -> (head)
    delete_begin();
    display();      // 10 -> 20 -> (head)
    delete_end();
    display();      // 10 -> (head)
    search(10);     // Found at position 1
    search(100);    // Not found
    return 0;
}

// Functions as defined above...
```