def quadrant(x, y)
    case [x, y]
    in [0.., 0..] then 1
    in [..0, 0..] then 2
    in [..0, ..0] then 3
    in [0.., ..0] then 4
  end
end

puts quadrant(1, 1) # Should output "1"
puts quadrant(-1, 1) # Should output "2"
puts quadrant(-1, -1) # Should output "3"
puts quadrant(1, -1) # Should output "4"