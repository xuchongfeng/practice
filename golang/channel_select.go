package main

import "fmt"
import "time"
import "math/rand"

func main() {
    r := rand.New(rand.NewSource(time.Now().UnixNano()))
    c1 := make(chan int)
    c2 := make(chan int)
    signal := make(chan int)

    go func() {
        for i := 0; i < 10; i++ {
            time.Sleep(time.Duration(r.Intn(2)) * time.Second)
            c1 <- i
        }
        signal <- 1
    }()

    go func() {
        for i := 10; i < 20; i++ {
            time.Sleep(time.Duration(r.Intn(2)) * time.Second)
            c2 <- i
        }
        signal <- 1
    }()

    exitGoroutines := 0
    for {
        select {
        case value := <- c1:
            fmt.Println(value)
        case value := <- c2:
            fmt.Println(value)
        case <- signal:
            exitGoroutines += 1
            if exitGoroutines == 2 {
                 fmt.Println("All goroutines are done")
                 return
            }
        }
    }
}
