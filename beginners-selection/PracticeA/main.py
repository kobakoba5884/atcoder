#!/usr/bin/env python3
# from typing import *



# def solve(a: int, b: int, c: int, s: str) -> Tuple[int, str]:
def solve(a, b, c, s):
    sum = a + b + c
    return map(str, [str(sum), s])

# generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
def main():
    a = int(input())
    b, c = map(int, input().split())
    s = input()
    f, g = solve(a, b, c, s)
    print(f, g)

if __name__ == '__main__':
    main()
