Problem Statement
To develop a bus stop navigation system using a Circular Linked List data structure. The system stores bus stop names as nodes and connects the last bus stop to the first bus stop, forming a circular structure. It allows users to navigate through bus stops in both a circular route and return to the starting stop after reaching the last stop.

2. Introduction
A Circular Linked List is a linear data structure in which the last node points back to the first node, forming a circle. Unlike a normal linked list, it does not contain a NULL pointer at the end.
In the Bus Stop Navigation System, each node represents a bus stop. The user can move from one bus stop to the next in a continuous circular route. After reaching the last bus stop, navigation starts again from the first bus stop.
This system demonstrates the practical application of circular linked lists in transportation and navigation systems.

3. Objectives
To understand the concept of a Circular Linked List.
To store bus stop names dynamically.
To navigate from one bus stop to the next.
To connect the last bus stop to the first bus stop.
To display all bus stops in the route.
To demonstrate the practical application of linked lists in transportation systems.

4. Algorithm (Step-by-Step)
Step 1: Start the program.

Step 2: Create a circular linked list node containing:
Bus stop name
Pointer to the next node

Step 3: Insert the bus stop names into the linked list.

Step 4: Connect each bus stop node to the next node.

Step 5: Connect the last bus stop to the first bus stop to form a circular linked list.

Step 6: Display all bus stops in the route.

Step 7: Set the current bus stop to the first node.

Step 8: Move to the next bus stop using the next pointer.

Step 9: If the current node reaches the last bus stop, continue navigation from the first bus stop.

Step 10: Repeat the navigation process according to the user's requirement.

Step 11: Stop the program.
5. Sample Input

Enter the number of bus stops: 5

Enter the bus stop names:
1. Rahuri
2. Shrirampur
3. Sangamner
4. Ahmednagar
5. Nashik
6. Sample Output
Bus Stop Navigation System

Circular Bus Route:
Rahuri -> Shrirampur -> Sangamner
-> Ahmednagar -> Nashik -> Rahuri

Current Bus Stop: Rahuri
Next Bus Stop: Shrirampur

Current Bus Stop: Shrirampur
Next Bus Stop: Sangamner

Current Bus Stop: Sangamner
Next Bus Stop: Ahmednagar

Current Bus Stop: Ahmednagar
Next Bus Stop: Nashik

Current Bus Stop: Nashik
Next Bus Stop: Rahuri

Navigation continues in a circular route.

7. Applications
Public Transportation: Navigating bus stops along circular bus routes.

City Bus Systems: Managing buses that operate on fixed circular routes.

Tourist Bus Services: Navigating stops on sightseeing routes.

Campus Transportation: Managing shuttle buses within colleges and universities.

Metro Feeder Services: Organizing stops along circular feeder routes.

Route Management Systems: Representing cyclic transportation routes.

8. Advantages

The last bus stop is directly connected to the first bus stop.

Navigation can continue without restarting the list.

Insertion and deletion of nodes can be performed dynamically.

It is suitable for circular bus routes.
Memory is allocated dynamically as required.

Traversal can continue repeatedly through the route.

9. Disadvantages

Incorrect pointer handling can cause infinite loops.

Traversal requires careful termination conditions.

Searching for a particular bus stop may require traversing the list.

Each node requires additional memory for a pointer.

A singly circular linked list supports forward navigation only; backward navigation requires a doubly circular linked list.

The system does not automatically provide real-time bus locations or arrival times.

Conclusion
The Bus Stop Navigation Using Circular Linked List project demonstrates how a circular linked list can represent a continuous bus route. Each node represents a bus stop, and the last node connects back to the first node. This makes the data structure useful for managing circular transportation routes and understanding dynamic memory allocation and linked-list traversal.