package main

import "fmt"

func zerovalue(value int) {
    value = 0
}

func zeropoint(value *int) {
    *value = 0
}

func main() {
    i := 1
    zerovalue(i)
    fmt.Println(i)

    zeropoint(&i)
    fmt.Println(i)
}
