# monty-hall-problem

Summary:
The monty hall problem is a brain teaser popularized by American televesion game show "Let’s Make a Deal", which was originally hosted by Monty Hall. 
-Suppose there's three doors, one of which was a car behind it and the other two have goats. 
-You guess which door has the car behind it and if you're correct you win the car. 
-After your guess, one of the doors that guarenteed has a goat behind it is eliminated (This cannot be your door). 
-Now, there's two doors left, your original guess and the remaining one
-You're given the option of changing doors or staying with your original guess.

Question:
Is switching your choice statistically the best option?

Hypothesis:
Before testing, I predict that if the contestant switches doors, the likelyhood of guessing the correct door will be the same as not switching.

Testing the Hypothesis:
I have coded a simulation of the Monty hall problem using vectors and random number generators to simulate the doors and which one has the car behind it. The code allows the user to enter how many trials they would like to simulate so I will be performing 10 sets of 100 simulations for each door and analyzing the results. 

Trial 1:
After Changing: no. right = 62, no wrong = 38
Without Changing: no. right = 25, no wrong = 75

Trial 2:
After Changing:  no. right = 60, no wrong = 40
Without Changing:  no. right = 37, no wrong = 63

Trial 3:
After Changing: no. right = 77, no wrong = 23
Without Changing:  no. right = 33, no wrong = 67

Trial 4:
After Changing: no. right = 64, no wrong = 36
Without Changing: no. right = 40, no wrong = 60

Trial 5:
After Changing: no. right = 62, no wrong = 38
Without Changing: no. right = 37, no wrong = 63


Trial 5:
After Changing: no. right = 75, no wrong = 25
Without Changing: no. right = 40, no wrong = 60


