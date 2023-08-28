def is_palindrome?(n)
    n.to_s == n.to_s.reverse
  end
  
  count = 0
  for i in 1..9999
    n = i
    50.times do
      n += n.to_s.reverse.to_i
      if is_palindrome?(n)
        count += 1
        break
      end
    end
  end
  
  puts "Number of Lychrel numbers below 10000: #{10000 - count}"
  