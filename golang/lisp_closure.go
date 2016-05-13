package main

import "fmt"

func f(x, y int) func(t int) {
    return func(t int) {
        fmt.Println(x * y * t)
    }
}

func main() {
    var m = f(2, 3)
    m(2)
    m(10)
}
