class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def insert(head, data):
    if head is None:
        head = Node(data)
    else:
        curr = head
        while curr.next is not None:
            curr = curr.next
        curr.next = Node(data)
    return head

def display(head):
    start = head
    while start is not None:
        print(start.data, end=" ")
        start = start.next

if __name__ == "__main__":
    head = None
    N = int(input())

    for _ in range(N):
        ele = int(input())
        head = insert(head, ele)

    display(head)
