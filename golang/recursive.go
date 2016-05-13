package main

import "fmt"

func fab(a int) int{
    if a == 0 {
        return 1
    }
    return a * fab(a - 1)
}

func main() {
    fmt.Println(fab(10))
    fmt.Println(fab(11))
}
