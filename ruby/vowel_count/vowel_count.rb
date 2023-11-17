def get_count(input_str)
    vowel_count = 0
    input_str.each_char { |c|
        case c
        when 'a'
            vowel_count += 1
        when 'e'
            vowel_count += 1
        when 'i'
            vowel_count += 1
        when 'o'
            vowel_count += 1
        when 'u'
            vowel_count += 1
        end
    }
    return vowel_count
end