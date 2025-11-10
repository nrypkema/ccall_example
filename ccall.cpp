#define EIGEN_USE_BLAS
#include <Eigen/Dense>
#include <iostream>
#include <chrono>

using namespace Eigen;
using namespace std::chrono;

extern "C" {
    void matmulcpp();
}

void matmulcpp() {
    auto t0 = std::chrono::high_resolution_clock::now();
    const int N = 3000;
    Eigen::MatrixXd A = Eigen::MatrixXd::Random(N, N);
    Eigen::MatrixXd B = Eigen::MatrixXd::Random(N, N);
    Eigen::MatrixXd C = A * B;
    auto t1 = std::chrono::high_resolution_clock::now();
    double elapsed_ms = duration_cast<std::chrono::microseconds>(t1 - t0).count() / 1000.0;
    std::cout << "Elapsed: " << elapsed_ms << " ms\n";
}

int main(int argc, char *argv[]) {
    matmulcpp();
    matmulcpp();
    matmulcpp();
    matmulcpp();
    matmulcpp();
}