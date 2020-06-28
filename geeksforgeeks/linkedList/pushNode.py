class Node:
    def __init__(self,data):
        self.data = data
        self.next = None
        
class LinkList:
    def __init__(self):
        self.head = None

class PushNode:
    def push(self, new_data):
        new_node = Node(new_data)
        new_node.next = self.head
        
        self.head = new_node