#!/usr/bin/env python3
# usage: $ oj generate-input 'python3 generate.py'
# usage: $ oj generate-input --hack-actual=./a.out --hack-expected=./naive 'python3 generate.py'
import random

# generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
def main():
    a = random.randint(1, 10)  # TODO: edit here
    b = [None for _ in range(a)]
    c = [None for _ in range(a)]
    d = [None for _ in range(a)]
    for i in range(a):
        b[i] = random.randint(1, 10)  # TODO: edit here
        c[i] = random.randint(1, 10)  # TODO: edit here
        d[i] = random.randint(1, 10)  # TODO: edit here
    e = random.randint(1, 10)  # TODO: edit here
    print(a, end=' ')
    for i in range(a):
        print(b[i])
        print(c[i], end=' ')
        print(d[i], end=' ')
    print(e)

if __name__ == "__main__":
    main()
