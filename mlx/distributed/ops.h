// Copyright © 2024 Apple Inc.

#pragma once

#include <optional>

#include "mlx/distributed/distributed.h"

namespace mlx::core::distributed {

array all_reduce_sum(const array& x, std::optional<Group> group = std::nullopt);
std::vector<array> all_reduce_sum(
    const std::vector<array>& xs,
    std::optional<Group> group = std::nullopt);
array all_gather(const array& x, std::optional<Group> group = std::nullopt);

} // namespace mlx::core::distributed
