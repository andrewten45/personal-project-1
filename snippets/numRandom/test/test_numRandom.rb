#Test site for random number generator class
#Unit testing in the traditional sense is difficult; opting for testing using generated values

require_relative '../lib/numRandom.rb'
require 'csv'

#Generate a csv given number of iterations of the loop
numIter = 5
csv_string = CSV.generate do |csv|
  for i in 0..numIter - 1
    csv << [GenNumRandom.basic]
  end
end

puts csv_string