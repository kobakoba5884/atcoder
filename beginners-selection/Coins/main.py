#!/usr/bin/env python3
# from typing import *

# def solve(A: int, B: int, C: int, X: int) -> int:
def solve(A, B, C, X):
    return sum([500*i+100*j+50*k==X for i in range(A+1) for j in range(B+1) for k in range(C+1)])
            

# generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
def main():
    A = int(input())
    B = int(input())
    C = int(input())
    X = int(input())
    a = solve(A, B, C, X)
    print(a)

if __name__ == '__main__':
    main()
