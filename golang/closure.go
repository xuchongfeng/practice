package main

import "fmt"

func main() {
    var f = func(t int) {
        var base = 2
        func() {
            fmt.Println(base * t);
        }()
    }
    f(20)
}
