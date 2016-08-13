print(os.date())

a = "hello" or 1
print(a)

function f(...)
    local s = ""
    for i, v in ipairs{...} do
        s  = s +v
    end
    return s
end

function g(list)
    print(table.unpack(list))
    for i, v in ipairs(list) do
        print(v)
    end
end

list = {[1]=1, [2]=2, [3]=3}
g(list)


function t(...)
    local args = {}
    for i, v in ipairs{...} do
        if i ~= 1 then
            args[i] = v
        end
    end
    return args
end

args = t(1,2,3,4,5,6)
for k, v in pairs(args) do
    print(v)
end
