# ANALYSIS-AND-DESIGN-OF-ALGORITHMS
1.Practical 1 :- Selection sort analysis
In this task, we're using a method called selection sort. Here's how it works: We go through our list of numbers, and each time, we search for the smallest number among the ones we haven't sorted yet. Once we find it, we swap it with the first unsorted number. We continue this process until the entire list is sorted. So basically, we're repeatedly picking out the smallest number from the unsorted part and moving it to its correct position at the beginning.

<img width="700" alt="selectiongraph" src="https://github.com/deepak35an/ANALYSIS-AND-DESIGN-OF-ALGORITHMS/assets/146827468/9e493297-ac0f-4347-8f96-8d8bc59da376">


TIME COMPLEXITY : The time complexity of the selection sort algorithm is O(n^2) in the worst case. This is because, for each element in the array, it performs a linear search through the remaining unsorted elements to find the minimum value and then swaps it. The nested loops contribute to the quadratic time complexity


2.PRACTICAL 2 :- SUM OF n NUMBERS

ALGORITHM : The method employed here involves a simple addition of the values stored in an array. The function sum_numbers traverses through each element of the array, adding them up to compute the total sum.

TIME COMPLEXITY: The time complexity of the summing operation is O(n), where 'n' is the number of elements in the array. The loop in the sum_numbers function iterates through each element once, resulting in linear time complexity

3.PRACTICAL 3 : TOWER OF HANOI

ALGORITHM: The Tower of Hanoi algorithm is a classic example of a recursive problem, employing the divide-and-conquer strategy. Its objective is to transfer 'n' disks from the starting peg to the destination peg with the assistance of an intermediate peg. 


TIME COMPLEXITY : The time complexity of the Tower of Hanoi algorithm is O(2^n), where 'n' is the number of disks. This is an exponential time complexity because, at each step, the problem is divided into two recursive subproblems.

4.PRACTICAL 4 : COIN PERMUTATION 

ALGORITHM : 
This function recursively generates all combinations of heads (1) and tails (0) for a given number of coin tosses. It starts with an array arr initialized to all zeros, and at each recursion level, it sets the current toss to heads (1) and recursively calls itself for the next toss. Then, it sets the current toss to tails (0) and recursively calls itself again. 

TIME COMPLEXITY:
The time complexity of this code is exponential, specifically O(2^n), where 'n' is the number of coin tosses. This is because, at each toss, there are two possibilities (heads or tails), and the recursive function explores all possible combinations


5.PRACTICAL 5 : STRING PERMUTATION 
ALGORITHM :
This PRACRTICAL generates all permutations of a string using recursive backtracking. It swaps characters at different positions in the string to generate all possible arrangements. The base case is when the current position (k) reaches the end of the string (n).


TIME COMPLEXITY :
The time complexity of generating all permutations of a string is O(n!), where 'n' is the length of the string. The recursive backtracking approach explores all possible arrangements, resulting in a factorial growth in the number of function calls.

6.PRACTICAL : P0WER FUNCTION

brute approach

ALGORITHM :
This practical implements a simple recursive algorithm to calculate the power of 'm' raised to the 'n'-th exponent. It uses the recursive property of exponentiation: m^n = m * m^(n-1).


TIME COMPLEXITY : 
The time complexity of this code is exponential, specifically O(2^n), where 'n' is the exponent. This is because, at each step of the recursion, the problem is divided into two subproblems. 

2.optimal approach


ALGORITHM : 
The algorithm uses a recursive approach to calculate the power of 'm' raised to the 'n'-th exponent. It takes advantage of the fact that if 'n' is even, the exponentiation can be expressed as the square of the power of 'm' raised to half of 'n'.

TIME COMPLEXITY:
The time complexity of this code is logarithmic, specifically O(log n), where 'n' is the exponent. The optimization for even exponents significantly reduces the number of recursive calls, making the algorithm more efficient compared to the naive recursive approach. 

7.PRACTICAL 7 : QUICK SORT ANALYSIS
ALGORITHM:

This function implements the partition operation of the QuickSort algorithm. It selects a pivot element (here, the first element), rearranges the array elements such that elements smaller than the pivot come before it, and elements greater than the pivot come after it. The function returns the index of the pivot after partitioning.


TIME COMPLEXITY:
The time complexity of the partition operation in the QuickSort algorithm is O(n), where 'n' is the size of the array being partitioned



8.PRACTICAL : MERGE SORT ANALYSIS

ALGORITHM:

This practical implements the merge sort algorithm recursively. It divides the array into two halves, sorts each half independently, and then merges the sorted halves.

TIME COMPLEXITY:

The time complexity of the merge sort algorithm is O(n log n), where 'n' is the size of the array.

9. GENERATE MAGIC SQUARE

ALGORITHM :

The Siamese method is a constructive algorithm for creating odd-order magic squares.
The main idea is to start from the central cell of the first row and fill the square by moving diagonally up and to the right.
If a move takes the position out of the matrix bounds, it wraps around to the opposite side.
If the cell is already occupied, move vertically down one position instead.



TIME COMPLEXITY:
The time complexity of generating a magic square using the Siamese method is O(n^2), where 'n' is the order of the square.

10.MERGE SORT ALGORITHM 

ALGORITHM:

Merge sort is a divide-and-conquer algorithm that recursively divides the array into two halves, sorts each half, and then merges the sorted halves.
The merging step involves comparing and combining elements from two sorted arrays into a single sorted array.


TIME COMPLEXITY:
The time complexity of the merge sort algorithm is O(n log n), where 'n' is the size of the array.

11.PRACTICAL 11 : QUICK SORT ANALYSIS
AVERAGE CASE 

ALGORITHM :

Quick Sort is a divide-and-conquer sorting algorithm.
It selects a pivot element from the array and partitions the other elements into two subarrays, according to whether they are less than or greater than the pivot.
The process is repeated recursively on the subarrays.

TIME COMPLEXITY:
The time complexity of the average case for Quick Sort is O(n log n), where 'n' is the size of the array.

WORST CASE    
 
 ALGORITHM:

Quick Sort is a divide-and-conquer sorting algorithm.
It selects a pivot element from the array and partitions the other elements into two subarrays, according to whether they are less than or greater than the pivot.
The process is repeated recursively on the subarrays.


TIME COMPLEXITY:
The worst-case time complexity of Quick Sort is O(n^2) when the input array is already sorted, and the pivot is consistently chosen as the smallest or largest element.

12. PRACTICAL 12 : FIND MAX-MIN 

ALGORITHM :

findMaxMinRecursive: Implements a recursive approach to find the maximum and minimum elements in the array within a specified range.The recursive approach follows a divide-and-conquer strategy. It divides the array into two halves, recursively finds the maximum and minimum in each half, and then combines the results.


findMaxMinIterative: Implements an iterative approach to find the maximum and minimum elements in the array.The iterative approach traverses the array once, keeping track of the maximum and minimum elements.





TIME COMPLEXITY:

Recursive Approach: The time complexity is O(n) due to the divide-and-conquer strategy, where 'n' is the size of the array.
Iterative Approach: The time complexity is also O(n) as it traverses the array once.


## 13. PRACTICAL 13 : KNAPSACK PROBLEM 

ALGORITHM:

The Knapsack problem is solved using dynamic programming. The knapsack function initializes a 2D array (dp) to store the maximum profit achievable for different weights and items. It then iteratively fills the array, considering each item and its weight in different scenarios.
The compareByWeight, compareByProfit, and compareByRatio functions are used to sort the items based on weight, profit, and profit-to-weight ratio, respectively.



TIME COMPLEXITY:

The time complexity of the Knapsack problem solution is O(n * W), where 'n' is the number of items and 'W' is the capacity of the knapsack.
Sorting the items takes O(n * log(n)) time.
For each strategy, the overall time complexity is dominated by the sorting step.


14. PRACTICAL 14 : ACTIVITY SELECTION PROBLEM 

ALGORITHM :

The greedy algorithm selects activities based on their finish time.
It sorts the activities in ascending order of finish time.
It iterates through the sorted activities, selecting the first non-overlapping activity at each step.



TIME COMPLEXITY:

Sorting the activities: O(n log n), where 'n' is the number of activities.
Iterating through the sorted activities: O(n).
Overall time complexity: O(n log n).

15. PRACTICAL 15 : BINARY SEARCH ANALYSIS

ALGORITHM :

Binary search is an efficient algorithm for finding an element in a sorted array.
It repeatedly divides the search interval in half, comparing the target element to the middle element of the interval.
If the target element is equal to the middle element, the search is successful.
If the target is less than the middle element, the search continues in the lower half; otherwise, it continues in the upper half.
The process repeats until the target is found or the interval is empty.




TIME COMPLEXITY:


Best Case: O(1) - Occurs when the target is found in the middle in the first comparison.
Worst Case: O(log n) - Occurs when the target is not present, and the search space is halved at each step.
Average Case: O(log n) - Same as the worst case.

16. PRACTICAL 16 : ITERATIVE QUICK SORT

ALGORITHM:

The QuickSort algorithm sorts an array by selecting a pivot element, partitioning the other elements into two subarrays, and then recursively sorting the subarrays.
The iterative version uses a stack to manage the partitioning process without using recursion.



TIME COMPLEXITY:
Average Time Complexity: O(n log n)
Worst-Case Time Complexity: O(n^2) (uncommon with good pivot selection strategies)
The iterative version maintains the average time complexity of O(n log n) but avoids the function call overhead of recursion.


17.PRACTICAL 17 : PRIM'S ALGORITHM

ALGORITHM:

Prim's algorithm is a greedy algorithm used to find the Minimum Spanning Tree (MST) of a connected, undirected graph.
It starts with an arbitrary node and grows the MST one vertex at a time by adding the shortest edge that connects a vertex in the MST to a vertex outside the MST.
The process continues until all vertices are included in the MST


TIME COMPLEXITY:

In this implementation, a priority queue is used, and the overall time complexity is O((V + E) log V).


18.PRACTICAL 18 : DIJAKSTRA ALGORITHM 

ALGORITHM :

Dijkstra's algorithm is a greedy algorithm used for finding the single-source shortest paths in a weighted graph with non-negative weights.
It starts with an empty set of vertices and repeatedly selects the vertex with the minimum distance from the source, adding it to the set.
The algorithm then updates the distance values of the neighboring vertices based on the newly added vertex.
This process continues until all vertices are included in the set, and the algorithm finds the shortest paths from the source to all other vertices.



TIME COMPLEXITY :

In this implementation, an adjacency matrix is used, and the overall time complexity is O(V^2).


19.PRACTICAL 19 : CYCLE DETECTION

ALGORITHM:

The algorithm uses the Union-Find algorithm for detecting cycles in an undirected graph. It employs the concept of connected components and checks whether adding an edge forms a cycle by examining the roots of the vertices involved

TIME COMPLEXITY : 

The time complexity of the Union-Find operations (find and unionSets) is generally considered close to O(1) on average.
The isCyclic method iterates through all edges once, performing Union-Find operations. In the worst case, the time complexity is O(V + E * α(V)), where V is the number of vertices, E is the number of edges, and α is the inverse Ackermann function


20.PRACTICAL 20: KRUSKAL ALGORITHM

ALGORITHM: 

Kruskal's algorithm is a greedy algorithm that finds a minimum spanning tree for a connected, undirected graph.
It works by sorting the edges in non-decreasing order of weight and adding each edge to the MST as long as it does not form a cycle.
The Disjoint-Set data structure is used to efficiently check whether adding an edge creates a cycle

TIME COMPLEXITY:

The time complexity of Kruskal's algorithm is dominated by the sorting step, which has a time complexity of O(E log E), where E is the number of edges.
The Union-Find operations (finding and merging) take nearly constant time on average.
Overall, the time complexity of the entire algorithm is O(E log E).


MULTISTAGE GRAPH(fcost)
The program calculates the cost of the shortest path from each node to the end node using dynamic programming. It iterates backward starting from the last node (end node) and calculates the cost of the shortest path from each node to the end node.

TIME COMPLEXITY = O(V^2)

ASSEMBLY LINE
This algorithm computes the minimum time required to complete the assembly process and determines the optimal path (line) for each station. It utilizes dynamic programming to compute the minimum time recursively.

TIME COMLEXITY = O(n)

LONGEST COMMON SUBSEQUENCE
The program implements the Longest Common Subsequence (LCS) problem using dynamic programming. It calculates the length of the LCS between two given strings and prints the LCS along with arrows indicating the matching characters.

TIME COMPLEXITY = O(m*n). m and n are the lengths of the input strings.

MATRIX CHAIN MULTIPLICATION
The program utilizes dynamic programming to solve the Matrix Chain Multiplication problem, aiming to minimize the number of scalar multiplications needed to multiply a sequence of matrices. It iteratively computes the optimal number of multiplications for various subproblems, storing the results to avoid redundant computations.

TIME COMLEXITY = O(n^3)

0 1 Knapsack(DYNAMIC PROGRAMMING)
The algorithm solves the 0/1 knapsack problem using dynamic programming. It initializes a 2D array to store maximum values achievable for different weights and items. It iterates through each item and weight combination, updating the array based on whether including the item would improve the value. After filling the array, it traces back to determine the selected items.

TIME COMPLEXITY = O(n*W). is the number of items and W is the maximum capacity of the knapsack.

01 KNAPSACK(USING MERGE PURGE)
The provided algorithm employs dynamic programming to solve the 0/1 knapsack problem efficiently. It iterates through each item, constructing sets of pairs representing all possible combinations of accumulated values and weights up to the current item. These sets are merged and pruned to eliminate dominated solutions, ensuring only non-dominated solutions are considered. The algorithm then finds the maximum value among the remaining solutions and identifies the corresponding items contributing to it. TIME COMPLEXITY = O(2^n)

N QUEENS PROBLEM

The code employs a backtracking algorithm to solve the N-Queens problem efficiently. At its core, it iteratively places queens on a chessboard, ensuring no two queens threaten each other. The place function checks for conflicts with existing queens, validating potential queen placements. Through recursive backtracking in the Nqueens function, the algorithm systematically explores all possible configurations, marking valid solutions when all queens are placed successfully.

TIME COMPLEXITY = O(n!)

SUM OF SUBSETS

The provided algorithm tackles the sum-of-subsets problem using a backtracking approach. It recursively explores different combinations of elements in the array to identify subsets that sum up to a target value. At each step, the algorithm considers whether including the current element in the subset would lead to a valid solution, and if so, it adds the element to the subset and continues exploring further. If adding the element would exceed the target sum, the algorithm backtracks, excluding the element and exploring other possibilities. This process continues until all possible combinations are explored or until a valid subset summing up to the target value is found. By systematically pruning the search space using backtracking, the algorithm efficiently identifies all subsets that meet the sum condition, providing an optimized solution for the sum-of-subsets problem.

TIME COMPLEXITY = O(2^n)

MATRIX MULTIPLICATION(DIVIDE AND CONQUER)

The code employs Strassen's algorithm for matrix multiplication, a divide-and-conquer approach. It recursively partitions the input matrices A and B into smaller submatrices until reaching base cases. It then performs multiplications and additions according to Strassen's algorithm. The resulting matrix C is printed. This method optimizes multiplication for large matrices by reducing the number of scalar multiplications.

TIME COMPLEXITY = O(n^3)
