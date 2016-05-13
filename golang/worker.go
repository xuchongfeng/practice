package main

import "time"
import "fmt"

func worker(id int, job <-chan int, result chan<- int) {
    for j := range job {
        fmt.Println("worker ", id, "processing job")
        time.Sleep(time.Second)
        result <- j * j
    }
}

func main() {
    job := make(chan int, 100)
    result := make(chan int, 100)

    for cnt := 1; cnt <= 3; cnt += 1{
        go worker(cnt, job, result)
    }

    for j := 1; j <= 9; j += 1{
        job <- j
    }

    close(job)

    for i := 1; i <= 9; i += 1{
         <-result
    }
}
