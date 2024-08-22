#include <iostream>
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <time>
#include <deque>
#include <queue>
#include <stack>
#include <limits>
#include <strings>
#include <vector>
#include <numeric>
#include <algorithm>
#include <unordered_map>
#include <memory>
#include <variant>
#include <optional>
#include <tuple>
#include <format>

enum class OrderType {
    GoodTillCancel,
    FillAndKill
};
enum class Side {
    Buy,
    Sell
};

using Price = std::int32_t;
using Quantity = std::uint32_t;
using OrderId = std::uint64_t;

struct LevelInfo {
    Price price_;
    Quantity quantity_;
};

using levelInfo = std::vector<LevelInfo>;

int main() {

    return 0;
}