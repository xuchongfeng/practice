package main

import "fmt"

func main() {
    c1 := make(chan string, 1)

    select {
    case msg:= <-c1:
        fmt.Println(msg)
    default:
        fmt.Println("No message received")
    }
}
