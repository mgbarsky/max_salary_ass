# Max Salary

As the last
question of an interview, your future boss gives you a few pieces of paper
with a single number written on each of them and asks you to compose
a largest number from these numbers. The resulting number is going to
be your salary, so you are very motivated to solve this problem!


The formalized version of the problem is given below:
<h3>Largest Concatenate Problem</h3>
<pre><em>Compile the largest number by concatenating the given numbers.</em>
<strong>Input:</strong> A sequence of positive integers.
<strong>Output:</strong> The largest number that can be obtained by concatenating the given integers in some order.
</pre>

A simple greedy approach would be to select the largest number, append it to the result, remove it from the pile, and continue the same way until no more numbers left.

Unfortunately, this algorithm does not always maximize your salary!
For example, for an input consisting of two integers 23 and 3, when deciding which one is "larger", the algorithm will choose 23, and the result will be 233, while the largest number is 323.

Not to worry, all you need to do to maximize your salary is to change your greedy move: when looking for the best next number to append, do not compare it with the max number found so far, but decide which number is better to go next, using a special function <code>int is_bettter(int best_so_far, int current)</code>.

For example, <code>is_bettter(23, 3)</code> should return 1, which means that <code>current</code> is better than <code>best_so_far</code>.

Thus, your main task is to correctly implement a greedy move in such a way that it becomes a <em>safe</em> move.

In addition to this 'challenging' task, in this assignment you would need to write your own <code>make</code> file and your own stress test. In the stress test, you would need to compare the correctness of your greedy algorithm to the correctnes of the naive implementation of the exhaustive search, which will test all possible concatenations of given numbers, and will select the best one.

The only starter code provided for this assignment is an implementation of the Heap’s algorithm for generating all permutations in an array of integers.
