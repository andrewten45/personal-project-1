def find_needle(haystack)
    cur_pos = 0
    haystack.each { |x| 
    case x
      when "needle"
        return "found the needle at position " + cur_pos.to_s
      else
        cur_pos += 1
    end
    }
end