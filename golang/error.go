package main

import "fmt"
import "errors"

func f1(args int) (int, error) {
    if args == 1 {
       return -1, errors.New("can not work with 1")
    }
    return args + 3, nil
}

type argError struct {
    arg int
    prob string
}

func (e *argError) Error() string {
    return fmt.Sprintf("%d - %s", e.arg, e.prob)
}

func f2(arg int) (int, error) {
    if arg == 1 {
        return -1, &argError{arg, "can not work with 1"}
    }
    return arg + 3, nil
}

func main() {
    for _, i := range []int{1, 2, 3} {
        if _, e:= f1(i); e != nil{
            fmt.Println("f1 failed:", e)
        }
    }

    for _, i:= range []int{1, 2, 3} {
        if _, e := f2(i); e != nil{
            fmt.Println("f2 failed:", e)
        }
    }
}
