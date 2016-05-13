package main

import "net/http"
import "io"
import "os"

func main() {
    resp, err := http.Get("http://baidu.com")
    if err !=  nil {
        fmt.Println("get error")
        return
    }
    defer resp.Body.Close()
    io.Copy(os.Stdout, resp.Body)
    return
}
