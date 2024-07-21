queue = []

# Enqueue
queue.append('a')
queue.append('b')
queue.append('c')
print('Queue: ', queue)

# Dequeue
element = queue.pop(0)
print('Dequeue: ', element)

#Peek
frontElement = queue[0]
print('Peek : ', frontElement)

#isEmpty
isEmpty = not bool(queue) # the bool returns true if there are elements in the array or false if the opposite occurs. The not operator works to change and show for us if the queue isEmpty.
print("Is empty: ", isEmpty)

#size
print("Size: ", len(queue))