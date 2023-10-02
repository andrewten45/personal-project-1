#Test site for random number generator class
#Unit testing in the traditional sense is difficult; opting for testing using generated values

#require numRandom.rb
require 'csv'

csv_string = CSV.generate do |csv|
  #csv << ["row", "of", "CSV", "data"]
  #csv << ["another", "row"]
  # ...
end