function is_palindrome(s)
    return s == string.reverse(s)
end

sum = 0
for i = 1, 999999 do
    if is_palindrome(tostring(i)) and is_palindrome(string.format("%b", i)) then
        sum = sum + i
    end
end
print("Sum of all numbers less than one million that are palindromic in base 10 and base 2: " .. sum)
