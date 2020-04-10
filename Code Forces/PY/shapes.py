shapes = {
	"Tetrahedron":4,
	"Cube":6,
	"Octahedron":8,
	"Dodecahedron":12,
	"Icosahedron":20
}
total = 0
for _ in range(int(input())):
	total+=shapes[input()]

print(total)
