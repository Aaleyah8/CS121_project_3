## a.main()

Make an array of 5 0 values, call it horsea
set keepGoing to be true

While keepGoing:
  run through each horse in array
  advance that horse
  print the lanes for each horse
    if that horse won
  set keepGoing to false
  askm user for input to start next turn
  
  ## advance()

given a horse number and the array of horses
roll a 0 or 1 value, put it in a coin
add coin to the horse's position value in the array

##printLane()

given a horse number and the array of horses
loop from zero to TRACK_LENGTH
  if the current loop index is equal to the horse's value
 print the horse's id
end main
