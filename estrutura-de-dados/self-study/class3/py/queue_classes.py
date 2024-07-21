class Queue:
    def __init__(self):
        self.queue = []

    def enqueue(self, element):
        self.queue.append(element)

    def dequeue(self):
        if self.isEmpty():
            return "Queue is empty!"
        
        return self.queue.pop(0)

    def peek(self):
        if self.isEmpty():
            return "Queue is empty!"
        
        return self.queue[0]
    
    def isEmpty(self):
        return len(self.queue) == 0

    def size(self):
        return len(self.queue)
    
myQueue = Queue()

print("MyQueue: ", myQueue.queue)
myQueue.enqueue('a')
myQueue.enqueue('b')
myQueue.enqueue('c')
myQueue.enqueue('d')

print("My Queue: ", myQueue.queue)

#peek def test
print("Peek: ", myQueue.peek())
myQueue.dequeue()

print("Size: ", myQueue.size())
print("Empty: ", myQueue.isEmpty())

print("My Queue: ", myQueue.queue)
print("Size: ", myQueue.size())

#testing isEmpty def
print("Dequeue: ", myQueue.dequeue())
print("Dequeue: ", myQueue.dequeue())
print("Dequeue: ", myQueue.dequeue())
print("Dequeue: ", myQueue.dequeue())
print("Dequeue: ", myQueue.dequeue())
print("Dequeue: ", myQueue.dequeue())