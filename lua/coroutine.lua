-- coroutine.create , init a coroutine with an task
-- coroutine.resume , execute an task
-- coroutine.yield ,  stop the coroutine and return control to the scheduler
--

local function task(message) do
    print ("Inside task "..message)
    coroutine.yield()
    print ("Inside task "..message)
end

local t1 = coroutine.create(task)
local t2 = coroutine.create(task)

coroutine.resume(t1, 1)
coroutine.resume(t2, 2)

-- yield and resume to pass args
function f(x) do
    print("co1", x)
    print("co2", coroutine.yield())
end

co = coroutine.create(f)
coroutine.resume(co, "hi")
coroutine.resume(co, 4, 5)
