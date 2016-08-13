#!/usr/bin/python
# coding:utf8

class A(object):
    def __init__(self):
        print "A"

class B(object):
    def __init__(self):
        print "B"

class C(A, B):
    def __init__(self):
        print "C"
        super(C, self).__init__()


if __name__ == "__main__":
    c = C()

