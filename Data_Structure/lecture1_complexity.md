# Performance Analysis
Performance analysis is for estimating machine-independent time and spac(memory) required by a program.

## Space Complexity
Space complexity tells us the space needed by a program. Space needed by a program is the sum of the following components.

1. Fixed space requirements   
This component refers to space requirements that do not
depend on the number and size of the program’s inputs and outputs. The fixed require­
ments include the instruction space (space needed to store the code), space for simple
variables, fixed-size structured variables (such as structs), and constants.
2. Variable space requirements   
This component consists of the space needed by
structured variables whose size depends on the particular instance, /, of the problem
being solved. It also includes the additional space required when a function uses recursion.

## Time Complexity
Time complexity is a machine independent time needed by a program. The time, T{P) taken by a program, P, is the sum of its compile time and its run (or exe­cution) time. But evaluating the exact time is no use as it differs by processor time. So instead we calculate  time complectity using system clock to time the program. And to evaluate more easily we divide the program into distinct steps and count steps

**Program Step**
A program step is a syntactically or semantically meaningful program seg­ment whose execution time is independent of the instance characteristics.

- low level step: Count one basic operation(add, sub, ...) as one step
- high level step: Any fixed number of combination of basic operation equals a single step.

## Asymptotic Notation
Our motivation to determine step counts is to be able to compare the time complexities of two programs that compute the same function and also to predict the growth in run time as the instance characteristics change.

### Big O
> f(n) = O(g(n)) : If and only if there exist positive constants c and Hq such that f(n) <= cg(n) for all n, n > Hq.

Meaning that Big O notation finds a function that is close but always have a bigger growth than f(n). g(n) plays a role of upper bound for f(n), telling the worst case complexity.


### Omega
> f(n) = Omega(g(n)) : If and only if there exist positive constants c and Hq such that f(n) >= cg(n) for all n, n > Hq.

Meaning that Big O notation finds a function that is close but always have a smaller growth than f(n).

## Theta
> f(n) = Theta(g(n)) : If and only if there exist positive constants c1, c2 and Hq such that c1g(n) <= f(n) <= c2g(n) for all n, n > Hq.

The theta notation is more precise than both the big oh and omega notations, as theta notation find a function that has a simmilar growth compared to f(n). However theta notation is hard to find so big O notation is most often used.