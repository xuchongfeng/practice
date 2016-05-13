package main

import "fmt"

func printString() {
    i := 1093
    for j := 0; j < i; j += 1{
        fmt.Println("String: ", j)
    }
}

func printNum() {
    i := 10
    for j := 0; j < i; j += 1 {
        fmt.Println(j)
    }
}

func main() {
    go printString()
    go printNum()

    var input string
    fmt.Scanln(&input)
    fmt.Println(input)
}
