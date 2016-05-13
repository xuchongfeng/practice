package main

import "fmt"
import "time"

func main() {
    var f = func() {
        fmt.Println("hello")
    }
    go f()
    time.Sleep(time.Second)
    fmt.Println("world")
}
