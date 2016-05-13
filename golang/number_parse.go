package main

import "fmt"
import "strconv"

func main () {
    f, _ := strconv.ParseFloat("1.23", 64)
    fmt.Println(f)

    i, _ := strconv.ParseInt("123434", 0, 64)
    fmt.Println(i)
}
