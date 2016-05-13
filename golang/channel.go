package main

import "fmt"

func main() {
    messages := make(chan string)

    go func() {
        messages <- "ping"
    }()

    msg := <-messages
    fmt.Println(msg)

    pipe := make(chan string, 3)
    pipe <- "hello"
    pipe <- "world"
    pipe <- "check"

    fmt.Println(<-pipe)
    fmt.Println(<-pipe)
    fmt.Println(<-pipe)
}
