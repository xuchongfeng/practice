package main

import "sync"
import "fmt"

func main() {
    var once sync.Once

    task := func() {
        fmt.Println("Do task")
    }

    status := make(chan bool)

    for i := 0; i < 10; i++ {
        go func() {
            once.Do(task)
            status <- true
        }()
    }

    for i := 0; i < 10; i++ {
        <- status
    }


}
