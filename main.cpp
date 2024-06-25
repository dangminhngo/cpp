#include <array>
#include <format>
#include <iostream>

int main() {
  const unsigned min_wt{100};
  const unsigned max_wt{250};
  const unsigned wt_step{10};
  const size_t wt_count{1 + (max_wt - min_wt) / wt_step};

  const unsigned min_ht{48};
  const unsigned max_ht{84};
  const unsigned ht_step{2};
  const size_t ht_count{1 + (max_ht - min_ht) / ht_step};

  const double lbs_per_kg{2.2};
  const double ins_per_m{39.37};
  std::array<unsigned, wt_count> weight_lbs{};
  std::array<unsigned, ht_count> height_ins{};

  for (unsigned i{}, w{min_wt}; i < wt_count; w += wt_step, ++i) {
    weight_lbs[i] = w;
  }

  for (unsigned i{}, h{min_ht}; i < ht_count; h += ht_step, ++i) {
    height_ins.at(i) = h;
  }

  std::cout << std::format("{:>8}", '|');
  for (auto w : weight_lbs)
    std::cout << std::format("{:^6}", w);
  std::cout << std::endl;

  for (unsigned i{1}; i < wt_count; ++i) {
    std::cout << "--------";
  }
  std::cout << std::endl;
}
