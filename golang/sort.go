package main

import "fmt"
import "sort"

func main() {
    str := []string{"a", "c", "b"}
    sort.Strings(str)
    fmt.Println(str)

    ints := []int{1,5,3,2}
    sort.Ints(ints)
    fmt.Println(ints)
}
