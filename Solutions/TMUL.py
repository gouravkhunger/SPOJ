'''
https://www.spoj.com/problems/TMUL/
TMUL - Not So Fast Multiplication
File Creation Date: 24-Oct-2020
Author: WazeAzure(https://github.com/WazeAzure)
'''

n = int(input())
arr = [ ]

for i in range(0,n):
	a,b= input().split()
	arr.append(int(a)*int(b))
	
for num in arr:
	print(num)
