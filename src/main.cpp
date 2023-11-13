#include <execution>
#include <filesystem>
#include <iostream>
#include <string>
#include <thread>
#include <vector>
#include <fstream>

namespace fs = std::filesystem;

fs::path test_images_path =
    "/Users/tgross/Documents/GitHub/png-benchmarks/images";

int main() {
  auto images_to_compress = std::vector<fs::path>{};
  for (const auto& entry : fs::directory_iterator(test_images_path)) {
    images_to_compress.push_back(entry);
  }

  std::for_each(std::execution::par, std::begin(images_to_compress), std::end(images_to_compress), [&] (fs::path path) {
    if (fs::is_regular_file(path)) {
      std::ifstream png_file{path, std::ios::binary};
    }
  });
}