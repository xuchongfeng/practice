#!/usr/bin/python
# coding: utf8

class A(object):
    def __init__(self):
        self.age = 10
        self.name = "fuck"

    @property
    def f(self):
        return self.age, self.name

    def getter(self):
        return self.name

    def setter(self, name):
        self.name = name

    x = property(getter, setter)


if __name__ == "__main__":
    a = A()
    print a.f
    print dir(a.f)

    a.f = None
    print a.f

    a.x = "hehe"
    print a.x
