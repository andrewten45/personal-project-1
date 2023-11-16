#Simple countdown timer
s = 10

s.times do |i|
    t = s - i - 1
    min, sec = t/60, t%60
    sleep 1
    printf "\r%02d:%02d", min, sec
end

printf "\ndone"