CXX = g++
CXXFLAGS = -Wall -Wextra -std=gnu++2b -pedantic-errors

TARGETS = algo deque map pq set stack struct vector recap template iterator linkedlist

SRC_DIR = code
BUILD_DIR = build

%: $(SRC_DIR)/%.cpp
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $< -o $(BUILD_DIR)/$@ 
	./$(BUILD_DIR)/$@

.PHONY: clean
clean:
	rm -rf $(BUILD_DIR)
