#include <vector>
#include <kata/game_of_life/config.hpp>

using World = std::vector<std::vector<bool>>;
const bool _ = false;
const bool O = true;

namespace kata {
namespace game_of_life {

GAME_OF_LIFE_API World generation(const World& world);

} // namespace game_of_life
} // namespace kata
