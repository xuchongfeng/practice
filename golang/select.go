package main

import "time"
import "fmt"

func main() {
    c1 := make(chan string)
    c2 := make(chan string)

    go func() {
        time.Sleep(time.Second)
        c1 <- "One"
    }()

    go func() {
        time.Sleep(time.Second * 2)
        c2 <- "Two"
    }()

    for i := 0; i < 2; i += 1{
        select {
        case msg := <-c1:
            fmt.Println(msg)
        case msg := <-c2:
            fmt.Println(msg)
        }
    }
}
