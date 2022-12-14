#ifndef ADVENTOFCODE_2021_DAY01_H
#define ADVENTOFCODE_2021_DAY01_H

#include "../aoc2022.h"

namespace day01 {
	using input_t = std::vector<int>;
	using output_t = int;

	input_t parse(const parse_t& input);

	output_t first_part(const input_t& input);

	output_t second_part(const input_t& input);

	output_t expected_p1();

	output_t expected_p2();
}

#endif