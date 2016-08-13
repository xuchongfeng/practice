local d = {}
d[1] = true
d[2] = true
d[4] = true
d["x"] = true
print (#d)

local d = {}
d[1] = true
d[2] = true
d[3] = true
d["x"] = true
print (#d)

t = {x = 10, y = 45; "one", "two", "three"}
print(#t)
print(t.x)
print(t[1])

print(2^3^4)
print(2^-3^4)

a = 1 == 2
print(a)
print(type(a))
print(a == true)

local found = nil
a = {[1] = 1, [2] = 2, [3] = 3, [4] = -1}
for i = 1, #a do
    if a[i] < 0 then
        found = i
        break
    end
end
print(found)

for i = 1, 2 do
    ::first::
    local s = "first"
    print(s)
    goto second
    ::second::
    print(s)
end
