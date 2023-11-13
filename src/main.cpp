#include <execution>
#include <filesystem>
#include <iostream>
#include <string>
#include <thread>
#include <vector>

namespace fs = std::filesystem;

fs::path test_images_path =
    "/Users/tgross/Documents/GitHub/png-benchmarks/images";

int main() {
  auto images_to_compress = std::vector<fs::path>{};
  for (const auto& entry : fs::directory_iterator(test_images_path)) {
    images_to_compress.push_back(entry.path());
  }

  for (const auto& path : images_to_compress) {
    std::cout << path.string() << std::endl;
  }
}