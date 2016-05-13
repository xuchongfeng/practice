package main

import "fmt"

func main(){
    job := make(chan int, 5)
    done := make(chan bool)

    go func() {
        for {
            j, more := <-job
            if more{
                fmt.Println("receive: ", j)
            } else {
                fmt.Println("job done")
                done <- true
                return
            }
        }
    }()

    for j:=0 ; j < 3; j += 1{
        job <- j
    }

    close(job)
    fmt.Println("job sent")

    <- done
}
