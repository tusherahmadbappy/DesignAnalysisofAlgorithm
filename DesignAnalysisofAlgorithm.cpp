/*
Design Analysis & Algorithm

1. Linear search Algorithm.
Algorithm:

Step1: set pos=0 and searchValue
Step2: repat step 3 while i<=n
Step3: if a[i] equals to searchValue
		Set pos=1
		Set i++
Step4: if pos==0
		Print element not found
		Goto step6
Step5: print element is found
Step6: exit

2.Binary search Algorithm.
Algorithm:

Step1:  At first check the array is sorted or unsorted. If                       the array is unsorted then you have sorted the array    and search value is set.

Step2: Set two pointers low and high at the lowest and highest index respectively.

Step3: Find the middle element. i.e mid=(low+high)/2

Step4: If arr[i] == searchvalue. Then return mid. Else compare the element to be searched with m.

Step5: if searchvalue>mid. Compare searchvalue with the middle element on the right side of mid. This is done by setting low to low=mid+1.

Step6: Else compare searchvalue with the middle element on the left side of mid. This is done by setting high to high=mid-1.

Step7: Repat step3 to step6 until the low meets high.



3. Longest Common Subsequence

Algorithm:

Step1: Create a table of dimension (n+1*m+1) where n and m are the lengths of ‘x’ and ‘y’ respectively. The first row and first column are field with zeros.

Step2: Fill each cell of the table using the following logic.

Step3: If the character corresponding to the current row and current column are matching then fill the current cell by adding 1 to the diagonal value. Point and arrow to the diagonal cell.

Step4: Else, the maximum value from the previous column and previous row (value) for filling the current cell. Point and arrow to the cell with maximum value. If they are equal point to any of them.

Step5: Step2 is repeat until the table is field.

Step6: The value of the last column and last row is the length of longest common sub sequence.

Step7: In order to find the longest subsequence, start from the last element and follow the direction of the arrow. At last reverse the characters.


4. Job scheduling Algorithm.
Algorithm:

Step1: Sort all jobs in decreasing order.
Step2: Iterate all jobs in decreasing order of profit.
	     For each job, do the following:

a.	Find a time slot i . such that slot is empty and i<deadline and i is the greatest. Put the job in this slot and mark this slot field.
b.	If no such I exist, then ignore the job.

5. Find the minimum number of coins in greedy algorithm.
Algorithm:

Step1: Sort the array of coins in decreasing order.
Step2: Initialize result is empty.
Step3: Find the largest denomination that is smaller than current amount.
Step4: Add found denomination to result. Subtract value of denomination from amount.
Step5: If amount become 0, then print result.
Step6: Else repat step3 and step4 new value of v.


*/