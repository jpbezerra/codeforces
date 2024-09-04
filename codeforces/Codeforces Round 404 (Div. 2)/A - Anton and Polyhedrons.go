package main

import "fmt"

func main() {
	var number, faces int
	fmt.Scan(&number)

	for i := 0; i < number; i++ {
		var polyhedron string
		fmt.Scan(&polyhedron)

		switch polyhedron {
		case "Tetrahedron":
			faces += 4
		case "Cube":
			faces += 6
		case "Octahedron":
			faces += 8
		case "Dodecahedron":
			faces += 12
		case "Icosahedron":
			faces += 20
		default:
			continue
		}
	}

	fmt.Println(faces)
}