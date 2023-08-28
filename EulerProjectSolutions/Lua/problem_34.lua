function factorial(n)
    if n == 0 then return 1 end
    return n * factorial(n - 1)
end

sum = 0
for i = 10, 2540160 do
    local digit_sum = 0
    local num = i
    while num > 0 do
        digit_sum = digit_sum + factorial(num % 10)
        num = math.floor(num / 10)
    end
    if digit_sum == i then
        sum = sum + i
    end
end
print("Sum of all numbers which are equal to the sum of the factorial of their digits: " .. sum)
