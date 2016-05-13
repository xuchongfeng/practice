package main

import "time"
//import "strings"
import "fmt"

func ParseTime(src string, format []byte) time.Time {
    f := "2006-01-02 12:23:34"
    if format != nil {
        f = string(format)
    }
    t, err := time.Parse(f, src)
    if err != nil {
        panic(err)
    }
    return t
}

func main() {
    month := ParseTime("2014-06", []byte("2006-01"))
    previousMonth := month.AddDate(0, 0, -1)
    //rewardBeginDay := 26
    beginDate := previousMonth.AddDate(0, 0, 26 - previousMonth.Day()).Format("2006-01-02")
    endDate := month.AddDate(0, 0, 25 - month.Day()).Format("2006-01-02")

    fmt.Println(month)
    fmt.Println(month.Day())
    fmt.Println(previousMonth)
    fmt.Println(beginDate)
    fmt.Println(endDate)
}
