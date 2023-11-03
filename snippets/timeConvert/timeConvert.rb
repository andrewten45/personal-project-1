#timeConvert.rb - convert given military time input to UTC & return value.

timeInput = '0900'

def convert_time(initTime) # 0900 CST -> 1400 UTC / Add 5 hours
    convertTime = initTime.to_i # Convert to numerical value
    
    # Add 5 hours
    convertTime = convertTime + 500

    # Convert back to string
    convertTime = convertTime.to_s

    return convertTime # Return value
end

puts convert_time(timeInput)