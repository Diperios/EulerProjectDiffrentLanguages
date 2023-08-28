max_sum = 0
(1..99).each do |a|
  (1..99).each do |b|
    sum = (a ** b).to_s.split("").map(&:to_i).reduce(:+)
    max_sum = [max_sum, sum].max
  end
end

puts "Maximum digital sum: #{max_sum}"
