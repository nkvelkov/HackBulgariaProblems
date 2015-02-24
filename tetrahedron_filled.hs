
fill_tetrahedron:: Int -> Float --(num)
fill_tetrahedron a = ((sqrt 2) * side / 12) / 1000
	where side = fromIntegral(a*a*a)

tetrahedron_filled :: [Int] -> Int -> Int
tetrahedron_filled [] _ = 0
tetrahedron_filled list liters = tetrahedron_filled_helper (qsort list) (fromIntegral liters)

tetrahedron_filled_helper :: [Int] -> Float -> Int
tetrahedron_filled_helper [] _ = 0
tetrahedron_filled_helper (x:xs) liters 	
	| curVolume > liters = 0
	| otherwise = 1 + tetrahedron_filled_helper xs (liters - curVolume)
	where curVolume = fill_tetrahedron x 
		
qsort :: [Int] -> [Int]
qsort [] = []
qsort (x:xs) = [y | y <- xs, y < x] ++ [x] ++ [y | y <- xs, y >= x]
