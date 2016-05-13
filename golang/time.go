package main

import "fmt"
import "time"

func main() {
    p := fmt.Println

    now := time.Now()
    p(now)

    then := time.Date(
        2009, 11, 17, 20, 34, 56, 0, time.UTC)

    p(then)

    p(now.Year())
    p(now.Month())
    p(now.Day())
    p(now.Hour())
    p(now.Minute())

    p(then.Before(now))
    p(then.After(now))
    p(then.Equal(now))
}
