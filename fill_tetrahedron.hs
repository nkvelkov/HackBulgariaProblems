
fill_tetrahedron:: Int->Float --(num)
fill_tetrahedron a = ((sqrt 2) * side / 12) / 1000
	where side = fromIntegral(a*a*a)
	