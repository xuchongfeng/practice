#!/usr/bin/python
# coding: utf8
import math

def f(processed):
    value = math.pi

    def g():
        #if value > 10:
        #    print value
        value = 4

    if processed:
        import math
        value = math.sin(value)

    g()
    print value

if __name__ == "__main__":
    f(True)

