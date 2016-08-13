f = load("i = i + 1")

i = 0
f();print(i)
f();print(i)

local i = 32
g = function() i = i + 1; print(i) end
g()

print(load(" i i"))
