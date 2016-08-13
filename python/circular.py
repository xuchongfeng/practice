#!/usr/bin/python
# coding:utf8

class Animation(object):
    def __init__(self, callback):
        self._callback = callback

class Entity(object):
    def __init__(self):
        self._animation = Animation(self._complete)
    def _complete(self):
        pass

def f():
    pass

if __name__ == "__main__":
    e = Entity()
    print dir(e._animation._callback)
    print dir(f)
    print e._animation._callback.im_self is e
