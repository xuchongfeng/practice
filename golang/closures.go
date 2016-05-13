package main

import "fmt"

func initSeq() func() int {
    i := 0
    return func() int{
        i += 1
        return i
    }
}

func main(){
    nextId := initSeq()
    fmt.Println(nextId())
    fmt.Println(nextId())
    fmt.Println(nextId())
}
