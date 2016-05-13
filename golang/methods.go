package main

import "fmt"

type rect struct {
    height, width int
}

func (r *rect) area() int {
    return r.height * r.width
}

func (r rect) perim() int{
    return r.height * r.width
}

func main() {
    r1 := rect{12, 15}
    fmt.Println(r1.area())
    fmt.Println(r1.perim())
}
