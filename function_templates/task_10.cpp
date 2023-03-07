
#include <vector>
#include <iostream>

using namespace std;

template <typename T>
void matrixMultiply(T (&arr)[N]);
int main()
{
    std::vector<std::vector<int>> a = {{1, 2}, {3, 4}};
    std::vector<std::vector<int>> b = {{5, 6}, {7, 8}};
    std::vector<std::vector<int>> c = matrixMultiply(a, b);
    return 0;
}

template <typename T>
std::vector<std::vector<T>> matrixMultiply(const std::vector<std::vector<T>> &a, const std::vector<std::vector<T>> &b)
{
    size_t n = a.size(), m = b[0].size(), p = b.size();
    std::vector<std::vector<T>> c(n, std::vector<T>(m));

    for (size_t i = 0; i < n; ++i)
    {
        for (size_t j = 0; j < m; ++j)
        {
            for (size_t k = 0; k < p; ++k)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    return c;
}
