CXX = g++
CXXFLAGS = -Wall -Wextra

SRCS = main.cpp rtweekend.h vec3.h camera.h color.h hittable.h hittable_list.h ray.h sphere.h

EXE = raytrace

all: $(EXE)

$(EXE): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(EXE)


clean:
	rm -f $(EXE)
