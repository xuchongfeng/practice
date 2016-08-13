#!/usr/bin/python
# coding:utf8

def run():
    d = {1:2,3:4,4:5}
    for i in d.keys():
        print i
        d.pop(i)

    print d

if __name__ == "__main__":
    run()
