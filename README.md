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

Before testing, I predict that if the contestant switches doors, the likelyhood of guessing the correct door will be greater than not switching.

Testing the Hypothesis:

I have coded a simulation of the Monty hall problem using vectors and random number generators to simulate the doors and which one has the car behind it. The code allows the user to enter how many trials they would like to simulate so I will be performing 10 sets of 10000 simulations for each door and analyzing the results. With 100000 trials for each situation, I hoped to get as close to the true probability as possible. 

Trial 1:

After Changing: Percent right = 66.98, Percent wrong = 33.02
Without Changing: no. right = 33.67, no wrong = 66.33

Trial 2:

After Changing:  Percent right = 67.20, Percent wrong = 32.80
Without Changing:  no. right = 33.59, no wrong = 66.41

Trial 3:

After Changing: Percent right = 67.02, Percent wrong = 32.98
Without Changing:  Percent right = 33.54, Percent wrong = 66.46

Trial 4:

After Changing: Percent right = 66.85, Percent wrong = 33.15
Without Changing: Percent right = 33.83, Percent wrong = 66.17

Trial 5:

After Changing: Percent right = 66.26, Percent wrong = 32.74
Without Changing: Percent right = 33.62, Percent wrong = 66.38

Trial 6:

After Changing: Percent right = 67.78, Percent wrong = 32.22
Without Changing: Percent right = 33.74, Percent wrong = 66.26

Trial 7:

After Changing: Percent right = 66.52, Percent wrong = 33.48
Without Changing: Percent right = 32.91, Percent wrong = 67.09

Trial 8:

After Changing: Percent right = 66.31, Percent wrong = 33.69
Without Changing: Percent right = 33.36, Percent wrong = 66.64

Trial 9:

After Changing: Percent right = 66.50, Percent wrong = 33.50
Without Changing: Percent right = 34.25, Percent wrong = 65.75

Trial 10:

After Changing: Percent right = 67.09, Percent wrong = 32.91
Without Changing: Percent right = 33.32, Percent wrong = 66.68

Results

*Correct after changing:
mean: 66.851,
Min: 66.26,
Max: 67.78,
Standard Deviation: 0.443

*Correct without changing:
mean: 33.583,
Min: 32.22,
Max: 34.25,
Standard Deviation: 0.334


Conclusions:
After analyzing the results of the tests, we can say consisively that if the player changes doors, then they will have a higher chance of getting the door than if they didn't change.
