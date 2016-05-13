package main

import "time"
import "fmt"

func main() {
    request := make(chan int, 5)

    for i := 0; i < 5; i += 1 {
        request <- i
    }

    close(request)
    limiter := time.Tick(time.Millisecond * 200)

    for req := range request {
        <- limiter
        fmt.Println(req, time.Now())
    }

    bursty_limiter := make(chan time.Time, 3)
    for i := 0; i < 3; i += 1 {
        bursty_limiter <- time.Now()
    }

    go func() {
        for t := range time.Tick(time.Millisecond * 200) {
            bursty_limiter <- t
        }
    }()

    bursty_request := make(chan int, 5)
    for i := 1; i <= 5; i++ {
         bursty_request<-i
    }

    close(bursty_request)
    for req := range bursty_request {
        <-bursty_limiter
        fmt.Println(req, time.Now())
    }
}
